%{
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(const char * msg);

int numligne;
extern FILE* yyin;
%}
%token identifier
%token number
%token INT FLOAT
%token FOR WHILE
%token IF ELSE
%token eq le ge ne lt gt
%right '='

%%
Function : Type identifier '(' ArgList ')' CompoundStmt
         ;

ArgList : Arg
        | ArgList ',' Arg
        ;

Arg : Type identifier
    ;

Declaration  : Type IdentList ';'
	;

Type : INT
     | FLOAT
     ;

IdentList : identifier ',' IdentList
          | identifier
          ;

Stmt : ForStmt
      | WhileStmt
      | Expr ';'
      | IfStmt
      | CompoundStmt
      | Declaration
      | ';'
      ;

ForStmt :  FOR '(' Expr ';' OptExpr ';' OptExpr  ')' Stmt
	;
OptExpr  : Expr
          |
          ;

WhileStmt : WHILE '(' Expr  ')' Stmt
          ;

IfStmt: IF '(' Expr ')' Stmt ElsePart
	;
ElsePart: ELSE Stmt
	|
	;

CompoundStmt : '{' StmtList  '}'
             ;

StmtList : StmtList Stmt
         |
         ;

Expr : identifier '=' Expr
     | Rvalue
     ;

Rvalue : Rvalue Compare Mag
       | Mag
       ;

Compare : eq
        | lt
        | gt
        | le
        | ge
        | ne
        ;

Mag : Mag '+' Term
    | Mag '-' Term
    | Term
    ;

Term : Term '*' Factor
     | Term '/' Factor
     | Factor
     ;

Factor : '(' Expr ')'
       | '-' Factor
       | '+' Factor
       | identifier
       | number
       ;
%%
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

