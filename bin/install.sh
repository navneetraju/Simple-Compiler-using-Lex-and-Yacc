cd ICG
lex icg.l
yacc icg.y 
gcc lex.yy.c y.tab.c -o icgGen
mv icgGen ..
cd ..

