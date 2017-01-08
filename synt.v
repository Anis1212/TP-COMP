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
# Date: 01/04/17
# Time: 10:55:27
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
    4          |

    5  Arg : Type identifier

    6  Declaration : Type IdentList ';'

    7  Type : INT
    8       | FLOAT

    9  IdentList : identifier ',' IdentList
   10            | identifier

   11  Stmt : ForStmt
   12       | WhileStmt
   13       | Expr ';'
   14       | IfStmt
   15       | CompoundStmt
   16       | Declaration
   17       | ';'

   18  ForStmt : FOR '(' Expr ';' OptExpr ';' OptExpr ')' Stmt

   19  OptExpr : Expr
   20          |

   21  WhileStmt : WHILE '(' Expr ')' Stmt

   22  IfStmt : IF '(' Expr ')' M1 Stmt M2 ElsePart

   23  ElsePart : ELSE Stmt M3
   24           |

   25  M1 :

   26  M2 :

   27  M3 :

   28  CompoundStmt : '{' StmtList '}'

   29  StmtList : StmtList Stmt
   30           |

   31  Expr : identifier '=' Expr
   32       | Rvalue

   33  Rvalue : Rvalue Compare Mag
   34         | Mag

   35  Compare : eq
   36          | lt
   37          | gt
   38          | le
   39          | ge
   40          | ne

   41  Mag : Mag '+' Term
   42      | Mag '-' Term
   43      | Term

   44  Term : Term '*' Factor
   45       | Term '/' Factor
   46       | Factor

   47  Factor : '(' Expr ')'
   48         | '-' Factor
   49         | '+' Factor
   50         | identifier
   51         | number


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
	Type : INT .  (7)

	.  reduce 7


state 2
	Type : FLOAT .  (8)

	.  reduce 8


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
	ArgList : .  (4)

	INT  shift 1
	FLOAT  shift 2
	.  reduce 4

	Arg  goto 7
	ArgList  goto 8
	Type  goto 9


state 7
	ArgList : Arg .  (2)

	.  reduce 2


state 8
	Function : Type identifier '(' ArgList . ')' CompoundStmt
	ArgList : ArgList . ',' Arg

	')'  shift 10
	','  shift 11


state 9
	Arg : Type . identifier

	identifier  shift 12


state 10
	Function : Type identifier '(' ArgList ')' . CompoundStmt

	'{'  shift 13

	CompoundStmt  goto 14


state 11
	ArgList : ArgList ',' . Arg

	INT  shift 1
	FLOAT  shift 2

	Arg  goto 15
	Type  goto 9


state 12
	Arg : Type identifier .  (5)

	.  reduce 5


state 13
	CompoundStmt : '{' . StmtList '}'
	StmtList : .  (30)

	.  reduce 30

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

	ForStmt  goto 27
	Declaration  goto 28
	WhileStmt  goto 29
	Rvalue  goto 30
	Expr  goto 31
	IfStmt  goto 32
	Stmt  goto 33
	CompoundStmt  goto 34
	Type  goto 35
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 17
	Factor : '(' . Expr ')'

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Rvalue  goto 30
	Expr  goto 39
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


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
	Stmt : ';' .  (17)

	.  reduce 17


state 21
	CompoundStmt : '{' StmtList '}' .  (28)

	.  reduce 28


state 22
	Expr : identifier . '=' Expr
	Factor : identifier .  (50)

	'='  shift 43
	.  reduce 50


state 23
	Factor : number .  (51)

	.  reduce 51


state 24
	ForStmt : FOR . '(' Expr ';' OptExpr ';' OptExpr ')' Stmt

	'('  shift 44


state 25
	WhileStmt : WHILE . '(' Expr ')' Stmt

	'('  shift 45


state 26
	IfStmt : IF . '(' Expr ')' M1 Stmt M2 ElsePart

	'('  shift 46


state 27
	Stmt : ForStmt .  (11)

	.  reduce 11


state 28
	Stmt : Declaration .  (16)

	.  reduce 16


state 29
	Stmt : WhileStmt .  (12)

	.  reduce 12


state 30
	Expr : Rvalue .  (32)
	Rvalue : Rvalue . Compare Mag

	eq  shift 47
	le  shift 48
	ge  shift 49
	ne  shift 50
	lt  shift 51
	gt  shift 52
	.  reduce 32

	Compare  goto 53


state 31
	Stmt : Expr . ';'

	';'  shift 54


state 32
	Stmt : IfStmt .  (14)

	.  reduce 14


state 33
	StmtList : StmtList Stmt .  (29)

	.  reduce 29


state 34
	Stmt : CompoundStmt .  (15)

	.  reduce 15


state 35
	Declaration : Type . IdentList ';'

	identifier  shift 55

	IdentList  goto 56


state 36
	Mag : Term .  (43)
	Term : Term . '/' Factor
	Term : Term . '*' Factor

	'*'  shift 57
	'/'  shift 58
	.  reduce 43


state 37
	Term : Factor .  (46)

	.  reduce 46


state 38
	Mag : Mag . '-' Term
	Mag : Mag . '+' Term
	Rvalue : Mag .  (34)

	'+'  shift 59
	'-'  shift 60
	.  reduce 34


state 39
	Factor : '(' Expr . ')'

	')'  shift 61


state 40
	Factor : identifier .  (50)

	.  reduce 50


state 41
	Factor : '+' Factor .  (49)

	.  reduce 49


state 42
	Factor : '-' Factor .  (48)

	.  reduce 48


state 43
	Expr : identifier '=' . Expr

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Rvalue  goto 30
	Expr  goto 62
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 44
	ForStmt : FOR '(' . Expr ';' OptExpr ';' OptExpr ')' Stmt

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Rvalue  goto 30
	Expr  goto 63
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 45
	WhileStmt : WHILE '(' . Expr ')' Stmt

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Rvalue  goto 30
	Expr  goto 64
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 46
	IfStmt : IF '(' . Expr ')' M1 Stmt M2 ElsePart

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23

	Rvalue  goto 30
	Expr  goto 65
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 47
	Compare : eq .  (35)

	.  reduce 35


state 48
	Compare : le .  (38)

	.  reduce 38


state 49
	Compare : ge .  (39)

	.  reduce 39


state 50
	Compare : ne .  (40)

	.  reduce 40


state 51
	Compare : lt .  (36)

	.  reduce 36


state 52
	Compare : gt .  (37)

	.  reduce 37


state 53
	Rvalue : Rvalue Compare . Mag

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Term  goto 36
	Factor  goto 37
	Mag  goto 66


state 54
	Stmt : Expr ';' .  (13)

	.  reduce 13


state 55
	IdentList : identifier . ',' IdentList
	IdentList : identifier .  (10)

	','  shift 67
	.  reduce 10


state 56
	Declaration : Type IdentList . ';'

	';'  shift 68


state 57
	Term : Term '*' . Factor

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Factor  goto 69


state 58
	Term : Term '/' . Factor

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Factor  goto 70


state 59
	Mag : Mag '+' . Term

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Term  goto 71
	Factor  goto 37


state 60
	Mag : Mag '-' . Term

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 40
	number  shift 23

	Term  goto 72
	Factor  goto 37


state 61
	Factor : '(' Expr ')' .  (47)

	.  reduce 47


state 62
	Expr : identifier '=' Expr .  (31)

	.  reduce 31


state 63
	ForStmt : FOR '(' Expr . ';' OptExpr ';' OptExpr ')' Stmt

	';'  shift 73


state 64
	WhileStmt : WHILE '(' Expr . ')' Stmt

	')'  shift 74


state 65
	IfStmt : IF '(' Expr . ')' M1 Stmt M2 ElsePart

	')'  shift 75


state 66
	Rvalue : Rvalue Compare Mag .  (33)
	Mag : Mag . '-' Term
	Mag : Mag . '+' Term

	'+'  shift 59
	'-'  shift 60
	.  reduce 33


state 67
	IdentList : identifier ',' . IdentList

	identifier  shift 55

	IdentList  goto 76


state 68
	Declaration : Type IdentList ';' .  (6)

	.  reduce 6


state 69
	Term : Term '*' Factor .  (44)

	.  reduce 44


state 70
	Term : Term '/' Factor .  (45)

	.  reduce 45


state 71
	Mag : Mag '+' Term .  (41)
	Term : Term . '/' Factor
	Term : Term . '*' Factor

	'*'  shift 57
	'/'  shift 58
	.  reduce 41


state 72
	Mag : Mag '-' Term .  (42)
	Term : Term . '/' Factor
	Term : Term . '*' Factor

	'*'  shift 57
	'/'  shift 58
	.  reduce 42


state 73
	ForStmt : FOR '(' Expr ';' . OptExpr ';' OptExpr ')' Stmt
	OptExpr : .  (20)

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23
	.  reduce 20

	OptExpr  goto 77
	Rvalue  goto 30
	Expr  goto 78
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


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

	ForStmt  goto 27
	Declaration  goto 28
	WhileStmt  goto 29
	Rvalue  goto 30
	Expr  goto 31
	IfStmt  goto 32
	Stmt  goto 79
	CompoundStmt  goto 34
	Type  goto 35
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 75
	IfStmt : IF '(' Expr ')' . M1 Stmt M2 ElsePart
	M1 : .  (25)

	.  reduce 25

	M1  goto 80


state 76
	IdentList : identifier ',' IdentList .  (9)

	.  reduce 9


state 77
	ForStmt : FOR '(' Expr ';' OptExpr . ';' OptExpr ')' Stmt

	';'  shift 81


state 78
	OptExpr : Expr .  (19)

	.  reduce 19


state 79
	WhileStmt : WHILE '(' Expr ')' Stmt .  (21)

	.  reduce 21


state 80
	IfStmt : IF '(' Expr ')' M1 . Stmt M2 ElsePart

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

	ForStmt  goto 27
	Declaration  goto 28
	WhileStmt  goto 29
	Rvalue  goto 30
	Expr  goto 31
	IfStmt  goto 32
	Stmt  goto 82
	CompoundStmt  goto 34
	Type  goto 35
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 81
	ForStmt : FOR '(' Expr ';' OptExpr ';' . OptExpr ')' Stmt
	OptExpr : .  (20)

	'('  shift 17
	'+'  shift 18
	'-'  shift 19
	identifier  shift 22
	number  shift 23
	.  reduce 20

	OptExpr  goto 83
	Rvalue  goto 30
	Expr  goto 78
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 82
	IfStmt : IF '(' Expr ')' M1 Stmt . M2 ElsePart
	M2 : .  (26)

	.  reduce 26

	M2  goto 84


state 83
	ForStmt : FOR '(' Expr ';' OptExpr ';' OptExpr . ')' Stmt

	')'  shift 85


84: shift-reduce conflict (shift 86, reduce 24) on ELSE
state 84
	IfStmt : IF '(' Expr ')' M1 Stmt M2 . ElsePart
	ElsePart : .  (24)

	ELSE  shift 86
	.  reduce 24

	ElsePart  goto 87


state 85
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

	ForStmt  goto 27
	Declaration  goto 28
	WhileStmt  goto 29
	Rvalue  goto 30
	Expr  goto 31
	IfStmt  goto 32
	Stmt  goto 88
	CompoundStmt  goto 34
	Type  goto 35
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 86
	ElsePart : ELSE . Stmt M3

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

	ForStmt  goto 27
	Declaration  goto 28
	WhileStmt  goto 29
	Rvalue  goto 30
	Expr  goto 31
	IfStmt  goto 32
	Stmt  goto 89
	CompoundStmt  goto 34
	Type  goto 35
	Term  goto 36
	Factor  goto 37
	Mag  goto 38


state 87
	IfStmt : IF '(' Expr ')' M1 Stmt M2 ElsePart .  (22)

	.  reduce 22


state 88
	ForStmt : FOR '(' Expr ';' OptExpr ';' OptExpr ')' Stmt .  (18)

	.  reduce 18


state 89
	ElsePart : ELSE Stmt . M3
	M3 : .  (27)

	.  reduce 27

	M3  goto 90


state 90
	ElsePart : ELSE Stmt M3 .  (23)

	.  reduce 23


##############################################################################
# Summary
##############################################################################

State 84 contains 1 shift-reduce conflict(s)


27 token(s), 24 nonterminal(s)
52 grammar rule(s), 91 state(s)


##############################################################################
# End of File
##############################################################################
