# Simple-Compiler-using-Lex-and-Yacc
C++ Compiler using Lex and Yacc\
Compiler handles following iterative and conditional constructs:
- for
- while
- if
- if-else
###### Phase 1 - Token and Symbol Table Generation
```
lex phase1.l
gcc lex.yy.c
./a.out < [filename]
```

###### Phase 2 - Syntax Parser
```
lex lexical.l
yacc -d gram.y 
gcc lex.yy.c y.tab.c
./a.out < [filename]
```

###### Phase 3 - Semantic Parser (Abstract Syntax Tree )
```
lex ast.l
yacc -d ast.y
gcc lex.yy.c y.tab.c 
./a.out < [filename]
```

###### Phase 4 - Intermediate Code Generation
```
lex icg.l
yacc -d icg.y
gcc lex.yy.c y.tab.c
./a.out < [filename]
```


###### Phase 5 - ICG Optimization
```
python icg_opt.py [filename] --print
```


###### Phase 6 - Assembly Code Generation
```
python gen.py [filename]
Note: Assembly code will be stored in [filename.s]
```
