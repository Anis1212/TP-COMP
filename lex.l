%{
extern int numligne;
void yyerror(const char * msg);
#include "synt.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern YYSTYPE yylval;
%}
alpha [a-zA-Z]
digit [0-9]
%%
[ \t ]   ;
[ \n ]   { numligne = numligne + 1; }
int   return INT;
float return FLOAT;
for   return FOR;
while return WHILE;
if return IF;
else return ELSE;
{digit}+       return number;
{alpha}({alpha}|{digit})* return identifier;
"<="    return le;
">="    return ge;
"=="    return eq;
"!="    return ne;
">"  return gt;
"<"  return lt;
\/\/.* ;
\/\*(.*\n)*.*\*\/ ;
.       return yytext[0];
%%
