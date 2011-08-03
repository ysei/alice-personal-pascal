/*
 * alice.h: common point to include every alice related header file.
 */

#include <whoami.h>
#define CAST(ctp)  (ctp)
#define CNTL(x)	(x & 037)
#define TRUE (1)
#define FALSE (0)

#ifndef ECURSES
#define A_ATTRIBUTES 0x80
#define A_CHARTEXT 0x7f
#endif

/*
 * If we are in the stand-alone interpreter, dont load templates from
 * disk, and disable the trace features
 */

#ifdef SAI
#define SMALL_TPL	1
#endif

#ifndef SMALL_TPL
#define LOADABLE_TEMPLATES 1
#define Trace 1
#endif

#define	NOKEYS		1

#include <stdio.h>

#ifdef QNX
#ifdef INCLUDEIO
#include <io.h>		/* Stupid QNX redeclares type of FILE */
#endif
#endif


#ifdef qnx
#define void int
#endif

#ifdef MAP
# include "mdebug.h"
# define NOBFUNC
#else
# ifdef INTERP
#  include "idebug.h"
#  define NOBFUNC
# else INTERP
#  ifdef SAI 
#   include "ldebug.h"
#   ifndef FUNCTIONS
#     ifdef ES_TREE
#       define NOBFUNC
#     endif
#   endif
#  else SAI 
#   include "debug.h"
#   ifndef FUNCTIONS
#    ifdef ES_TREE
#     define NOBFUNC
#    endif ES
#   endif FUNCTIONS
#  endif SAI 
# endif INTERP
#endif MAP

#include "altypes.h"
#include "tune.h"

#ifndef NOFUNCS
# include "functions.h"
#endif

#if defined(msdos)
# define msdosGraphics
#endif

#ifdef ES
# include "esmacros.h"
# include "esbuilt.h"
#else
# ifdef ES_TREE
#  include "esbuilt.h"
#  include "hmacros.h"
# else
#  include "macros.h"
# endif
#endif
#include "node.h"
#include "treerot.h"
