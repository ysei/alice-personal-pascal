#define CM_EXIT		1
#define CM_CLEAR	2
#define CM_BACK		3
#define CM_FWD		4
#define CM_EABOVE	5
#define CM_EBELOW	6
#define CM_NEXT		7
#define CM_DELETE	8
#define CM_DELLIST	9
#define CM_PGUP		10
#define CM_PGDOWN	11
#define CM_HELP		12
#define CM_PARENT	13
#define CM_PHELP	14
#define CM_EXPR		15
#define CM_TRACE	16
#define CM_RECOVER	17
#define CM_CURDOWN	18
#define CM_CURRIGHT	19
#define CM_CURLEFT	20
#define CM_CURSOR	21
#define CM_HIDE		22
#define	CM_REVEAL	23
#define CM_TYPEROT	25
#define CM_COMPILE	26
#define	CM_SAVE		27
#define CM_AUTOSAVE	28
#define	CM_RUN		29
#define CM_DECL		30
#define CM_CHECK	31
#define CM_UNDO		32
#define CM_REDO		33
#define CM_EDIT		34
#define CM_STEP		35
#define CM_M_INSERT	36
#define CM_M_DELETE	37
#define CM_M_IO		38
#define CM_M_CHANGE	39
#define CM_M_RUN	40
#define CM_M_MISC	41
#define CM_M_MOVE	42
#define CM_THELP	43
#define CM_ERRHELP	44
#define CM_SYMBOL	45
#define CM_SELECT	46
#define CM_MENU		47
#define CM_NOP		48
#define CM_UNSEL	49
#define CM_M_RANGE	50
#define CM_M_DEBUG	51
#define CM_PREV		52
#define CM_UTRACE	53
#define CM_NEW		54
#define CM_TOKEN	55
#define CM_SETFOLLOW	56
#define CM_CLRFOLLOW	57
#define CM_LSIB		58
#define CM_RSIB		59
#define CM_CHILD	60
#define CM_BLOCK	61
#define CM_SETFILE	62
#define CM_SHELL	63
#define CM_COMHELP	64
#define CM_CONTINUE	65
/* Window commands */
#define CM_TEXT		66
#define CM_WSEXEC	67
#define CM_OPTION	68
#define CM_DUMP		69
#define CM_DOS		70
#define CM_W_BIG	71
/* Search commands */
#define CM_S_FWD	72
#define CM_S_BACK	73
#define CM_S_TFWD	74
#define CM_S_TBACK	75
#define CM_S_AGAIN	76
/* mAcro commands */
#define CM_A_STARTDEF	77
#define CM_A_ENDDEF	78
#define CM_A_DEF	79
#define CM_A_INVOKE	80
#define CM_GET		81
#define CM_WORKSPACE	82
#define CM_COPY		83
#define CM_MOVE		84
#define CM_IMM		86
#define CM_BUGON	87
#define CM_BUGOFF	88
#define CM_SUPERSTEP	89
#define CM_BPOINT	90
#define CM_CPOINT	91
#define CM_PPOINT	92
#define	CM_MARK		93
#define CM_GO		94
#define CM_EXEC		95
#define	CM_POPBACK	96
#define CM_LOWER	97
#define CM_M_SPECIALTIES 98
#define CM_RAISE	99
#define CM_COMOUT	100
#define CM_MERGE	101
#define CM_SPOP		102
#define CM_TBACK	103
#define CM_RDAMNIT	104
#define CM_NLOAD	105
#define CM_LASTERR	106
#define CM_LOG		107
#define CM_NOLOG	108
#define	CM_VIEW		109

#ifdef GEM
#define CM_GREDRAW	110
#define CM_GTOP		111
#define CM_GMOVED	112
#define CM_GSIZED	113
#define CM_GFULLED	114
#define CM_GABOUT	115
#define CM_GFOLLOW	116
#define CM_GSLIDE	117
#define CM_GCLOSE	118
#define CM_GCOUNT	119
#define CM_GLOG		120
#define CM_GKEYS	121
#define CM_GNEWWS	122
#define CM_GDEBUG	123
#define CM_GSEARCH	124
#define CM_GBUFFER	125
#define CM_GSAVEAS	126
#define CM_GSNAP	127
#define CM_GCDIR	128
#define CM_CHELP	129
#define CM_GFREEMEM	130
#endif

#ifdef HAS_LIBRARY
#define CM_LIBRARY	131
#endif

