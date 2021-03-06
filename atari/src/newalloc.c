/* 
 * Stripped down and modified to do just the NEW segment in the stack
 */
/*
 * Segment allocator.  Allows allocation from various partitions of
 * data, which are unfortunately called segments.
 *
 *	Segment		Function				Moves
 *	-------		--------				-----
 *	SEG_MALLOC	Data segment - ordinary data		no
 *	SEG_NEW		New and dispose data			?
 *	SEG_FIXED	Other data that can't be relocated but	no
 *			is too large to be kept in the data seg
 *	SEG_STRING	String data - constants and comments	yes
 *	SEG_TREE	Tree nodes				yes
 *
 *
 * References within these segments are 16 bit addresses (with the possible
 * exception of references to the fixed segment data).
 *
 * The first two segments are special since they are located within the
 * data segment, and therefore are handled specially.
 *
 * The other segments can grow and shrink; since they are packed against
 * each other, if a segment grows, the segments following it must be
 * relocated (shifted up in memory).  Since there are no segments
 * before the fixed segment, it never moves.
 *
 * Shrinking might be a tuffy.
 *
 * A segment table keeps information on what segment is where, how long
 * it is, and how much it should be grown by if it needs to be grown.
 * Information in this table is kept in "paragraph" (16 byte block) units,
 * which should permit segments to grow larger than 64K (although this may
 * only be useful for data kept in the "fixed" segment).
 */


#include "alice.h"
typedef char *offset;
typedef char *exptr;
struct blk {
	struct blk *next;			/* next in free list */
	unsigned size;			/* size, including blk header */
};
struct seginfo {
	unsigned si_size;			/* current size (paragraphs) */
	unsigned grow;				/* amt. to grow by (paras) */
	struct blk *free;			/* start of free list */
	int	NeedsReserve;			/* needs a reserve area */
	char	*ReserveMem;			/* reserved area */
	pint	Amount_Used;			/* how much memory used */
};
typedef struct blk *	BlkP;
typedef struct blk *FarBlkP;

#define BIGBLOCK 16

#ifdef DB_SEGALLOC
# define PRINTT
#endif
#include "printt.h"
#ifdef FP_OFF
#undef FP_OFF
#endif

#define FP_OFF(x) (x)

/* Block align on boundaries of 8 */
#define	BLKALIGN(x)	(BlkP)(((long)x + 7) & ~7)

#define	FIRST_BLOCK	((offset)8)	/* avoid 0 and NULL conflicts */

#define	INFINITY	0xffff
#define	ZEROBLOCK	(pointer)1		/* special token for alloc(0) */

/*
 * Conversion from bytes to paragraphs (16 byte blocks) and back
 */
#define	ByToPa(bytes)	(((bytes) + 15) / 16)	/* bytes to paragraphs */
#define	PaToBy(paras)	((paras) * 16)		/* paragraphs to bytes */



#define	X		0		/* but denotes ``don't care'' */
#define TP		(pointer)1	/* don't free this */

struct seginfo	newmem =
/*		size	grow		free,	reserve,area,	used */
/* NEW */   {	X,	X,		0,	FALSE,  TP,	0	};

#define	ONE_CHUNK	4096

/*
 * Macro to access segment associated with a segment number
 */

/*static char	NotEnoughMem[] = "Not enough memory"; */

/* status line redraw */
#ifdef SAI
#define RStat()
#else
extern int redraw_status;
#define RStat() redraw_status = TRUE;
#endif

/*
 * Initialization
 *
 * Find out how much memory is available.
 *
 * Create segments for NEW, FIXED, and STRING.
 *
 * Load in the builtin, strings, and error message data.  The TREE segment
 * is created as the builtin data is loaded.
 *
 * Returns non zero if anything goes wrong.
 */

/*
 * Storage allocator: maintains a sorted (by address) free list, allocates
 * using first fit strategy, coalesces free blocks when freeing.
 *
 * Last entry in free list has next == NULL and size == INFINITY.
 */

#ifdef DB_SEGALLOC
/*
 * Dump the segment table and this segment's free list
 */
# define dumpFreeList(segNo)
#endif DB_SEGALLOC

newSize( bigblock )
unsigned int *bigblock;
{
	register struct seginfo	*segp;
	FarBlkP	bp;
	unsigned total = 0;
	unsigned final_size;		/* size of terminating block */
	extern pointer sp;		/* stack pointer (really a union)*/


	/* this code could be a lot more efficient by assuming data seg */
	*bigblock = 0;
	for (bp = (FarBlkP)newmem.free; bp->size != INFINITY;
				bp = bp->next) {

		total += bp->size;
		if( bp->size > *bigblock )
			*bigblock = bp->size;
		}
	final_size = (sp - (pointer)bp) - STACK_BUFFSZ;
	if( final_size > *bigblock )
		*bigblock = final_size;
	return total + final_size;
}



firstFreeBlock(freeOff)
pointer	freeOff;
{
	FarBlkP	bp;

	freeOff = (pointer)BLKALIGN(FP_OFF(freeOff));
	newmem.free = freeOff;
	newmem.Amount_Used = FP_OFF(freeOff);
	bp = (FarBlkP)freeOff;
	bp->size = INFINITY;

	bp->next = INFINITY;
}

extern pointer	free_top;

/*
 * Allocate 'size' bytes of memory from segment 'segNo'.  Returns
 * NULL on failure.
 *
 * First fit strategy
 */
offset
segAlloc(segNo, size)
unsigned segNo;				/* segment number */
register unsigned size;				/* bytes to allocate */
{
	register struct seginfo	*segp;		/* this seg's seginfo entry */
	offset	ret;			/* return value */
	exptr zerop;			/* zeroing pointer */
	int i;				/* loop var */
	FarBlkP	bp;			/* current blk in list */
	FarBlkP	prev;			/* previous blk in list */

	printt2("segAlloc(%d, %u)\n", segNo, size);

	if (size == 0)
		return (offset)ZEROBLOCK;
	

	size = (unsigned)BLKALIGN(size);

	/*
	 * Walk the free list looking for a large enough free block.
	 * This is guaranteed to terminate successfully since there is a
	 * block of size INFINITY at the end of the list.
	 */
	for (bp = (FarBlkP)newmem.free, prev = NULL; bp->size < size;
	     prev = bp, bp = bp->next)
		printt3("bp=%lx, bp->next=%x, bp->size=%u\n", bp, bp->next, bp->size);

	/*
	 * Found a large enough free block, now allocate the storage from it.
	 */
	if (bp->size == size) {
		/*
		 * Exactly correct size.  Remove the whole block from the
		 * free list and return it.
		 */
		if (prev)
			prev->next = bp->next;
		else
			newmem.free = bp->next;
		ret = bp;
		}
	else {
		/*
		 * Split off the front part of the free block and return it.
		 */
		FarBlkP	newbp;

		/*
		 * If this block's size is INFINITY, then it is the special
		 * last free block.  The rest of the memory from bp to the end
		 * of the segment is free.  If that amount of space is not
		 * sufficient to hold th                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ((exptr)bp + size);
		newbp->size = (bp->size == INFINITY) ? INFINITY
						     : bp->size - size;

		/*
		 * Manage free_top for new segment allocation
		 */
		if( newbp->size == INFINITY)
			free_top = (pointer)newbp + sizeof(struct blk);

		/*
		 * Link the new block into the list.
		 */
		newbp->next = bp->next;
		if (prev)
			prev->next = newbp;
		else
			newmem.free = newbp;

		ret = bp;
		}

	newmem.Amount_Used += size;
	RStat();
	zero( ret, size );
	return ret;
}

/*
 * Free 'size' bytes at 'p' in segment 'segNo'.  Maintains sorted free list
 * and coalesces free adjacent free blocks.  Returns 0 if things are peachy
 */
newFree(pOff, size)
pointer	pOff;
unsigned size;
{
	register struct seginfo	*segp;	/* this seg's seginfo entry */
	FarBlkP	p;		/* blk we're freeing */
	FarBlkP	bp;		/* blk ptr */
	FarBlkP prev;		/* previous blk in list */
	exptr endmarker;	/* end of this block */
	exptr endofprev;	/* end of previous block */





	if (pOff == ZEROBLOCK)
		return 0;



	p = (FarBlkP)pOff;
	/*
	 * Walk the free list to position ourselves between
	 * the free block with a higher address than p and the
	 * prevous block.
	 */
	for (bp = newmem.free, prev = NULL; bp < p;
	     prev = bp, bp = bp->next)
		printt2("prev=%lx, bp=%lx\n", prev, bp);

	printt2("inserting between %lx and %lx\n", prev, bp);
	p->size = (unsigned)BLKALIGN(size);
	p->next = bp;

	/* coalesce adjacent blocks */
	endmarker = ((exptr)p) + p->size;

	if ( endmarker == (exptr)bp) {
		if (bp->size == INFINITY) {
			/* free_top? */
			p->size = INFINITY;
			free_top = (pointer)p + sizeof(struct blk);
			}
		else
			p->size += bp->size;
		p->next = bp->next;
		}
	 else if( endmarker > (exptr)bp ) 
		return freerror( pOff );

	if( prev ) {
		endofprev = (exptr)prev + prev->size;
		if( prev->size == INFINITY || endofprev > (exptr) p )
			return freerror( pOff );
		else
			prev->next = p;	/* make free block */
		}
	else
		newmem.free = (pointer)p;

	if (prev && endofprev == (exptr)p) {
		if (p->size == INFINITY) {
			/* free_top? */
			prev->size = INFINITY;	/* arg, oh no */
			free_top = (pointer)prev + sizeof(struct blk);
			}
		else
			prev->size += p->size;
		prev->next = p->next;
		}
	newmem.Amount_Used -= (unsigned)BLKALIGN(size);
	RStat();
	return 0;
}


freerror( pOff )
offset pOff;	/* offset */
{
	warning( ER(201,"Improper memory free" ) );
	return -1;
}


newClear()
{
	firstFreeBlock(free_top = exec_stack );
}

pointer
newAlloc(size)
unsigned	size;
{
	pointer p;
	if (!(p = (unsigned int *)segAlloc(0,size)) )
		run_error( ER(47,"outdyn`Out of dynamic memory (strings, arrays)") );
	return p;
}

