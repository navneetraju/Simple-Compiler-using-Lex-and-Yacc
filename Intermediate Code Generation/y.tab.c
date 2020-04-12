/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "icg.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void yyerror(const char*);
	int yylex();

	extern FILE * yyin, *yyout;

	FILE *fp_icg, *fp_quad;
	
	extern int line;
	
	char buffer[100];
	int ln = 0, tempno = 0;

	int assignop = -1;		//assignment operator == += -=
	int unaryop = -1;		//unary operator type
	int exprno = -1;		//FOR loop , 3rd expression
	int m = 0;				//string length for buffer

	int paramno = 0;		//Number of parameters
	char intbuf[20];
	char secIDbuf[20];

	



#line 97 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 42 "icg.y" /* yacc.c:355  */
	
	char sval[300];

#line 225 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 242 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,     2,     2,    23,     2,     2,
      54,    55,    22,    19,    56,    20,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    51,
      49,    24,    50,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    82,    83,    84,    87,    89,    90,    95,
      96,   101,   102,   103,   104,   105,   106,   107,   112,   113,
     118,   119,   124,   125,   126,   127,   128,   133,   134,   135,
     140,   145,   146,   147,   148,   155,   161,   152,   170,   177,
     182,   188,   181,   346,   352,   345,   378,   387,   395,   403,
     411,   424,   436,   448,   460,   476,   492,   508,   527,   528,
     529,   530,   535,   536,   541,   555,   560,   561,   645,   646,
     647,   648,   649,   650,   655,   657,   664,   656,   693,   694,
     699,   700,   705,   706,   707,   708,   709,   714,   715,   727,
     742,   743,   779,   780,   781,   782,   783,   784,   789,   790,
     800,   814,   815,   825,   835,   845,   859,   860,   871,   885,
     886,   896,   906,   920,   921,   925,   933,   942,   948,   952,
     953,   958,   959,   964,   965,   970,   975
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "INCLUDE", "CSTDIO", "STDLIB",
  "MATH", "STRING", "TIME", "IOSTREAM", "CONIO", "NAMESPACE", "COUT",
  "ENDL", "STRING_LITERAL", "HEADER_LITERAL", "PRINT", "RETURN", "'+'",
  "'-'", "'/'", "'*'", "'%'", "'='", "UMINUS", "INTEGER_LITERAL",
  "CHARACTER_LITERAL", "FLOAT_LITERAL", "IDENTIFIER", "FOR", "WHILE",
  "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "CHAR", "INT",
  "FLOAT", "VOID", "IF", "ELSE", "'<'", "'>'", "';'", "'{'", "'}'", "'('",
  "')'", "','", "'?'", "':'", "'!'", "'~'", "\"INC_OP\"", "\"DEC_OP\"",
  "$accept", "S", "program", "NSPACE", "translation_unit", "ext_dec",
  "libraries", "compound_statement", "block_item_list", "block_item",
  "printstat", "declaration", "statement", "conditional_statement", "$@1",
  "$@2", "iteration_statement", "$@3", "$@4", "$@5", "$@6", "expr",
  "type_specifier", "init_declarator_list", "init_declarator",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "$@7", "$@8", "expression_statement", "expression", "primary_expression",
  "postfix_expression", "unary_expression", "unary_operator",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "function_definition", "function_call",
  "declarator", "parameter_list", "parameter_declaration",
  "identifier_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    43,
      45,    47,    42,    37,    61,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    60,
      62,    59,   123,   125,    40,    41,    44,    63,    58,    33,
     126,   298,   299
};
# endif

#define YYPACT_NINF -98

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define YYTABLE_NINF -121

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    39,   -42,    15,   -98,   -10,    12,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -10,   -98,   -98,    50,   -98,    89,
       5,   251,   -98,    40,   -38,   -98,    89,   109,    55,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,    32,    88,
     -98,    64,   -98,    60,    69,   172,   -98,   -98,   -98,   -98,
     -98,    80,   121,   126,   160,    11,   -98,   -98,    88,   -98,
     -98,   -98,   -98,   -98,   159,   -98,   100,   -98,   -98,   -98,
     -98,    64,   -98,   -98,   -98,   -29,   -98,    -8,   213,    88,
     -25,    41,    49,    97,   113,   161,   -98,   -98,   187,    57,
     -98,    90,     5,   -98,   -98,   193,   -98,   173,   209,   -98,
     172,   -98,    88,   -98,   103,   -98,   -98,   -98,   -98,    88,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,    88,   -98,
      88,    88,   168,    88,    88,    88,    88,    88,    88,    88,
      88,    88,   -98,   138,   -98,   -98,    43,   -98,   199,   -98,
     214,   110,   -98,    88,   175,   -98,   -98,   -98,   -98,    41,
      41,    88,    49,    49,    49,    49,    97,    97,   -98,   -98,
     -98,   184,   118,   -98,   -98,   -98,   -98,    88,   172,   185,
     -98,   183,   189,   139,   -98,   -98,    11,   188,   -98,    48,
      11,   -98,    88,   203,   218,   219,   194,   -98,   149,   -98,
     221,   -98,   -98,   237,   238,   239,   240,   -98,   -98,    11,
     -98,    83,   -98,   -98,   -98,   -98,   -98,   241,   242,   243,
     244,   -98,   -98,   -98,   -98
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     0,     6,     1,   117,
      59,    60,    61,    58,     5,     7,     9,     0,    10,     0,
       0,     0,     8,    65,     0,    62,     0,     0,     0,   114,
       4,    11,    12,    13,    14,    15,    16,    17,     0,     0,
      30,     0,   113,     0,     0,     0,    92,    93,    83,    85,
      84,    82,     0,     0,     0,    39,    78,    18,     0,    94,
      95,    96,    97,    31,     0,    20,     0,    22,    23,    34,
      33,     0,    80,    66,    32,     0,    87,    90,   109,     0,
      74,    98,   101,   106,     0,     0,   125,   120,   124,     0,
     121,     0,     0,    82,    64,    65,    63,     0,     0,    24,
       0,    43,     0,    38,     0,    19,    21,    26,    79,     0,
      88,    89,    68,    71,    72,    73,    69,    70,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,   123,   118,     0,   119,     0,     3,
       0,     0,    40,     0,     0,   109,    86,    81,    67,    99,
     100,     0,   104,   105,   102,   103,   107,   108,   111,   110,
     112,   116,     0,   122,   126,    29,    27,     0,     0,     0,
      35,    76,   115,     0,    41,    44,    39,     0,    28,     0,
      39,    36,     0,     0,     0,     0,     0,    45,    39,    77,
       0,    46,    47,     0,     0,     0,     0,    48,    49,    39,
      37,     0,    52,    53,    50,    51,    42,     0,     0,     0,
       0,    54,    55,    57,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -14,   -98,   -98,   257,   -98,    -5,   -98,   208,
     -98,    -4,   -55,    85,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,     2,   -98,   233,   -35,   -98,   -97,   -98,   -98,
     -44,   -56,   -98,   -98,   -76,   -98,   -98,   -24,     7,    81,
     -98,   -98,    -7,   -98,   140,   142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    14,    15,    38,    63,    64,    65,
      66,    16,    68,    69,   176,   188,    70,   168,   179,   143,
     180,   186,    88,    24,    25,    72,   118,    73,   122,   177,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      18,    84,    19,    89,    90,    91
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,    99,   104,   119,    94,   144,    30,    17,     1,     7,
      26,   120,   121,    40,    29,     8,    17,     2,    41,     9,
      85,    42,   108,    67,   110,   111,   145,   109,    20,    71,
      46,    47,   -75,    10,    11,    12,    13,    48,    49,    50,
      93,    52,    53,     6,   145,   145,   169,   145,   145,   145,
     145,   145,   145,   158,   159,   160,   142,    85,    54,    55,
      67,    21,    56,    27,    39,    58,    71,   145,   127,   128,
      59,    60,    61,    62,   147,   123,   124,   183,   139,    23,
     184,   185,    92,   148,    86,   189,    10,    11,    12,    13,
     125,   126,  -117,    95,  -117,   171,   149,   150,    10,    11,
      12,    13,   207,   208,   209,   210,   145,    46,    47,    97,
      87,   173,   135,   136,    48,    49,    50,    93,   129,   130,
     131,   181,    43,    98,   174,   187,    44,    45,    46,    47,
     152,   153,   154,   155,  -117,    48,    49,    50,    51,    52,
      53,    27,    58,    28,   206,   137,   138,    59,    60,    61,
      62,   107,    10,    11,    12,    13,    54,    55,   146,   109,
      56,    27,    57,    58,   132,   166,   167,    86,    59,    60,
      61,    62,    43,   172,   138,   100,    44,    45,    46,    47,
     101,    10,    11,    12,    13,    48,    49,    50,    51,    52,
      53,    46,    47,   161,   178,   109,    54,    55,    48,    49,
      50,    93,    10,    11,    12,    13,    54,    55,   156,   157,
      56,    27,   105,    58,   102,   133,   134,    39,    59,    60,
      61,    62,   140,    56,   141,   151,    58,   190,   164,   165,
     170,    59,    60,    61,    62,   191,   192,   112,  -120,   109,
     175,   193,   194,  -119,   195,   196,   182,   197,   198,   199,
     201,   113,   114,   115,   116,   117,    31,    32,    33,    34,
      35,    36,    37,   202,   203,   204,   205,   211,   212,   213,
     214,    22,   106,   200,    96,   162,   163
};

static const yytype_uint8 yycheck[] =
{
      55,    45,    58,    79,    39,   102,    20,     5,     3,    51,
      17,    36,    37,    51,    19,     0,    14,    12,    56,    29,
      27,    26,    51,    27,    32,    33,   102,    56,    16,    27,
      19,    20,    57,    43,    44,    45,    46,    26,    27,    28,
      29,    30,    31,     4,   120,   121,   143,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   100,    64,    47,    48,
      64,    49,    51,    52,    24,    54,    64,   143,    19,    20,
      59,    60,    61,    62,   109,    34,    35,    29,    92,    29,
      32,    33,    50,   118,    29,   182,    43,    44,    45,    46,
      49,    50,    52,    29,    54,   151,   120,   121,    43,    44,
      45,    46,    19,    20,    21,    22,   182,    19,    20,    49,
      55,   167,    55,    56,    26,    27,    28,    29,    21,    22,
      23,   176,    13,    54,   168,   180,    17,    18,    19,    20,
     123,   124,   125,   126,    54,    26,    27,    28,    29,    30,
      31,    52,    54,    54,   199,    55,    56,    59,    60,    61,
      62,    51,    43,    44,    45,    46,    47,    48,    55,    56,
      51,    52,    53,    54,    51,    55,    56,    29,    59,    60,
      61,    62,    13,    55,    56,    54,    17,    18,    19,    20,
      54,    43,    44,    45,    46,    26,    27,    28,    29,    30,
      31,    19,    20,    55,    55,    56,    47,    48,    26,    27,
      28,    29,    43,    44,    45,    46,    47,    48,   127,   128,
      51,    52,    53,    54,    54,    54,    29,    24,    59,    60,
      61,    62,    49,    51,    15,    57,    54,    24,    29,    15,
      55,    59,    60,    61,    62,    32,    33,    24,    54,    56,
      55,    38,    39,    54,    41,    42,    58,    29,    29,    55,
      29,    38,    39,    40,    41,    42,     5,     6,     7,     8,
       9,    10,    11,    26,    26,    26,    26,    26,    26,    26,
      26,    14,    64,   188,    41,   133,   136
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    12,    64,    65,    66,     4,    51,     0,    29,
      43,    44,    45,    46,    67,    68,    74,    85,   103,   105,
      16,    49,    68,    29,    86,    87,   105,    52,    54,    70,
      65,     5,     6,     7,     8,     9,    10,    11,    69,    24,
      51,    56,    70,    13,    17,    18,    19,    20,    26,    27,
      28,    29,    30,    31,    47,    48,    51,    53,    54,    59,
      60,    61,    62,    70,    71,    72,    73,    74,    75,    76,
      79,    85,    88,    90,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   104,   105,    29,    55,    85,   106,
     107,   108,    50,    29,    88,    29,    87,    49,    54,    93,
      54,    54,    54,    75,    94,    53,    72,    51,    51,    56,
      32,    33,    24,    38,    39,    40,    41,    42,    89,    97,
      36,    37,    91,    34,    35,    49,    50,    19,    20,    21,
      22,    23,    51,    54,    29,    55,    56,    55,    56,    65,
      49,    15,    93,    82,    90,    97,    55,    88,    88,   100,
     100,    57,   101,   101,   101,   101,   102,   102,    97,    97,
      97,    55,   108,   107,    29,    15,    55,    56,    80,    90,
      55,    94,    55,    94,    93,    55,    77,    92,    55,    81,
      83,    75,    58,    29,    32,    33,    84,    75,    78,    90,
      24,    32,    33,    38,    39,    41,    42,    29,    29,    55,
      76,    29,    26,    26,    26,    26,    75,    19,    20,    21,
      22,    26,    26,    26,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    66,    67,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    72,    72,    73,    73,    73,
      74,    75,    75,    75,    75,    77,    78,    76,    76,    76,
      80,    81,    79,    82,    83,    79,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    90,    91,    92,    90,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   108
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     4,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     2,     1,     1,     2,     2,     2,     4,     6,     4,
       3,     1,     1,     1,     1,     0,     0,     8,     2,     0,
       0,     0,     9,     0,     0,     7,     2,     2,     2,     2,
       3,     3,     3,     3,     5,     5,     5,     5,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     7,     1,     2,
       1,     3,     1,     1,     1,     1,     3,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     2,     4,     3,     1,     4,     4,
       3,     1,     3,     2,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 35:
#line 155 "icg.y" /* yacc.c:1646  */
    {
		  	fprintf(fp_icg,"ifFalse t%d goto L%d\n",--tempno,ln);
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;
	  }
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "goto L%d\n", ln+1);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);  	
		  	fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
			
	  }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 172 "icg.y" /* yacc.c:1646  */
    {
		  	fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
	  }
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 182 "icg.y" /* yacc.c:1646  */
    { 
			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 188 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "ifFalse t%d goto L%d\n", --tempno, ln);
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;
		}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 194 "icg.y" /* yacc.c:1646  */
    {
		
			//expression 3

			switch(exprno){
				case 0:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 1:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 2:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 4:						
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 6:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 7:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 8:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 9:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 10:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 11:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;
			}

			exprno = -1;

			//end of expression 3

			fprintf(fp_icg, "goto L%d\n", --ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 346 "icg.y" /* yacc.c:1646  */
    {
				fprintf(fp_icg,"L%d:\n",ln);
				fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
				ln++;
			}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 352 "icg.y" /* yacc.c:1646  */
    {
				fprintf(fp_icg,"ifFalse t%d goto L%d\n",--tempno,ln);
				fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
				tempno++;
			}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 358 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "goto L%d\n", --ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 379 "icg.y" /* yacc.c:1646  */
    {  
			// printf("ID %s\n", $1);
			exprno = 0; 

			m = strlen((yyvsp[-1].sval));
			strncpy((yyval.sval), (yyvsp[-1].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 388 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 1;

			m = strlen((yyvsp[-1].sval));
			strncpy((yyval.sval), (yyvsp[-1].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 396 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 2;

			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 404 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 3; 

			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 412 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 4; 

			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

		}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 425 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 5;
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 437 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 6;
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 449 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 7; 
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 461 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 8;

			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 477 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 9;
			
			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 493 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 10; 
			
			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 509 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 11; 

			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 542 "icg.y" /* yacc.c:1646  */
    {
			if(tempno > 0){
				fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
				fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
				tempno++;
			}
			else if(tempno == 0){
				fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), (yyvsp[0].sval)); 
				fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), (yyvsp[-2].sval));
		
			}
			
		}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 560 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 562 "icg.y" /* yacc.c:1646  */
    {
			switch(assignop){
				case 0: if(tempno > 0){
							fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
							fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
							tempno++;
						}
						else if(tempno == 0){
							fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), (yyvsp[0].sval)); 
							fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), (yyvsp[-2].sval));							
						}
						break;

				case 1: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;
					
						break;
				case 2:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 4:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[-2].sval), '%',(yyvsp[0].sval));
						fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%', (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
			}
			
			assignop = -1;

			
		}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 645 "icg.y" /* yacc.c:1646  */
    { assignop = 0; 	}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 646 "icg.y" /* yacc.c:1646  */
    { assignop = 1; 	}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 647 "icg.y" /* yacc.c:1646  */
    { assignop = 2; 	}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 648 "icg.y" /* yacc.c:1646  */
    { assignop = 3; 	}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 649 "icg.y" /* yacc.c:1646  */
    { assignop = 4; 	}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 650 "icg.y" /* yacc.c:1646  */
    { assignop = 5; 	}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 655 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval));  }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 657 "icg.y" /* yacc.c:1646  */
    { 
			fprintf(fp_icg,"ifFalse t%d goto L%d\n", --tempno, ln); 
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;		
			ln++;
		}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 664 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[0].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);

			fprintf(fp_icg,"goto L%d\n", ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);

			fprintf(fp_icg,"L%d:\n", --ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 679 "icg.y" /* yacc.c:1646  */
    {
			
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[0].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);

			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 699 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 705 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 706 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 707 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 708 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 709 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[-1].sval)); 	}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 714 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 716 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-1].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-1].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[-1].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-1].sval));
			
		}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 728 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-1].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-1].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[-1].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-1].sval));
		}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 742 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 744 "icg.y" /* yacc.c:1646  */
    {
			switch(unaryop){
				case 1: 
						sprintf(buffer,"t%d",tempno++);	
						m = strlen(buffer);
						buffer[m] = '\0';					
						fprintf(fp_icg, "%s = -%s\n",buffer, (yyvsp[0].sval));	
						fprintf(fp_quad, "\t-\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);						
						break;

				case 4: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[0].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[0].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;
			}
			unaryop = -1;
		}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 779 "icg.y" /* yacc.c:1646  */
    {	unaryop = 0; }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 780 "icg.y" /* yacc.c:1646  */
    {	unaryop = 1; }
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 781 "icg.y" /* yacc.c:1646  */
    {	unaryop = 2; }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 782 "icg.y" /* yacc.c:1646  */
    {	unaryop = 3; }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 783 "icg.y" /* yacc.c:1646  */
    {	unaryop = 4; }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 784 "icg.y" /* yacc.c:1646  */
    {	unaryop = 5; }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 789 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 791 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s == %s\n", buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t==\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 801 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s != %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t!=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 814 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 816 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s < %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t<\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 826 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s > %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t>\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 836 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s <= %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t<=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 846 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s >= %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t>=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 859 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 861 "icg.y" /* yacc.c:1646  */
    {
			// printf("%s + %s\n", $1, $3 );
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 872 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 887 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 897 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 907 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[-2].sval), '%',(yyvsp[0].sval));
			fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%',(yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 926 "icg.y" /* yacc.c:1646  */
    {
			paramno++;	
			fprintf(fp_icg, "call(%s, %d)\n", (yyvsp[-3].sval), paramno);	
			fprintf(fp_quad, "\tcall\t\t%s\t\t%d\n", (yyvsp[-3].sval), paramno);

			paramno = 0;	
		}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 934 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "call(%s, 0)\n", (yyvsp[-2].sval));	
			fprintf(fp_quad, "\tcall\t\t%s\t\t0\n", (yyvsp[-2].sval));
		}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 943 "icg.y" /* yacc.c:1646  */
    { 
			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);	
			(yyval.sval)[m] = '\0';
		}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 949 "icg.y" /* yacc.c:1646  */
    {
			
		}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 971 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[0].sval));
		}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 976 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[0].sval));	
			
			paramno++; 
		}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2510 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 985 "icg.y" /* yacc.c:1906  */



void yyerror(const char *str){
	fflush(stdout);
	printf("Line:%d: ", line);
	printf("\033[1;31m");
	printf("error: ");
	printf("\033[0m");
	printf("%s\n", str);
}


int main(){
	
	fp_icg 	 	= fopen("IntermediateCode/icg.txt", "w");
	fp_quad		= fopen("IntermediateCode/quad.txt", "w");
	printf("\n");
	

	fprintf(fp_quad, "\tOp\t\tArg1\t\tArg2\t\tRes\n");
	fprintf(fp_quad, "------------------------------------------------------------------------\n");

	yyparse();
	
	fclose(fp_icg);
	
	printf("\n\nIntermediate Code\n\n");
	system("cat IntermediateCode/icg.txt");

	printf("\n\nQuadruple Format\n\n");
	
	

	fclose(fp_quad);
	system("cat IntermediateCode/quad.txt");
	
	return 0;
}

