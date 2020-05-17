lex icg.l
yacc -d icg.y
gcc lex.yy.c y.tab.c
