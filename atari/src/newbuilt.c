static rout_node r_boring = { 0, do_nop, 0, 0, empty_list };

#ifndef GEM
ss ndc0 = {N_DECL_ID, NIL, NLF, NNC("Black"), T_BCONST, HashByte,
	&nd4, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -159 };
ss ndc1 = {N_DECL_ID, NIL, NLF, NNC("Blue"), T_BCONST, HashByte,
	&ndc0, Basetype(BT_integer), 1, sizeof(rint), 0, Lmf, -189 };
ss ndc2 = {N_DECL_ID, NIL, NLF, NNC("Green"), T_BCONST, HashByte,
	&ndc1, Basetype(BT_integer), 2, sizeof(rint), 0, Lmf, -190 };
ss ndc3 = {N_DECL_ID, NIL, NLF, NNC("Cyan"), T_BCONST, HashByte,
	&ndc2, Basetype(BT_integer), 3, sizeof(rint), 0, Lmf, -191 };
ss ndc4 = {N_DECL_ID, NIL, NLF, NNC("Red"), T_BCONST, HashByte,
	&ndc3, Basetype(BT_integer), 4, sizeof(rint), 0, Lmf, -192 };
ss ndc5 = {N_DECL_ID, NIL, NLF, NNC("Magenta"), T_BCONST, HashByte,
	&ndc4, Basetype(BT_integer), 5, sizeof(rint), 0, Lmf, -193 };
ss ndc6 = {N_DECL_ID, NIL, NLF, NNC("Brown"), T_BCONST, HashByte,
	&ndc5, Basetype(BT_integer), 6, sizeof(rint), 0, Lmf, -194 };
ss ndc7 = {N_DECL_ID, NIL, NLF, NNC("LightGray"), T_BCONST, HashByte,
	&ndc6, Basetype(BT_integer), 7, sizeof(rint), 0, Lmf, -195 };
ss ndc8 = {N_DECL_ID, NIL, NLF, NNC("DarkGray"), T_BCONST, HashByte,
	&ndc7, Basetype(BT_integer), 8, sizeof(rint), 0, Lmf, -196 };
ss ndc9 = {N_DECL_ID, NIL, NLF, NNC("LightBlue"), T_BCONST, HashByte,
	&ndc8, Basetype(BT_integer), 9, sizeof(rint), 0, Lmf, -197 };
ss ndc10 = {N_DECL_ID, NIL, NLF, NNC("LightGreen"), T_BCONST, HashByte,
	&ndc9, Basetype(BT_integer), 10, sizeof(rint), 0, Lmf, -198 };
ss ndc11 = {N_DECL_ID, NIL, NLF, NNC("LightCyan"), T_BCONST, HashByte,
	&ndc10, Basetype(BT_integer), 11, sizeof(rint), 0, Lmf, -199 };
ss ndc12 = {N_DECL_ID, NIL, NLF, NNC("LightRed"), T_BCONST, HashByte,
	&ndc11, Basetype(BT_integer), 12, sizeof(rint), 0, Lmf, -200 };
ss ndc13 = {N_DECL_ID, NIL, NLF, NNC("LightMagenta"), T_BCONST, HashByte,
	&ndc12, Basetype(BT_integer), 13, sizeof(rint), 0, Lmf, -201 };
ss ndc14 = {N_DECL_ID, NIL, NLF, NNC("Yellow"), T_BCONST, HashByte,
	&ndc13, Basetype(BT_integer), 14, sizeof(rint), 0, Lmf, -202 };
ss ndc15 = {N_DECL_ID, NIL, NLF, NNC("White"), T_BCONST, HashByte,
	&ndc14, Basetype(BT_integer), 15, sizeof(rint), 0, Lmf, -203 };
ss ndc16 = {N_DECL_ID, NIL, NLF, NNC("Blink"), T_BCONST, HashByte,
	&ndc15, Basetype(BT_integer), 16, sizeof(rint), 0, Lmf, -204 };

ss ndm0 = {N_DECL_ID, NIL, NLF, NNC("BW40"), T_BCONST, HashByte,
	&ndc16, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -205 };
ss ndm1 = {N_DECL_ID, NIL, NLF, NNC("C40"), T_BCONST, HashByte,
	&ndm0, Basetype(BT_integer), 1, sizeof(rint), 0, Lmf, -206 };
ss ndm2 = {N_DECL_ID, NIL, NLF, NNC("BW80"), T_BCONST, HashByte,
	&ndm1, Basetype(BT_integer), 2, sizeof(rint), 0, Lmf, -207 };
ss ndm3 = {N_DECL_ID, NIL, NLF, NNC("C80"), T_BCONST, HashByte,
	&ndm2, Basetype(BT_integer), 3, sizeof(rint), 0, Lmf, -208 };
ss ndm4 = {N_DECL_ID, NIL, NLF, NNC("Mono"), T_BCONST, HashByte,
	&ndm3, Basetype(BT_integer), 7, sizeof(rint), 0, Lmf, -209 };
#else GEM

/*
 * Colours for the ST Version
 */
ss ndc0 = {N_DECL_ID, NIL, NLF, NNC("Black"), T_BCONST, HashByte,
	&nd4, Basetype(BT_integer), 1, sizeof(rint), 0, Lmf, -159 };
ss ndc1 = {N_DECL_ID, NIL, NLF, NNC("Blue"), T_BCONST, HashByte,
	&ndc0, Basetype(BT_integer), 4, sizeof(rint), 0, Lmf, -189 };
ss ndc2 = {N_DECL_ID, NIL, NLF, NNC("Green"), T_BCONST, HashByte,
	&ndc1, Basetype(BT_integer), 3, sizeof(rint), 0, Lmf, -190 };
ss ndc3 = {N_DECL_ID, NIL, NLF, NNC("Cyan"), T_BCONST, HashByte,
	&ndc2, Basetype(BT_integer), 5, sizeof(rint), 0, Lmf, -191 };
ss ndc4 = {N_DECL_ID, NIL, NLF, NNC("Red"), T_BCONST, HashByte,
	&ndc3, Basetype(BT_integer), 2, sizeof(rint), 0, Lmf, -192 };
ss ndc5 = {N_DECL_ID, NIL, NLF, NNC("Magenta"), T_BCONST, HashByte,
	&ndc4, Basetype(BT_integer), 7, sizeof(rint), 0, Lmf, -193 };
ss ndc6 = {N_DECL_ID, NIL, NLF, NNC("LightWhite"), T_BCONST, HashByte,
	&ndc5, Basetype(BT_integer), 8, sizeof(rint), 0, Lmf, -194 };
ss ndc7 = {N_DECL_ID, NIL, NLF, NNC("LightBlack"), T_BCONST, HashByte,
	&ndc6, Basetype(BT_integer), 9, sizeof(rint), 0, Lmf, -195 };
ss ndc8 = {N_DECL_ID, NIL, NLF, NNC("LightRed"), T_BCONST, HashByte,
	&ndc7, Basetype(BT_integer), 10, sizeof(rint), 0, Lmf, -196 };
ss ndc9 = {N_DECL_ID, NIL, NLF, NNC("LightGreen"), T_BCONST, HashByte,
	&ndc8, Basetype(BT_integer), 11, sizeof(rint), 0, Lmf, -197 };
ss ndc10 = {N_DECL_ID, NIL, NLF, NNC("LightBlue"), T_BCONST, HashByte,
	&ndc9, Basetype(BT_integer), 12, sizeof(rint), 0, Lmf, -198 };
ss ndc11 = {N_DECL_ID, NIL, NLF, NNC("LightCyan"), T_BCONST, HashByte,
	&ndc10, Basetype(BT_integer), 13, sizeof(rint), 0, Lmf, -199 };
ss ndc12 = {N_DECL_ID, NIL, NLF, NNC("LightYellow"), T_BCONST, HashByte,
	&ndc11, Basetype(BT_integer), 14, sizeof(rint), 0, Lmf, -200 };
ss ndc13 = {N_DECL_ID, NIL, NLF, NNC("LightMagenta"), T_BCONST, HashByte,
	&ndc12, Basetype(BT_integer), 15, sizeof(rint), 0, Lmf, -201 };
ss ndc14 = {N_DECL_ID, NIL, NLF, NNC("Yellow"), T_BCONST, HashByte,
	&ndc13, Basetype(BT_integer), 6, sizeof(rint), 0, Lmf, -202 };
ss ndc15 = {N_DECL_ID, NIL, NLF, NNC("White"), T_BCONST, HashByte,
	&ndc14, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -203 };

/* The Window features constants */
ss ndwc1 = {N_DECL_ID, NIL, NLF, NNC("WOall"), T_BCONST, HashByte,
	&ndc15, Basetype(BT_integer), 0x102f, sizeof(rint), 0, Lmf, -260 };
ss ndwc2 = {N_DECL_ID, NIL, NLF, NNC("WOtitle"), T_BCONST, HashByte,
	&ndwc1, Basetype(BT_integer), 0x1, sizeof(rint), 0, Lmf, -261 };
ss ndwc3 = {N_DECL_ID, NIL, NLF, NNC("WOclose"), T_BCONST, HashByte,
	&ndwc2, Basetype(BT_integer), 0x2, sizeof(rint), 0, Lmf, -262 };
ss ndwc4 = {N_DECL_ID, NIL, NLF, NNC("WOfull"), T_BCONST, HashByte,
	&ndwc3, Basetype(BT_integer), 0x4, sizeof(rint), 0, Lmf, -263 };
ss ndwc5 = {N_DECL_ID, NIL, NLF, NNC("WOmove"), T_BCONST, HashByte,
	&ndwc4, Basetype(BT_integer), 0x8, sizeof(rint), 0, Lmf, -264 };
ss ndwc6 = {N_DECL_ID, NIL, NLF, NNC("WOinformation"), T_BCONST, HashByte,
	&ndwc5, Basetype(BT_integer), 0x10, sizeof(rint), 0, Lmf, -265 };
ss ndwc7 = {N_DECL_ID, NIL, NLF, NNC("WOresize"), T_BCONST, HashByte,
	&ndwc6, Basetype(BT_integer), 0x20, sizeof(rint), 0, Lmf, -266 };
ss ndwc8 = {N_DECL_ID, NIL, NLF, NNC("WOuparrow"), T_BCONST, HashByte,
	&ndwc7, Basetype(BT_integer), 0x40, sizeof(rint), 0, Lmf, -267 };
ss ndwc9 = {N_DECL_ID, NIL, NLF, NNC("WOdownarrow"), T_BCONST, HashByte,
	&ndwc8, Basetype(BT_integer), 0x80, sizeof(rint), 0, Lmf, -268 };
ss ndwc10 = {N_DECL_ID, NIL, NLF, NNC("WOverslider"), T_BCONST, HashByte,
	&ndwc9, Basetype(BT_integer), 0x100, sizeof(rint), 0, Lmf, -269 };
ss ndwc11 = {N_DECL_ID, NIL, NLF, NNC("WOleftarrow"), T_BCONST, HashByte,
	&ndwc10, Basetype(BT_integer), 0x200, sizeof(rint), 0, Lmf, -271 };
ss ndwc12 = {N_DECL_ID, NIL, NLF, NNC("WOrightarrow"), T_BCONST, HashByte,
	&ndwc11, Basetype(BT_integer), 0x400, sizeof(rint), 0, Lmf, -272 };
ss ndwc13 = {N_DECL_ID, NIL, NLF, NNC("WOhorslider"), T_BCONST, HashByte,
	&ndwc12, Basetype(BT_integer), 0x800, sizeof(rint), 0, Lmf, -273 };
ss ndwc14 = {N_DECL_ID, NIL, NLF, NNC("WOclicks"), T_BCONST, HashByte,
	&ndwc13, Basetype(BT_integer), 0x1000, sizeof(rint), 0, Lmf, -274 };
ss ndwc15 = {N_DECL_ID, NIL, NLF, NNC("WOredraw"), T_BCONST, HashByte,
	&ndwc14, Basetype(BT_integer), 0x2000, sizeof(rint), 0, Lmf, -275 };
ss ndwc15a = {N_DECL_ID, NIL, NLF, NNC("WOtop"), T_BCONST, HashByte,
	&ndwc15, Basetype(BT_integer), 0x4000, sizeof(rint), 0, Lmf, -299 };

ss ndwc16 = {N_DECL_ID, NIL, NLF, NNC("WOvertbar"), T_BCONST, HashByte,
	&ndwc15a, Basetype(BT_integer), 0x1c0, sizeof(rint), 0, Lmf, -297 };
ss ndwc17 = {N_DECL_ID, NIL, NLF, NNC("WOhorbar"), T_BCONST, HashByte,
	&ndwc16, Basetype(BT_integer), 0x0e00, sizeof(rint), 0, Lmf, -298 };

/* The Event Constants */
ss ndevc1 = {N_DECL_ID, NIL, NLF, NNC("Etimeout"), T_BCONST, HashByte,
	&ndwc17, Basetype(BT_integer), 0x0, sizeof(rint), 0, Lmf, -276 };
ss ndevc2 = {N_DECL_ID, NIL, NLF, NNC("Ekeyboard"), T_BCONST, HashByte,
	&ndevc1, Basetype(BT_integer), 0x1, sizeof(rint), 0, Lmf, -277 };
ss ndevc3 = {N_DECL_ID, NIL, NLF, NNC("Emenu"), T_BCONST, HashByte,
	&ndevc2, Basetype(BT_integer), 0x2, sizeof(rint), 0, Lmf, -278 };
ss ndevc4 = {N_DECL_ID, NIL, NLF, NNC("Eclose"), T_BCONST, HashByte,
	&ndevc3, Basetype(BT_integer), 0x3, sizeof(rint), 0, Lmf, -279 };
ss ndevc5 = {N_DECL_ID, NIL, NLF, NNC("Ehorslide"), T_BCONST, HashByte,
	&ndevc4, Basetype(BT_integer), 0x4, sizeof(rint), 0, Lmf, -280 };
ss ndevc6 = {N_DECL_ID, NIL, NLF, NNC("Evertslide"), T_BCONST, HashByte,
	&ndevc5, Basetype(BT_integer), 0x5, sizeof(rint), 0, Lmf, -281};
ss ndevc8 = {N_DECL_ID, NIL, NLF, NNC("Eclick"), T_BCONST, HashByte,
	&ndevc6, Basetype(BT_integer), 0x7, sizeof(rint), 0, Lmf, -283 };
ss ndevc9 = {N_DECL_ID, NIL, NLF, NNC("Emove"), T_BCONST, HashByte,
	&ndevc8, Basetype(BT_integer), 0x8, sizeof(rint), 0, Lmf, -284 };
ss ndevc10 = {N_DECL_ID, NIL, NLF, NNC("Eresize"), T_BCONST, HashByte,
	&ndevc9, Basetype(BT_integer), 0x9, sizeof(rint), 0, Lmf, -285 };
ss ndevc11 = {N_DECL_ID, NIL, NLF, NNC("Eredraw"), T_BCONST, HashByte,
	&ndevc10, Basetype(BT_integer), 10, sizeof(rint), 0, Lmf, -286 };
ss ndevc12 = {N_DECL_ID, NIL, NLF, NNC("Etop"), T_BCONST, HashByte,
	&ndevc11, Basetype(BT_integer), 11, sizeof(rint), 0, Lmf, -287 };
ss ndevc13 = {N_DECL_ID, NIL, NLF, NNC("Efull"), T_BCONST, HashByte,
	&ndevc12, Basetype(BT_integer), 12, sizeof(rint), 0, Lmf, -288 };

ss ndar1 = {N_DECL_ID, NIL, NLF, NNC("Epageup"), T_BCONST, HashByte,
	&ndevc13, Basetype(BT_integer), 13, sizeof(rint), 0, Lmf, -289 };
ss ndar2 = {N_DECL_ID, NIL, NLF, NNC("Epagedown"), T_BCONST, HashByte,
	&ndar1, Basetype(BT_integer), 14, sizeof(rint), 0, Lmf, -290 };
ss ndar3 = {N_DECL_ID, NIL, NLF, NNC("Elineup"), T_BCONST, HashByte,
	&ndar2, Basetype(BT_integer), 15, sizeof(rint), 0, Lmf, -291 };
ss ndar4 = {N_DECL_ID, NIL, NLF, NNC("Elinedown"), T_BCONST, HashByte,
	&ndar3, Basetype(BT_integer), 16, sizeof(rint), 0, Lmf, -292 };
ss ndar5 = {N_DECL_ID, NIL, NLF, NNC("Epageleft"), T_BCONST, HashByte,
	&ndar4, Basetype(BT_integer), 17, sizeof(rint), 0, Lmf, -293 };
ss ndar6 = {N_DECL_ID, NIL, NLF, NNC("Epageright"), T_BCONST, HashByte,
	&ndar5, Basetype(BT_integer), 18, sizeof(rint), 0, Lmf, -294 };
ss ndar7 = {N_DECL_ID, NIL, NLF, NNC("Elineleft"), T_BCONST, HashByte,
	&ndar6, Basetype(BT_integer), 19, sizeof(rint), 0, Lmf, -295 };
ss ndm4 = {N_DECL_ID, NIL, NLF, NNC("Elineright"), T_BCONST, HashByte,
	&ndar7, Basetype(BT_integer), 20, sizeof(rint), 0, Lmf, -296 };

#endif

ss ndCrtExi = {N_DECL_ID, RD(r_boring), NLF, NNC("CrtExit"), T_BPROC, HashByte,
	&ndm4, Basetype(SP_proc), 0, 0, 0, Lmf, -210 };
ss ndCrtIni = {N_DECL_ID, RD(r_boring), NLF, NNC("CrtInit"), T_BPROC, HashByte,
	&ndCrtExi, Basetype(SP_proc), 0, 0, 0, Lmf, -211 };
static bargs l_opd_param[] = { NULL, IBC &un_str_param, "\200Directory Pattern",
			IBC &un_int_param, "\200Attribute", NULL };
static bargs l_readd_param[] = { NULL, IBC &un_vint_param,"\200Attribute",NULL};
static bargs l_sta_param[] = { NULL, IBC &un_var_param, "\200Char Array",
					IBC &un_str_param, NULL, NULL };
static rout_node r_opendir = { 0, do_opendir, 2, 2, l_opd_param };
static rout_node r_readdir = { 0, do_readdir, 1, 1, l_readd_param };
static rout_node r_artostr = { 0, do_artostr, 1, 1, l_variable };
static rout_node r_strtoar = { 0, do_strtoar, 2, 2, l_sta_param };
ss ndopendir = {N_DECL_ID, RD(r_opendir), NLF, NNC("OpenDir"),T_BPROC, HashByte,
	&ndCrtExi, Basetype(SP_proc), 0, 0, 0, Lmf, -212 };
ss ndreaddir={N_DECL_ID, RD(r_readdir), NLF, NNC("ReadDir"), T_BFUNC, HashByte,
	&ndopendir, Basetype(SP_string), 0, 8, 0, Lmf, -213 };
ss ndartostr={N_DECL_ID,RD(r_artostr),NLF,NNC("ArToString"), T_BTFUNC, HashByte,
	&ndreaddir, Basetype(SP_string), 0, 8, 0, Lmf, -214 };
ss ndstrtoar={N_DECL_ID,RD(r_strtoar),NLF,NNC("StringToAr"), T_BTPROC, HashByte,
	&ndartostr, Basetype(SP_proc), 0, 0, 0, Lmf, -215 };
static rout_node r_hilo = { 0, do_hilo, 1, 1, l_int_param };
ss ndHi = {N_DECL_ID, RD(r_hilo), NLF, NNC("Hi"), T_BFUNC, HashByte,
	&ndstrtoar, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -150 };
ss ndLo = {N_DECL_ID, RD(r_hilo), NLF, NNC("Lo"), T_BFUNC, HashByte,
	&ndHi, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -151 };
ss ndSwap = {N_DECL_ID, RD(r_hilo), NLF, NNC("Swap"), T_BFUNC, HashByte,
	&ndLo, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -152 };

static rout_node r_nsound = {0, do_sound, 0, 0, empty_list};

ss ndNoSoun = {N_DECL_ID, RD(r_nsound), NLF, NNC("NoSound"), T_BPROC, HashByte,
	&ndSwap, Basetype(SP_proc), 0, 0, 0, Lmf, -153 };

static rout_node r_where = { 0, do_where, 0, 0, empty_list };
ss ndWhereX = {N_DECL_ID, RD(r_where), NLF, NNC("WhereX"), T_BFUNC, HashByte,
	&ndNoSoun, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -154 };
ss ndWhereY = {N_DECL_ID, RD(r_where), NLF, NNC("WhereY"), T_BFUNC, HashByte,
	&ndWhereX, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -155 };

#ifndef GEM
static rout_node r_msdos = { 0, do_intr, 1, 1, l_variable };
ss ndMSDos = {N_DECL_ID, RD(r_msdos), NLF, NNC("MSDos"), T_BTPROC, HashByte,
	&ndWhereY, Basetype(SP_proc), 0, 0, 0, Lmf, -156 };
#else
#define ndMSDos	ndWhereY
#endif

static rout_node r_ffunc = { 0, do_filefunc, 1, 1, l_onefile };
static rout_node r_tfunc = { 0, do_filefunc, 1, 2, l_onetext };
ss ndErase = {N_DECL_ID, RD(r_ffunc), NLF, NNC("Erase"), T_BPROC, HashByte,
	&ndMSDos, Basetype(SP_proc), 0, 0, 0, Lmf, -157 };
ss ndFlush = {N_DECL_ID, RD(r_ffunc), NLF, NNC("Flush"), T_BPROC, HashByte,
	&ndErase, Basetype(SP_proc), 0, 0, 0, Lmf, -158 };
static rout_node r_rndomize = { 0, do_rndomize, 0, 0, empty_list };
ss ndRandom = {N_DECL_ID, RD(r_rndomize),NLF,NNC("Randomize"),T_BPROC, HashByte,
	&ndFlush, Basetype(SP_proc), 0, 0, 0, Lmf, -160 };

#ifndef GEM
symnode ndCSeg = {N_DECL_ID, NIL, NLF, NNC("CSeg"), T_BCONST, HashByte,
	&ndRandom, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -161 };
symnode ndDSeg = {N_DECL_ID, NIL, NLF, NNC("DSeg"), T_BCONST, HashByte,
	&ndCSeg, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -162 };
symnode ndSSeg = {N_DECL_ID, NIL, NLF, NNC("SSeg"), T_BCONST, HashByte,
	&ndDSeg, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -163 };
#else
#define ndSSeg	ndRandom
#endif

ss ndAddr = {N_DECL_ID, RD(r_makeptr), NLF, NNC("Addr"), T_BFUNC, HashByte,
	&ndSSeg, Basetype(BT_pointer), 0, sizeof(rpointer), 0, Lmf, -164 };
static rout_node r_ptr = {0, do_ptr, 2, 2, l_twoint };
ss ndPtr = {N_DECL_ID, RD(r_ptr), NLF, NNC("Ptr"), T_BFUNC, HashByte,
	&ndAddr, Basetype(BT_pointer), 0, sizeof(rpointer), 0, Lmf, -165 };
static rout_node r_offs = {0, do_segoff, 1, 1, l_variable };
ss ndOfs = {N_DECL_ID, RD(r_offs), NLF, NNC("Ofs"), T_BFUNC, HashByte,
	&ndPtr, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -166 };
ss ndSeg = {N_DECL_ID, RD(r_offs), NLF, NNC("Seg"), T_BFUNC, HashByte,
	&ndOfs, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -167 };

static char bystr[] = "\200Bytes";

static bargs l_move[] = {NULL, IBC &un_var_param, "\200From", IBC &un_var_param,
	"\200To", IBC &un_int_param, bystr, NULL };

static rout_node r_move = { 0, do_move, 3, 3, l_move };
ss ndMove = {N_DECL_ID, RD(r_move), NLF, NNC("Move"), T_BPROC, HashByte,
	&ndSeg, Basetype(SP_proc), 0, 0, 0, Lmf, -168 };

static bargs l_fillch[]={ NULL, IBC &un_var_param,NULL,IBC &un_int_param, bystr,
	IBC &un_ord_param, "\200Filler", NULL };

static rout_node r_fillch = { 0, do_fillch, 3, 3, l_fillch };
ss ndFillCh = {N_DECL_ID, RD(r_fillch), NLF, NNC("FillChar"), T_BPROC, HashByte,
	&ndMove, Basetype(SP_proc), 0, 0, 0, Lmf, -169 };

static rout_node r_rename = { 0, do_rename, 2, 2, l_fnname };
ss ndRename = {N_DECL_ID, RD(r_rename), NLF, NNC("Rename"), T_BPROC, HashByte,
	&ndFillCh, Basetype(SP_proc), 0, 0, 0, Lmf, -170 };
ss ndFilePo = {N_DECL_ID, RD(r_ffunc), NLF, NNC("FilePos"), T_BFUNC, HashByte,
	&ndRename, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -171 };

static rout_node r_dirfunc = { 0, do_dirfunc, 1, 1, l_onestr };
ss ndChDir = {N_DECL_ID, RD(r_dirfunc), NLF, NNC("ChDir"), T_BPROC, HashByte,
	&ndFilePo, Basetype(SP_proc), 0, 0, 0, Lmf, -172 };
ss ndMkDir = {N_DECL_ID, RD(r_dirfunc), NLF, NNC("MkDir"), T_BPROC, HashByte,
	&ndChDir, Basetype(SP_proc), 0, 0, 0, Lmf, -173 };
ss ndRmDir = {N_DECL_ID, RD(r_dirfunc), NLF, NNC("RmDir"), T_BPROC, HashByte,
	&ndMkDir, Basetype(SP_proc), 0, 0, 0, Lmf, -174 };

static bargs l_getdir[] = { NULL, IBC &un_int_param, "\200Drive Number",
			IBC &un_str_param, NULL, NULL };
static rout_node r_getdir = { 0, do_getdir, 2, 2, l_getdir };
ss ndGetDir = {N_DECL_ID, RD(r_getdir), NLF, NNC("GetDir"), T_BTPROC, HashByte,
	&ndRmDir, Basetype(SP_proc), 0, 0, 0, Lmf, -175 };
static rout_node r_mrkrel = { 0, do_markrel, 1, 1, l_pointer };
ss ndMark = {N_DECL_ID, RD(r_mrkrel), NLF, NNC("Mark"), T_BTPROC, HashByte,
	&ndGetDir, Basetype(SP_proc), 0, 0, 0, Lmf, -176 };
ss ndReleas = {N_DECL_ID, RD(r_mrkrel), NLF, NNC("Release"), T_BTPROC, HashByte,
	&ndMark, Basetype(SP_proc), 0, 0, 0, Lmf, -177 };

static bargs l_blockio[]={ NULL, IBC &un_fil_param, NULL,IBC &un_var_param,NULL,
	IBC &un_int_param,"\200Records",IBC &un_vint_param,"\200Result",NULL };

static rout_node r_blockio = { 0, do_blockio, 3, 4, l_blockio };
ss ndBlockR = {N_DECL_ID, RD(r_blockio),NLF,NNC("BlockRead"), T_BPROC, HashByte,
	&ndReleas, Basetype(SP_proc), 0, 0, 0, Lmf, -178 };
ss ndBlockW = {N_DECL_ID, RD(r_blockio),NLF,NNC("BlockWrite"),T_BPROC, HashByte,
	&ndBlockR, Basetype(SP_proc), 0, 0, 0, Lmf, -179 };
static bargs l_longseek[]= { NULL, IBC &un_fil_param, NULL, IBC &un_real_param,
		"\200Record #", NULL };
static rout_node r_longseek = { 0, do_longseek, 2, 2, l_longseek };
ss ndLongSe = {N_DECL_ID, RD(r_longseek),NLF,NNC("LongSeek"), T_BPROC, HashByte,
	&ndBlockW, Basetype(SP_proc), 0, 0, 0, Lmf, -180 };
ss ndLongFi={N_DECL_ID,RD(r_ffunc),NLF,NNC("LongFilePosition"),T_BFUNC,HashByte,
	&ndLongSe, Basetype(BT_real), 0, sizeof(rfloat), 0, Lmf, -181 };
ss ndLong2Fi={N_DECL_ID,RD(r_ffunc),NLF,NNC("LongFilePos"),T_BFUNC,HashByte,
	&ndLongFi, Basetype(BT_real), 0, sizeof(rfloat), 0, Lmf, -181 };
ss ndFileSi = {N_DECL_ID, RD(r_ffunc), NLF, NNC("FileSize"), T_BFUNC, HashByte,
	&ndLong2Fi, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -182 };


ss ndLongFs = {N_DECL_ID, RD(r_ffunc), NLF,NNC("LongFileSize"), T_BFUNC, HashByte,
	&ndFileSi, Basetype(BT_real), 0, sizeof(rfloat), 0, Lmf, -183 };
ss ndSeekEl = {N_DECL_ID, RD(r_tfunc), NLF, NNC("SeekEoln"), T_BFUNC, HashByte,
	&ndLongFs, Basetype(BT_boolean), 0, sizeof(char), 0, Lmf, -184 };
ss ndSeekEf = {N_DECL_ID, RD(r_tfunc), NLF, NNC("SeekEof"), T_BFUNC, HashByte,
	&ndSeekEl, Basetype(BT_boolean), 0, sizeof(char), 0, Lmf, -185 };
static rout_node r_parstr = { 0, do_parstr, 1, 1, l_int_param };
ss ndParamS = {N_DECL_ID, RD(r_parstr), NLF, NNC("ParamStr"), T_BFUNC, HashByte,
	&ndSeekEf, Basetype(SP_string), 0, 8, 0, Lmf, -186 };
static rout_node r_parcnt = { 0, do_parcnt, 0, 0, empty_list };
ss ndParamC = {N_DECL_ID, RD(r_parcnt),NLF,NNC("ParamCount"), T_BFUNC, HashByte,
	&ndParamS, Basetype(BT_integer), 0, sizeof(rint), 0, Lmf, -187 };
