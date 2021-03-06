#include <whoami.h>
#include <curses.h>
/*
 *
 *  Looking Glass Software Limited
 *  "Curses" emulating windowing package for the IBM-PC
 *
 *  The following code is a trade secret of Looking Glass Software Limited
 *  and should be protected and considered proprietary, subject to the
 *  terms of the licence under which this code was provided
 *
 */
 

 /* System V curses has a function to "turn on" the keypad */
keypad(win, bf)
WINDOW *win;
bool bf;
{
}

#ifdef msdos

extern int C_echoon;

	/* wgetch gets a character in a given window, echos if need be */
int
wgetch(win)
WINDOW  *win;
{
	int c;

	c = _rchar();
	if (c) {
		if( C_echoon ) {
			if( waddch( win, c ) == ERR ) 
				return ERR;
			 else
				wrefresh(win);
			}
		return c;
		}
	/*
	 * got the zero code which means this is a special char
	 * special characters don't echo as who knows what that means?
	 * 
	 */
	c = _rchar(); 
	/* here is where you put a big switch if you want to do fancies ,
	 * or you can have some IF statements if you want the fun                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  