lex lexical.l
yacc -d yacc_phase3.y
gcc lex.yy.c y.tab.c
