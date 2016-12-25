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
* synt.c
* C source file generated from synt.y.
* 
* Date: 12/25/16
* Time: 21:09:26
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\synt.y"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(const char * msg);

int numligne;
extern FILE* yyin;

#line 51 "synt.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\synt.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "\'(\'", 40 },
	{ "\')\'", 41 },
	{ "\'*\'", 42 },
	{ "\'+\'", 43 },
	{ "\',\'", 44 },
	{ "\'-\'", 45 },
	{ "\'/\'", 47 },
	{ "\';\'", 59 },
	{ "\'=\'", 61 },
	{ "\'{\'", 123 },
	{ "\'}\'", 125 },
	{ "error", 256 },
	{ "identifier", 257 },
	{ "number", 258 },
	{ "INT", 259 },
	{ "FLOAT", 260 },
	{ "FOR", 261 },
	{ "WHILE", 262 },
	{ "IF", 263 },
	{ "ELSE", 264 },
	{ "eq", 265 },
	{ "le", 266 },
	{ "ge", 267 },
	{ "ne", 268 },
	{ "lt", 269 },
	{ "gt", 270 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: Function",
	"Function: Type identifier \'(\' ArgList \')\' CompoundStmt",
	"ArgList: Arg",
	"ArgList: ArgList \',\' Arg",
	"Arg: Type identifier",
	"Declaration: Type IdentList \';\'",
	"Type: INT",
	"Type: FLOAT",
	"IdentList: identifier \',\' IdentList",
	"IdentList: identifier",
	"Stmt: ForStmt",
	"Stmt: WhileStmt",
	"Stmt: Expr \';\'",
	"Stmt: IfStmt",
	"Stmt: CompoundStmt",
	"Stmt: Declaration",
	"Stmt: \';\'",
	"ForStmt: FOR \'(\' Expr \';\' OptExpr \';\' OptExpr \')\' Stmt",
	"OptExpr: Expr",
	"OptExpr:",
	"WhileStmt: WHILE \'(\' Expr \')\' Stmt",
	"IfStmt: IF \'(\' Expr \')\' Stmt ElsePart",
	"ElsePart: ELSE Stmt",
	"ElsePart:",
	"CompoundStmt: \'{\' StmtList \'}\'",
	"StmtList: StmtList Stmt",
	"StmtList:",
	"Expr: identifier \'=\' Expr",
	"Expr: Rvalue",
	"Rvalue: Rvalue Compare Mag",
	"Rvalue: Mag",
	"Compare: eq",
	"Compare: lt",
	"Compare: gt",
	"Compare: le",
	"Compare: ge",
	"Compare: ne",
	"Mag: Mag \'+\' Term",
	"Mag: Mag \'-\' Term",
	"Mag: Term",
	"Term: Term \'*\' Factor",
	"Term: Term \'/\' Factor",
	"Term: Factor",
	"Factor: \'(\' Expr \')\'",
	"Factor: \'-\' Factor",
	"Factor: \'+\' Factor",
	"Factor: identifier",
	"Factor: number"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 6, -1 },
	{ 2, 1, -1 },
	{ 2, 3, -1 },
	{ 3, 2, -1 },
	{ 4, 3, -1 },
	{ 5, 1, -1 },
	{ 5, 1, -1 },
	{ 6, 3, -1 },
	{ 6, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 2, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 8, 9, -1 },
	{ 9, 1, -1 },
	{ 9, 0, -1 },
	{ 10, 5, -1 },
	{ 11, 6, -1 },
	{ 12, 2, -1 },
	{ 12, 0, -1 },
	{ 13, 3, -1 },
	{ 14, 2, -1 },
	{ 14, 0, -1 },
	{ 15, 3, -1 },
	{ 15, 1, -1 },
	{ 16, 3, -1 },
	{ 16, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 18, 3, -1 },
	{ 18, 3, -1 },
	{ 18, 1, -1 },
	{ 19, 3, -1 },
	{ 19, 3, -1 },
	{ 19, 1, -1 },
	{ 20, 3, -1 },
	{ 20, 2, -1 },
	{ 20, 2, -1 },
	{ 20, 1, -1 },
	{ 20, 1, -1 }
};

int YYNEAR YYDCDECL yytokenaction_size = 227;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 81, YYAT_SHIFT, 17 },
	{ 86, YYAT_SHIFT, 20 },
	{ 84, YYAT_SHIFT, 86 },
	{ 81, YYAT_SHIFT, 18 },
	{ 73, YYAT_SHIFT, 17 },
	{ 81, YYAT_SHIFT, 19 },
	{ 80, YYAT_SHIFT, 82 },
	{ 73, YYAT_SHIFT, 18 },
	{ 60, YYAT_SHIFT, 17 },
	{ 73, YYAT_SHIFT, 19 },
	{ 70, YYAT_SHIFT, 50 },
	{ 60, YYAT_SHIFT, 18 },
	{ 70, YYAT_SHIFT, 51 },
	{ 60, YYAT_SHIFT, 19 },
	{ 36, YYAT_SHIFT, 52 },
	{ 36, YYAT_SHIFT, 53 },
	{ 36, YYAT_SHIFT, 54 },
	{ 36, YYAT_SHIFT, 55 },
	{ 36, YYAT_SHIFT, 56 },
	{ 36, YYAT_SHIFT, 57 },
	{ 69, YYAT_SHIFT, 59 },
	{ 68, YYAT_SHIFT, 59 },
	{ 37, YYAT_SHIFT, 59 },
	{ 12, YYAT_SHIFT, 1 },
	{ 12, YYAT_SHIFT, 2 },
	{ 69, YYAT_SHIFT, 60 },
	{ 68, YYAT_SHIFT, 60 },
	{ 37, YYAT_SHIFT, 60 },
	{ 9, YYAT_SHIFT, 11 },
	{ 78, YYAT_SHIFT, 81 },
	{ 35, YYAT_SHIFT, 50 },
	{ 9, YYAT_SHIFT, 12 },
	{ 35, YYAT_SHIFT, 51 },
	{ 66, YYAT_SHIFT, 48 },
	{ 65, YYAT_SHIFT, 75 },
	{ 64, YYAT_SHIFT, 74 },
	{ 63, YYAT_SHIFT, 73 },
	{ 49, YYAT_SHIFT, 67 },
	{ 48, YYAT_SHIFT, 66 },
	{ 46, YYAT_SHIFT, 22 },
	{ 39, YYAT_SHIFT, 61 },
	{ 28, YYAT_SHIFT, 47 },
	{ 26, YYAT_SHIFT, 46 },
	{ 25, YYAT_SHIFT, 45 },
	{ 24, YYAT_SHIFT, 44 },
	{ 22, YYAT_SHIFT, 43 },
	{ 16, YYAT_SHIFT, 21 },
	{ 11, YYAT_SHIFT, 13 },
	{ 7, YYAT_SHIFT, 10 },
	{ 5, YYAT_SHIFT, 6 },
	{ 4, YYAT_ACCEPT, 0 },
	{ 3, YYAT_SHIFT, 5 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 86, YYAT_SHIFT, 13 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 86, YYAT_SHIFT, 1 },
	{ 86, YYAT_SHIFT, 2 },
	{ 86, YYAT_SHIFT, 24 },
	{ 86, YYAT_SHIFT, 25 },
	{ 86, YYAT_SHIFT, 26 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 81, YYAT_SHIFT, 22 },
	{ 81, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 73, YYAT_SHIFT, 22 },
	{ 73, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 60, YYAT_SHIFT, 40 },
	{ 60, YYAT_SHIFT, 23 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 0, 0, YYAT_DEFAULT, 12 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ -206, 1, YYAT_ERROR, 0 },
	{ 50, 1, YYAT_ERROR, 0 },
	{ 9, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 12 },
	{ -209, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ -13, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ -76, 1, YYAT_ERROR, 0 },
	{ -236, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ -79, 1, YYAT_DEFAULT, 86 },
	{ 0, 0, YYAT_DEFAULT, 46 },
	{ 0, 0, YYAT_DEFAULT, 60 },
	{ 0, 0, YYAT_DEFAULT, 60 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ 0, 0, YYAT_REDUCE, 24 },
	{ -16, 1, YYAT_REDUCE, 46 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 4, 1, YYAT_ERROR, 0 },
	{ 3, 1, YYAT_ERROR, 0 },
	{ 2, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ -18, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_DEFAULT, 66 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ -13, 1, YYAT_REDUCE, 30 },
	{ -251, 1, YYAT_REDUCE, 28 },
	{ -20, 1, YYAT_REDUCE, 39 },
	{ 0, 0, YYAT_REDUCE, 42 },
	{ -1, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ 0, 0, YYAT_REDUCE, 45 },
	{ 0, 0, YYAT_REDUCE, 44 },
	{ 0, 0, YYAT_DEFAULT, 46 },
	{ 0, 0, YYAT_DEFAULT, 46 },
	{ 0, 0, YYAT_DEFAULT, 46 },
	{ -218, 1, YYAT_DEFAULT, 60 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ -6, 1, YYAT_REDUCE, 9 },
	{ -22, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 60 },
	{ 0, 0, YYAT_DEFAULT, 60 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ 0, 0, YYAT_REDUCE, 34 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ 0, 0, YYAT_REDUCE, 36 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ 0, 0, YYAT_DEFAULT, 60 },
	{ 0, 0, YYAT_DEFAULT, 60 },
	{ -32, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 43 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ -23, 1, YYAT_ERROR, 0 },
	{ -6, 1, YYAT_ERROR, 0 },
	{ -7, 1, YYAT_ERROR, 0 },
	{ -224, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ -21, 1, YYAT_REDUCE, 37 },
	{ -22, 1, YYAT_REDUCE, 38 },
	{ -33, 1, YYAT_REDUCE, 29 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ 0, 0, YYAT_REDUCE, 41 },
	{ -36, 1, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_DEFAULT, 86 },
	{ 0, 0, YYAT_DEFAULT, 86 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ -30, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ -258, 1, YYAT_REDUCE, 23 },
	{ -40, 1, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_DEFAULT, 86 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ -39, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ -58, 1, YYAT_DEFAULT, 46 },
	{ 0, 0, YYAT_REDUCE, 17 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 44;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 86, 29 },
	{ 86, 31 },
	{ 82, 85 },
	{ 86, 87 },
	{ 86, 33 },
	{ 80, 83 },
	{ 86, 32 },
	{ 86, 30 },
	{ 81, 84 },
	{ 86, 34 },
	{ 46, -1 },
	{ 86, 28 },
	{ 58, 70 },
	{ 58, 37 },
	{ 81, 77 },
	{ 81, 36 },
	{ 46, 65 },
	{ 81, 35 },
	{ 0, 4 },
	{ 12, 15 },
	{ 75, 80 },
	{ 12, 7 },
	{ 0, 3 },
	{ 51, 69 },
	{ 51, 38 },
	{ 6, 9 },
	{ 6, 8 },
	{ 74, 79 },
	{ 73, 78 },
	{ 66, 76 },
	{ 60, 72 },
	{ 59, 71 },
	{ 50, 68 },
	{ 45, 64 },
	{ 44, 63 },
	{ 43, 62 },
	{ 36, 58 },
	{ 31, 49 },
	{ 19, 42 },
	{ 18, 41 },
	{ 17, 39 },
	{ 16, 27 },
	{ 13, 16 },
	{ 11, 14 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 17, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 23, 12 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 30, -1 },
	{ 16, -1 },
	{ 28, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 34, 86 },
	{ 25, 46 },
	{ 19, -1 },
	{ 18, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 31, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 19, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 20, 46 },
	{ 19, 46 },
	{ 18, 46 },
	{ 1, 81 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 13, 51 },
	{ 4, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -6, 51 },
	{ 11, -1 },
	{ 10, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 23, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 19, 81 },
	{ 20, 86 },
	{ 13, 86 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -7, -1 },
	{ -1, 58 },
	{ -5, 86 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -4, 46 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 105 ".\\synt.y"

main(){
	yyin=fopen("test.txt","r");
	if(!yyparse()){
		printf("Compilation done! Oh yeah\n");
	}else printf("Compilation error hhhhh..., ligne: %d\n",numligne);
	system("PAUSE");

}
void yyerror(const char * msg){
	printf("%s\n", msg);
} 


