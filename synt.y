%{
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char * msg);
int numligne;
extern FILE* yyin;

typedef struct {
		char *op;
        char *source1;
        char *source2;
        int dest;
		
	}QUAD;

	QUAD   quad[100];
	
int m1,m2,m3;
int cpt=0;
%}
%token identifier
%token number
%token INT FLOAT
%token FOR WHILE
%token IF ELSE
%token eq le ge ne lt gt
%right '='

%union {
   char *op;
        char *source1;
        char *source2;
        char *dest;
}
%%
Function : Type identifier '(' ArgList ')' CompoundStmt
         ;

ArgList : Arg
        | ArgList ',' Arg
        |
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

IfStmt: IF '(' Expr ')' M1 Stmt M2 ElsePart {/*strcpy(quad[cpt].op,'CMP')*/;cpt++;}
	;
ElsePart: ELSE Stmt M3
	|
	;
M1 : {m1=cpt; /*strcpy(quad[cpt].op,'JZ');*/ cpt++;};
M2 : {m2=cpt; /*strcpy(quad[cpt].op,'JMP');*/ cpt++; /*quad[m1].dest=cpt;*/};
M3 : {printf("%d",m1); quad[m2].dest=cpt;};


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
	yyin=fopen("C:\\Users\\Anis\\Desktop\\test.txt","r");
	if(!yyparse()){
		printf("Compilation done! Oh yeah\n");
	}else printf("Compilation error hhhhh..., ligne: %d\n",numligne);

system("PAUSE");
}
void yyerror(const char * msg){
	printf("%s\n", msg);
}



