/****************************************************************************
*                         A C A D E M I C   C O P Y
* 
* This file was produced by an ACADEMIC COPY of Parser Generator. It is for
* use in non-commercial software only. An ACADEMIC COPY of Parser Generator
* can only be used by a student, or a member of an academic community. If
* however you want to use Parser Generator for commercial purposes then you
* will need to purchase a license. For more information see the online help or
* go to the Bumble-Bee Software homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* lex.c
* C source file generated from lex.l.
* 
* Date: 01/08/17
* Time: 07:13:22
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\lex.l"

extern int numligne;
void yyerror(const char * msg);
#include "synt.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern YYSTYPE yylval;

#line 49 "lex.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\lex.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 13 ".\\lex.l"
;
#line 170 "lex.c"
		}
		break;
	case 2:
		{
#line 14 ".\\lex.l"
 numligne = numligne + 1; 
#line 177 "lex.c"
		}
		break;
	case 3:
		{
#line 15 ".\\lex.l"
return INT;
#line 184 "lex.c"
		}
		break;
	case 4:
		{
#line 16 ".\\lex.l"
return FLOAT;
#line 191 "lex.c"
		}
		break;
	case 5:
		{
#line 17 ".\\lex.l"
return FOR;
#line 198 "lex.c"
		}
		break;
	case 6:
		{
#line 18 ".\\lex.l"
return WHILE;
#line 205 "lex.c"
		}
		break;
	case 7:
		{
#line 19 ".\\lex.l"
return IF;
#line 212 "lex.c"
		}
		break;
	case 8:
		{
#line 20 ".\\lex.l"
return ELSE;
#line 219 "lex.c"
		}
		break;
	case 9:
		{
#line 21 ".\\lex.l"
return number;
#line 226 "lex.c"
		}
		break;
	case 10:
		{
#line 22 ".\\lex.l"
return identifier;
#line 233 "lex.c"
		}
		break;
	case 11:
		{
#line 23 ".\\lex.l"
return le;
#line 240 "lex.c"
		}
		break;
	case 12:
		{
#line 24 ".\\lex.l"
return ge;
#line 247 "lex.c"
		}
		break;
	case 13:
		{
#line 25 ".\\lex.l"
return eq;
#line 254 "lex.c"
		}
		break;
	case 14:
		{
#line 26 ".\\lex.l"
return ne;
#line 261 "lex.c"
		}
		break;
	case 15:
		{
#line 27 ".\\lex.l"
return gt;
#line 268 "lex.c"
		}
		break;
	case 16:
		{
#line 28 ".\\lex.l"
return lt;
#line 275 "lex.c"
		}
		break;
	case 17:
		{
#line 29 ".\\lex.l"
;
#line 282 "lex.c"
		}
		break;
	case 18:
		{
#line 30 ".\\lex.l"
;
#line 289 "lex.c"
		}
		break;
	case 19:
		{
#line 31 ".\\lex.l"
return yytext[0];
#line 296 "lex.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 190;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 4, 1 },
	{ 5, 1 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 8, 8 },
	{ 26, 15 },
	{ 18, 7 },
	{ 24, 14 },
	{ 22, 11 },
	{ 23, 13 },
	{ 25, 14 },
	{ 19, 7 },
	{ 17, 6 },
	{ 27, 15 },
	{ 20, 9 },
	{ 28, 16 },
	{ 4, 1 },
	{ 6, 1 },
	{ 0, 19 },
	{ 30, 23 },
	{ 31, 24 },
	{ 32, 25 },
	{ 33, 27 },
	{ 34, 28 },
	{ 35, 29 },
	{ 36, 30 },
	{ 37, 31 },
	{ 38, 34 },
	{ 29, 35 },
	{ 39, 37 },
	{ 40, 38 },
	{ 7, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 21, 10 },
	{ 0, 0 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 14, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 15, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 16, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 1 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 },
	{ 12, 40 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ -3, -8, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 19 },
	{ 0, 0, 1 },
	{ 0, 0, 2 },
	{ 0, -41, 19 },
	{ 0, -28, 19 },
	{ 0, -45, 9 },
	{ 0, -39, 16 },
	{ 0, -11, 19 },
	{ 0, -45, 15 },
	{ 40, 0, 10 },
	{ 40, -91, 10 },
	{ 40, -93, 10 },
	{ 40, -89, 10 },
	{ 40, -81, 10 },
	{ 0, 0, 14 },
	{ 35, 0, 0 },
	{ -19, 16, 17 },
	{ 0, 0, 11 },
	{ 0, 0, 13 },
	{ 0, 0, 12 },
	{ 40, -88, 10 },
	{ 40, -83, 10 },
	{ 40, -85, 10 },
	{ 40, 0, 7 },
	{ 40, -86, 10 },
	{ 40, -74, 10 },
	{ 35, -15, 0 },
	{ 40, -68, 10 },
	{ 40, -63, 10 },
	{ 40, 0, 5 },
	{ 40, 0, 3 },
	{ 40, -73, 10 },
	{ -18, -6, 18 },
	{ 40, 0, 8 },
	{ 40, -79, 10 },
	{ 40, -63, 10 },
	{ 40, 0, 4 },
	{ 0, 67, 6 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 32 ".\\lex.l"


