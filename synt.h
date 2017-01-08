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
* synt.h
* C header file generated from synt.y.
* 
* Date: 01/04/17
* Time: 10:55:27
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _SYNT_H
#define _SYNT_H

#include <yypars.h>

#define identifier 257
#define number 258
#define INT 259
#define FLOAT 260
#define FOR 261
#define WHILE 262
#define IF 263
#define ELSE 264
#define eq 265
#define le 266
#define ge 267
#define ne 268
#define lt 269
#define gt 270
#ifndef YYSTYPE
union tagYYSTYPE {
#line 33 ".\\synt.y"

   char *op;
        char *source1;
        char *source2;
        char *dest;

#line 55 "synt.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

extern YYSTYPE YYNEAR yylval;

#endif
