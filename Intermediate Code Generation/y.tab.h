/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HASH = 258,
    INCLUDE = 259,
    CSTDIO = 260,
    STDLIB = 261,
    MATH = 262,
    STRING = 263,
    TIME = 264,
    IOSTREAM = 265,
    CONIO = 266,
    NAMESPACE = 267,
    COUT = 268,
    ENDL = 269,
    STRING_LITERAL = 270,
    HEADER_LITERAL = 271,
    PRINT = 272,
    RETURN = 273,
    UMINUS = 274,
    INTEGER_LITERAL = 275,
    CHARACTER_LITERAL = 276,
    FLOAT_LITERAL = 277,
    IDENTIFIER = 278,
    FOR = 279,
    WHILE = 280,
    INC_OP = 281,
    DEC_OP = 282,
    LE_OP = 283,
    GE_OP = 284,
    EQ_OP = 285,
    NE_OP = 286,
    MUL_ASSIGN = 287,
    DIV_ASSIGN = 288,
    MOD_ASSIGN = 289,
    ADD_ASSIGN = 290,
    SUB_ASSIGN = 291,
    CHAR = 292,
    INT = 293,
    FLOAT = 294,
    VOID = 295,
    IF = 296,
    ELSE = 297
  };
#endif
/* Tokens.  */
#define HASH 258
#define INCLUDE 259
#define CSTDIO 260
#define STDLIB 261
#define MATH 262
#define STRING 263
#define TIME 264
#define IOSTREAM 265
#define CONIO 266
#define NAMESPACE 267
#define COUT 268
#define ENDL 269
#define STRING_LITERAL 270
#define HEADER_LITERAL 271
#define PRINT 272
#define RETURN 273
#define UMINUS 274
#define INTEGER_LITERAL 275
#define CHARACTER_LITERAL 276
#define FLOAT_LITERAL 277
#define IDENTIFIER 278
#define FOR 279
#define WHILE 280
#define INC_OP 281
#define DEC_OP 282
#define LE_OP 283
#define GE_OP 284
#define EQ_OP 285
#define NE_OP 286
#define MUL_ASSIGN 287
#define DIV_ASSIGN 288
#define MOD_ASSIGN 289
#define ADD_ASSIGN 290
#define SUB_ASSIGN 291
#define CHAR 292
#define INT 293
#define FLOAT 294
#define VOID 295
#define IF 296
#define ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "icg.y" /* yacc.c:1909  */
	
	char sval[300];

#line 142 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
