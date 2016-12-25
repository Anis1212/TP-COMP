#############################################################################
#                         A C A D E M I C   C O P Y
# 
# This file was produced by an ACADEMIC COPY of Parser Generator. It is for
# use in non-commercial software only. An ACADEMIC COPY of Parser Generator
# can only be used by a student, or a member of an academic community. If
# however you want to use Parser Generator for commercial purposes then you
# will need to purchase a license. For more information see the online help or
# go to the Bumble-Bee Software homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# synt.v
# YACC verbose file generated from synt.y.
# 
# Date: 12/25/16
# Time: 21:09:26
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : Function $end

    1  Function : Type identifier '(' ArgList ')' CompoundStmt

    2  ArgList : Arg
    3          | ArgList ',' Arg

    4  Arg : Type identifier

    5  Declaration : Type IdentList ';'

    6  Type : INT
    7       | FLOAT

    8  IdentList : identifier ',' IdentList
    9            | identifier

   10  Stmt : ForStmt
   11       | WhileStmt
   12       | Expr ';'
   13       | IfStmt
   14       | CompoundStmt
   15       | Declaration
   16       | ';'

   17  ForStmt : FOR '(' Expr ';' OptExpr ';' OptExpr ')' Stmt

   18  OptExpr : Expr
   19          |

   20  WhileStmt : WHILE '(' Expr ')' Stmt

   21  IfStmt : IF '(' Expr ')' Stmt ElsePart

   22  ElsePart : ELSE Stmt
   23           |

   24  CompoundStmt : '{' StmtList '}'

   25  StmtList : StmtList Stmt
   26           |

   27  Expr : identifier '=' Expr
   28       | Rvalue

   29  Rvalue : Rvalue Compare Mag
   30         | Mag

   31  Compare : eq
   32          | lt
   33          | gt
   34          | le
   35          | ge
   36          | ne

   37  Mag : Mag '+' Term
   38      | Mag '-' Term
   39      | Term

   40  Term : Term '*' Factor
   41       | Term '/' Factor
   42       | Factor

   43  Factor : '(' Expr ')'
   44         | '-' Factor
   45         | '+' Factor
   46         | identifier
   47         | number


##############################################################################
# States
##############################################################################

state 0
	$accept : . Function $end

	INT  shift 1
	FLOAT  shift 2

	Type  goto 3
	Function  goto 4


state 1
	Type : INT .  (6)

	.  reduce 6


state 2
	Type : FLOAT .  (7)

	.  reduce 7


state 3
	Function : Type . identifier '(' ArgList ')' CompoundStmt

	identifier  shift 5


state 4
	$accept : Function . $end  (0)

	$end  accept


state 5
	Function : Type identifier . '(' ArgList ')' CompoundStmt

	'('  shift 6


state 6
	Function : Type identifier '(' . ArgList ')' CompoundStmt

	INT  shift 1
	FLOAT  shift 2

	Type  goto 7
	Arg  goto 8
	ArgList  goto 9


state 7
	Arg : Type . identifier

	identifier  shift 10


state 8
	ArgList : Arg .  (2)

	.  reduce 2


state 9
	Function : Type identifier '(' ArgList . ')' CompoundStmt
	ArgList : ArgList . ',' Arg

	')'  shift 11
	','  shift 12


state 10
	Arg : Type identifier .  (4)

	.  reduce 4


state 11
	Function : Type identifier '(' ArgList ')' . CompoundStmt

	'{'  shift 13

	CompoundStmt  goto 14


state 12
	ArgList : ArgList ',' . Arg

	INT  shift 1
	FLOAT  shift 2

	Type  goto 7
	Arg  goto 15


state 13
	CompoundStmt : '{' . StmtList '}'
	StmtList : .  (26)

	.  reduce 26

	StmtList  goto 16


state 14
	Function : Type identifier '(' ArgList ')' CompoundStmt .  (1)

	.  reduce 1


state 15
	ArgList : ArgList ',' Arg .  (3)

	.  reduce 3


state 16
	StmtList : StmtList . Stmt
	CompoundStmt : '{' StmtList . '}'

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	';'  shift 20
	'{'  shift 13
	'}'  shift 21
	identifier  shift 22
	number  shift 23
	INT  shift 1
	FLOAT  shift 2
	FOR  shift 24
	WHILE  shift 25
	IF  shift 26

	Stmt  goto 27
	Expr  goto 28
	Declaration  goto 29
	IfStmt  goto 30
	Type  goto 31
	WhileStmt  goto 32
	ForStmt  goto 33
	CompoundStmt  goto 34
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 17
	Factor : '(' . Expr ')'

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Expr  goto 39
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 18
	Factor : '+' . Factor

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Factor  goto 41


state 19
	Factor : '-' . Factor

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Factor  goto 42


state 20
	Stmt : ';' .  (16)

	.  reduce 16


state 21
	CompoundStmt : '{' StmtList '}' .  (24)

	.  reduce 24


state 22
	Expr : identifier . '=' Expr
	Factor : identifier .  (46)

	'='  shift 43
	.  reduce 46


state 23
	Factor : number .  (47)

	.  reduce 47


state 24
	ForStmt : FOR . '(' Expr ';' OptExpr ';' OptExpr ')' Stmt

	'('  shift 44


state 25
	WhileStmt : WHILE . '(' Expr ')' Stmt

	'('  shift 45


state 26
	IfStmt : IF . '(' Expr ')' Stmt ElsePart

	'('  shift 46


state 27
	StmtList : StmtList Stmt .  (25)

	.  reduce 25


state 28
	Stmt : Expr . ';'

	';'  shift 47


state 29
	Stmt : Declaration .  (15)

	.  reduce 15


state 30
	Stmt : IfStmt .  (13)

	.  reduce 13


state 31
	Declaration : Type . IdentList ';'

	identifier  shift 48

	IdentList  goto 49


state 32
	Stmt : WhileStmt .  (11)

	.  reduce 11


state 33
	Stmt : ForStmt .  (10)

	.  reduce 10


state 34
	Stmt : CompoundStmt .  (14)

	.  reduce 14


state 35
	Rvalue : Mag .  (30)
	Mag : Mag . '-' Term
	Mag : Mag . '+' Term

	'+'  shift 50
	'-'  shift 51
	.  reduce 30


state 36
	Expr : Rvalue .  (28)
	Rvalue : Rvalue . Compare Mag

	eq  shift 52
	le  shift 53
	ge  shift 54
	ne  shift 55
	lt  shift 56
	gt  shift 57
	.  reduce 28

	Compare  goto 58


state 37
	Term : Term . '/' Factor
	Term : Term . '*' Factor
	Mag : Term .  (39)

	'*'  shift 59
	'/'  shift 60
	.  reduce 39


state 38
	Term : Factor .  (42)

	.  reduce 42


state 39
	Factor : '(' Expr . ')'

	')'  shift 61


state 40
	Factor : identifier .  (46)

	.  reduce 46


state 41
	Factor : '+' Factor .  (45)

	.  reduce 45


state 42
	Factor : '-' Factor .  (44)

	.  reduce 44


state 43
	Expr : identifier '=' . Expr

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Expr  goto 62
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 44
	ForStmt : FOR '(' . Expr ';' OptExpr ';' OptExpr ')' Stmt

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Expr  goto 63
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 45
	WhileStmt : WHILE '(' . Expr ')' Stmt

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Expr  goto 64
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 46
	IfStmt : IF '(' . Expr ')' Stmt ElsePart

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Expr  goto 65
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 47
	Stmt : Expr ';' .  (12)

	.  reduce 12


state 48
	IdentList : identifier . ',' IdentList
	IdentList : identifier .  (9)

	','  shift 66
	.  reduce 9


state 49
	Declaration : Type IdentList . ';'

	';'  shift 67


state 50
	Mag : Mag '+' . Term

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Term  goto 68
	Factor  goto 38


state 51
	Mag : Mag '-' . Term

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Term  goto 69
	Factor  goto 38


state 52
	Compare : eq .  (31)

	.  reduce 31


state 53
	Compare : le .  (34)

	.  reduce 34


state 54
	Compare : ge .  (35)

	.  reduce 35


state 55
	Compare : ne .  (36)

	.  reduce 36


state 56
	Compare : lt .  (32)

	.  reduce 32


state 57
	Compare : gt .  (33)

	.  reduce 33


state 58
	Rvalue : Rvalue Compare . Mag

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Mag  goto 70
	Term  goto 37
	Factor  goto 38


state 59
	Term : Term '*' . Factor

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Factor  goto 71


state 60
	Term : Term '/' . Factor

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Factor  goto 72


state 61
	Factor : '(' Expr ')' .  (43)

	.  reduce 43


state 62
	Expr : identifier '=' Expr .  (27)

	.  reduce 27


state 63
	ForStmt : FOR '(' Expr . ';' OptExpr ';' OptExpr ')' Stmt

	';'  shift 73


state 64
	WhileStmt : WHILE '(' Expr . ')' Stmt

	')'  shift 74


state 65
	IfStmt : IF '(' Expr . ')' Stmt ElsePart

	')'  shift 75


state 66
	IdentList : identifier ',' . IdentList

	identifier  shift 48

	IdentList  goto 76


state 67
	Declaration : Type IdentList ';' .  (5)

	.  reduce 5


state 68
	Term : Term . '/' Factor
	Mag : Mag '+' Term .  (37)
	Term : Term . '*' Factor

	'*'  shift 59
	'/'  shift 60
	.  reduce 37


state 69
	Mag : Mag '-' Term .  (38)
	Term : Term . '/' Factor
	Term : Term . '*' Factor

	'*'  shift 59
	'/'  shift 60
	.  reduce 38


state 70
	Rvalue : Rvalue Compare Mag .  (29)
	Mag : Mag . '-' Term
	Mag : Mag . '+' Term

	'+'  shift 50
	'-'  shift 51
	.  reduce 29


state 71
	Term : Term '*' Factor .  (40)

	.  reduce 40


state 72
	Term : Term '/' Factor .  (41)

	.  reduce 41


state 73
	ForStmt : FOR '(' Expr ';' . OptExpr ';' OptExpr ')' Stmt
	OptExpr : .  (19)

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23
	.  reduce 19

	Expr  goto 77
	OptExpr  goto 78
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 74
	WhileStmt : WHILE '(' Expr ')' . Stmt

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	';'  shift 20
	'{'  shift 13
	identifier  shift 22
	number  shift 23
	INT  shift 1
	FLOAT  shift 2
	FOR  shift 24
	WHILE  shift 25
	IF  shift 26

	Stmt  goto 79
	Expr  goto 28
	Declaration  goto 29
	IfStmt  goto 30
	Type  goto 31
	WhileStmt  goto 32
	ForStmt  goto 33
	CompoundStmt  goto 34
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 75
	IfStmt : IF '(' Expr ')' . Stmt ElsePart

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	';'  shift 20
	'{'  shift 13
	identifier  shift 22
	number  shift 23
	INT  shift 1
	FLOAT  shift 2
	FOR  shift 24
	WHILE  shift 25
	IF  shift 26

	Stmt  goto 80
	Expr  goto 28
	Declaration  goto 29
	IfStmt  goto 30
	Type  goto 31
	WhileStmt  goto 32
	ForStmt  goto 33
	CompoundStmt  goto 34
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 76
	IdentList : identifier ',' IdentList .  (8)

	.  reduce 8


state 77
	OptExpr : Expr .  (18)

	.  reduce 18


state 78
	ForStmt : FOR '(' Expr ';' OptExpr . ';' OptExpr ')' Stmt

	';'  shift 81


state 79
	WhileStmt : WHILE '(' Expr ')' Stmt .  (20)

	.  reduce 20


80: shift-reduce conflict (shift 82, reduce 23) on ELSE
state 80
	IfStmt : IF '(' Expr ')' Stmt . ElsePart
	ElsePart : .  (23)

	ELSE  shift 82
	.  reduce 23

	ElsePart  goto 83


state 81
	ForStmt : FOR '(' Expr ';' OptExpr ';' . OptExpr ')' Stmt
	OptExpr : .  (19)

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23
	.  reduce 19

	Expr  goto 77
	OptExpr  goto 84
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 82
	ElsePart : ELSE . Stmt

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	';'  shift 20
	'{'  shift 13
	identifier  shift 22
	number  shift 23
	INT  shift 1
	FLOAT  shift 2
	FOR  shift 24
	WHILE  shift 25
	IF  shift 26

	Stmt  goto 85
	Expr  goto 28
	Declaration  goto 29
	IfStmt  goto 30
	Type  goto 31
	WhileStmt  goto 32
	ForStmt  goto 33
	CompoundStmt  goto 34
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 83
	IfStmt : IF '(' Expr ')' Stmt ElsePart .  (21)

	.  reduce 21


state 84
	ForStmt : FOR '(' Expr ';' OptExpr ';' OptExpr . ')' Stmt

	')'  shift 86


state 85
	ElsePart : ELSE Stmt .  (22)

	.  reduce 22


state 86
	ForStmt : FOR '(' Expr ';' OptExpr ';' OptExpr ')' . Stmt

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	';'  shift 20
	'{'  shift 13
	identifier  shift 22
	number  shift 23
	INT  shift 1
	FLOAT  shift 2
	FOR  shift 24
	WHILE  shift 25
	IF  shift 26

	Stmt  goto 87
	Expr  goto 28
	Declaration  goto 29
	IfStmt  goto 30
	Type  goto 31
	WhileStmt  goto 32
	ForStmt  goto 33
	CompoundStmt  goto 34
	Mag  goto 35
	Rvalue  goto 36
	Term  goto 37
	Factor  goto 38


state 87
	ForStmt : FOR '(' Expr ';' OptExpr ';' OptExpr ')' Stmt .  (17)

	.  reduce 17


##############################################################################
# Summary
##############################################################################

State 80 contains 1 shift-reduce conflict(s)


27 token(s), 21 nonterminal(s)
48 grammar rule(s), 88 state(s)


##############################################################################
# End of File
##############################################################################
