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
#line 2 "parse.y" /* yacc.c:339  */

  #include <iostream>
  #include <cmath>
  #include <iomanip>
  #include <fenv.h>
  #include <string>
  #include <cstring>
  #include <vector>
  #include "ast.h"


	int yylex (void);
	int printflag;
	extern int yylineno;
	extern char *yytext;
	void yyerror (char const *);
	

#line 85 "parse.tab.cpp" /* yacc.c:339  */

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
   by #include "parse.tab.hpp".  */
#ifndef YY_YY_PARSE_TAB_HPP_INCLUDED
# define YY_YY_PARSE_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    PLUS = 285,
    EQUAL = 286,
    EXCEPT = 287,
    EXEC = 288,
    FINALLY = 289,
    FOR = 290,
    FROM = 291,
    GLOBAL = 292,
    GREATER = 293,
    GREATEREQUAL = 294,
    GRLT = 295,
    IF = 296,
    IMPORT = 297,
    IN = 298,
    INDENT = 299,
    IS = 300,
    LAMBDA = 301,
    LBRACE = 302,
    LEFTSHIFT = 303,
    LEFTSHIFTEQUAL = 304,
    LESS = 305,
    LESSEQUAL = 306,
    LPAR = 307,
    LSQB = 308,
    MINEQUAL = 309,
    MINUS = 310,
    NAME = 311,
    NEWLINE = 312,
    NOT = 313,
    NOTEQUAL = 314,
    OR = 315,
    PASS = 316,
    PERCENT = 317,
    PERCENTEQUAL = 318,
    PLUSEQUAL = 319,
    PRINT = 320,
    RAISE = 321,
    RBRACE = 322,
    RETURN = 323,
    RIGHTSHIFT = 324,
    RIGHTSHIFTEQUAL = 325,
    RPAR = 326,
    RSQB = 327,
    SEMI = 328,
    SLASH = 329,
    SLASHEQUAL = 330,
    STAR = 331,
    STAREQUAL = 332,
    STRING = 333,
    TILDE = 334,
    TRY = 335,
    VBAREQUAL = 336,
    WHILE = 337,
    WITH = 338,
    YIELD = 339,
    INUMBER = 340,
    FNUMBER = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "parse.y" /* yacc.c:355  */

  Ast* ast;
  int inum;
  float fnum;
  char* mystring;
  std::vector<Ast*>* myvec;
  //enum action;

#line 221 "parse.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 238 "parse.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  140
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   950

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  324
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  491

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    74,    75,    84,    85,    98,   101,   102,
     123,   124,   127,   128,   131,   132,   135,   136,   139,   140,
     143,   143,   161,   162,   165,   166,   169,   170,   173,   174,
     177,   178,   181,   182,   185,   186,   189,   192,   193,   196,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   210,
     212,   229,   230,   233,   234,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   251,   256,   259,
     260,   263,   264,   267,   270,   273,   274,   275,   276,   277,
     280,   283,   286,   287,   290,   293,   294,   297,   298,   301,
     302,   305,   306,   309,   312,   313,   316,   317,   320,   321,
     324,   325,   326,   329,   330,   333,   334,   337,   340,   341,
     344,   345,   348,   349,   355,   356,   359,   360,   363,   364,
     365,   366,   367,   368,   369,   370,   373,   374,   377,   378,
     381,   382,   385,   386,   389,   390,   393,   394,   397,   398,
     401,   402,   405,   408,   409,   412,   413,   416,   417,   420,
     421,   424,   425,   429,   430,   433,   439,   447,   448,   451,
     452,   455,   456,   465,   466,   469,   470,   473,   474,   477,
     478,   481,   482,   485,   486,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   503,   504,   507,   508,
     511,   512,   515,   516,   519,   520,   523,   527,   530,   531,
     534,   535,   539,   540,   541,   542,   545,   546,   549,   550,
     551,   554,   555,   569,   570,   573,   574,   575,   576,   577,
     585,   586,   588,   591,   592,   595,   596,   599,   600,   603,
     604,   607,   608,   611,   612,   615,   616,   619,   620,   623,
     624,   625,   628,   631,   632,   633,   636,   637,   640,   641,
     644,   645,   648,   652,   655,   656,   659,   660,   663,   664,
     667,   668,   671,   672,   675,   676,   677,   678,   679,   680,
     683,   684,   687,   688,   691,   692,   695,   696,   699,   700,
     703,   704,   708,   709,   712,   713,   716,   717,   720,   724,
     725,   728,   729,   730,   733,   734,   735,   738,   739,   740,
     743,   744,   745,   748,   749,   750,   753,   754,   755,   759,
     760,   761,   764,   765,   766,   769,   770,   771,   774,   777,
     780,   781,   782,   785,   786
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "PLUS",
  "EQUAL", "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL", "OR",
  "PASS", "PERCENT", "PERCENTEQUAL", "PLUSEQUAL", "PRINT", "RAISE",
  "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "RPAR", "RSQB",
  "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL", "STRING", "TILDE",
  "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INUMBER", "FNUMBER",
  "$accept", "start", "single_input", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "decorator", "opt_arglist", "decorators",
  "decorated", "funcdef", "$@1", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "fpdef", "fplist", "stmt", "simple_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "opt_test", "opt_test_2", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "yield_stmt", "raise_stmt", "opt_COMMA_test", "opt_test_3",
  "import_stmt", "import_name", "import_from", "star_DOT", "plus_DOT",
  "pick_STAR_import", "import_as_name", "dotted_as_name",
  "import_as_names", "dotted_as_names", "dotted_name", "global_stmt",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "old_test", "old_lambdef", "test", "opt_IF_ELSE",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "expr",
  "xor_expr", "and_expr", "shift_expr", "pick_LEFTSHIFT_RIGHTSHIFT",
  "arith_expr", "pick_PLUS_MINUS", "term", "pick_multop", "factor",
  "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "subscript", "opt_test_only",
  "opt_sliceop", "sliceop", "exprlist", "testlist", "dictorsetmaker",
  "pick_comp_for", "pick_for_test", "classdef", "opt_testlist", "arglist",
  "argument", "opt_comp_for", "list_iter", "list_for", "list_if",
  "comp_iter", "comp_for", "comp_if", "testlist1", "encoding_decl",
  "yield_expr", "star_fpdef_notest", "star_COMMA_expr", "star_COMMA_fpdef",
  "star_COMMA_test", "star_test_COLON_test", "star_COMMA_subscript",
  "star_COMMA_import_as_name", "plus_COMMA_test", "plus_COMMA_old_test",
  "dictarg", "listarg", "arglist_postlist", "small_stmt_STAR_OR_SEMI", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -365

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-365)))

#define YYTABLE_NINF -308

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     392,   811,    -8,   811,  -365,     4,  -365,    46,   329,  -365,
     329,   329,    28,    47,   811,    -8,    20,   811,   311,   811,
    -365,    55,   113,   861,  -365,   733,   811,   811,    52,  -365,
     129,   811,   811,   811,  -365,  -365,   151,  -365,  -365,   472,
     124,   145,   126,  -365,  -365,   161,  -365,    95,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,   153,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
     154,    56,   167,  -365,   891,   163,   162,   171,    14,     8,
       6,  -365,   329,  -365,    70,  -365,  -365,    44,  -365,  -365,
    -365,  -365,   160,  -365,    29,  -365,    83,    19,  -365,   119,
    -365,    41,   134,    43,    -8,   140,  -365,   170,  -365,   173,
      38,   811,    48,  -365,   176,     3,   164,   121,   125,  -365,
      96,  -365,   123,  -365,  -365,   108,   127,  -365,  -365,   811,
    -365,   154,   181,  -365,  -365,   632,   183,   184,   195,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,   692,   146,
     149,   811,  -365,   861,   861,  -365,   861,  -365,  -365,  -365,
    -365,  -365,   148,  -365,  -365,   169,  -365,   329,   329,   329,
     329,  -365,  -365,   329,  -365,  -365,   329,  -365,  -365,  -365,
    -365,   329,  -365,   158,   102,   752,   191,    70,  -365,  -365,
    -365,  -365,   311,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,   311,   811,   165,   102,  -365,  -365,   811,   632,
     811,   166,   329,  -365,   811,   811,  -365,  -365,    67,   -11,
     632,    -8,   172,  -365,   203,   152,   811,   174,   180,  -365,
     811,   204,   811,   329,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,   329,  -365,  -365,  -365,   206,  -365,   811,  -365,   194,
    -365,   133,   632,   811,   224,   329,    95,  -365,  -365,   154,
      27,   167,  -365,  -365,  -365,   163,   162,   171,    14,     8,
       6,  -365,  -365,   811,   811,   177,   128,  -365,   227,  -365,
     228,   226,   234,   185,   239,   241,   329,  -365,   229,  -365,
    -365,  -365,  -365,  -365,   187,  -365,  -365,  -365,   188,   -10,
     246,   119,   248,   247,   -11,   209,   260,  -365,  -365,   252,
    -365,   244,  -365,  -365,    48,  -365,  -365,  -365,  -365,   255,
    -365,    18,  -365,   111,   232,   235,   811,  -365,  -365,   248,
     552,   811,   261,   250,   266,   256,   184,   632,   163,  -365,
    -365,   811,  -365,  -365,  -365,   811,  -365,  -365,   102,   797,
     263,  -365,   233,  -365,   811,  -365,  -365,   225,   272,  -365,
     219,   632,  -365,   811,  -365,   632,  -365,   221,   237,   209,
    -365,   811,   267,   203,   271,  -365,  -365,   164,   811,  -365,
    -365,  -365,   861,   847,   280,  -365,   552,   279,    50,   632,
     283,   265,   632,   285,  -365,  -365,  -365,  -365,  -365,   286,
    -365,  -365,  -365,   239,  -365,   288,  -365,   632,  -365,  -365,
    -365,   274,  -365,  -365,   252,   291,   292,  -365,   253,   204,
     298,    60,    21,    98,   299,  -365,   257,   811,  -365,  -365,
    -365,  -365,  -365,   811,  -365,  -365,   632,   301,  -365,   289,
     632,   797,  -365,   811,  -365,  -365,  -365,   307,  -365,   632,
     632,  -365,  -365,   811,   847,  -365,  -365,  -365,   847,   308,
     847,  -365,  -365,  -365,   847,  -365,  -365,  -365,   632,  -365,
    -365,  -365,  -365,   632,   244,  -365,   310,   106,  -365,   847,
      98,   312,  -365,  -365,  -365,  -365,  -365,  -365,  -365,   847,
    -365
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    80,     0,    81,     0,     0,   208,
       0,     0,    97,     0,     0,     0,    29,   230,   226,   228,
     209,   219,     8,     0,    74,    70,    86,    83,   232,   210,
       0,     0,     0,   290,   220,   221,     0,     4,     2,    11,
       0,    17,     0,   125,   123,     9,    37,   324,    40,    41,
      42,    43,    44,    75,    76,    77,    79,    78,    45,    91,
      92,    46,    47,    48,    38,   118,   119,   120,   121,   122,
     302,   166,   167,   169,   172,   173,   186,   188,   190,   192,
     197,   200,     0,   207,   214,   222,   164,    54,   124,     3,
      84,   219,   117,   110,     0,   287,     0,     0,    20,   296,
      73,   115,     0,    97,     0,     0,   113,     0,   108,    93,
     106,     0,     0,    34,     0,     0,    27,   302,     0,   229,
     302,   225,     0,   224,   223,   302,     0,   227,   171,     0,
      67,   302,    90,    82,   231,     0,     0,   144,   146,   289,
       1,     8,    10,     9,     7,    16,    19,    18,     0,     0,
       0,   301,   253,     0,     0,   163,     0,   177,   176,   178,
     180,   182,   184,   175,   179,     0,   181,     0,     0,     0,
       0,   194,   195,     0,   198,   199,     0,   205,   204,   203,
     202,     0,   206,     0,    15,   247,   212,   214,    60,    62,
      66,    65,     0,    63,    56,    59,    55,    64,    58,    57,
      61,    50,     0,     0,     0,    15,    13,   218,     0,     0,
     263,     0,   295,   252,     0,     0,    96,    98,     0,     0,
       0,     0,     0,   238,   293,     0,     0,     0,     0,    24,
       0,   299,     0,     0,   255,   258,   259,   217,   235,   236,
     215,     0,   233,   234,   216,    72,    69,     0,    85,     0,
     153,     0,     0,     0,     0,     0,   324,    39,   112,   302,
       0,   168,   170,   185,   183,   174,   187,   189,   191,   193,
     196,   201,   241,     0,     0,     0,   273,    14,   266,   269,
     268,     0,   244,     0,   308,     0,     0,   213,    54,    52,
      51,    49,   116,   111,     0,   286,   261,   262,     0,    29,
       0,   296,    88,     0,     0,     0,   104,   100,    95,   311,
     102,   129,   109,   105,   292,    36,    35,   237,    33,    31,
      26,    29,    25,   305,     0,     0,     0,    68,    71,    88,
       0,   148,     0,   139,     0,   131,   144,     0,   145,   323,
     300,     0,   318,   319,   239,     0,   270,   272,   265,     0,
       0,   240,   247,   242,   247,   211,    53,     0,     0,    23,
       0,     0,   294,     0,   114,     0,    94,     0,     0,   310,
     107,     0,   127,   293,     0,    32,    28,    27,   304,   254,
     256,   257,     0,     0,   314,    89,   156,     0,   152,     0,
       0,   141,     0,     0,   143,   142,   165,   271,   264,   322,
     321,   267,   243,   308,   246,   249,    12,     0,    22,    21,
      87,   133,   101,   103,   311,     0,     0,   291,     0,   299,
       0,   283,    29,   277,   158,   160,   159,   313,   312,   155,
     154,   149,   150,     0,   147,   135,     0,     0,   134,   137,
       0,     0,   306,   251,   245,   248,   260,     0,   309,     0,
       0,    30,   297,     0,     0,   282,   280,   281,     0,     0,
       0,   276,   274,   275,     0,   157,   151,   138,     0,   136,
     130,   320,   250,     0,   129,   126,   305,   285,   162,     0,
     279,   317,   140,   132,   128,   303,   284,   161,   278,   316,
     315
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -365,  -365,  -365,  -365,  -365,   293,  -365,   122,   294,  -365,
     282,  -365,  -365,  -288,   -44,    15,  -365,  -365,  -105,  -365,
      39,     1,   186,  -365,   135,    54,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,    16,  -365,
    -365,  -365,  -365,   240,   243,    45,   -19,   131,    49,  -365,
      13,  -365,  -365,  -365,  -365,  -365,  -119,  -365,  -365,  -365,
     -83,  -365,  -365,  -365,    24,   112,  -365,  -365,  -365,  -199,
     -25,  -365,  -364,  -365,    -1,  -365,  -150,   214,   -14,  -365,
    -365,    12,   205,   202,   208,  -365,   199,  -365,   198,  -365,
     -76,  -365,  -365,   192,  -365,  -365,  -365,  -365,  -365,   347,
    -365,  -365,  -365,  -365,  -365,    31,    26,  -365,  -365,    -7,
      25,  -365,  -365,  -365,   344,  -365,    40,  -335,  -365,   -89,
     268,  -365,   -85,  -112,  -365,  -365,  -365,    -6,    32,    93,
     -21,   -88,   -74,     7,     2,    33,   -77,  -323,  -365,   -28,
     168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   275,    42,    43,
      44,   211,   300,   114,   231,   115,   375,   229,   116,   225,
     386,   250,    47,    48,   288,   201,   202,    49,   130,   327,
      50,    51,    52,    53,    54,    55,    56,    57,   364,   248,
      58,    59,    60,   104,   105,   308,   309,   108,   310,   109,
     110,    61,    62,    63,    64,    65,   372,    66,    67,    68,
     333,   391,   438,    69,   254,   137,   334,   433,   434,   251,
     387,   423,   481,   425,    70,   155,    71,    72,    73,    74,
     167,    75,    76,    77,    78,   173,    79,   176,    80,   181,
      81,    82,    83,   186,    84,   121,   122,   126,   118,    85,
     127,   123,    86,   187,   283,   284,   285,   444,   445,   100,
      87,   119,   379,   234,    88,   298,   277,   278,   346,   461,
     462,   463,   455,   456,   457,    96,    89,    90,   315,   213,
     322,   152,   381,   353,   370,   328,   465,   279,   280,   401,
     149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   260,   102,   235,   182,   224,   238,   128,
     296,   360,   124,   107,   399,    94,   117,   120,   125,   424,
      99,   311,   101,    99,   131,   132,   400,   227,   177,   236,
     136,   138,   239,  -298,   209,   111,   458,   243,   174,    45,
      46,   305,   112,   246,   222,   306,   113,   188,    93,   103,
     204,   168,   133,   335,   341,  -288,   431,   189,   139,   204,
      97,   359,   171,   175,   103,   307,   432,   190,   178,   191,
     112,   210,   112,   112,   113,   192,   113,   113,   143,   228,
     179,   205,   180,   172,   214,   -99,   206,   154,   204,  -298,
     477,   183,   207,   193,   478,   233,   480,   153,   194,   208,
     112,   454,    98,   106,   113,   271,   399,   195,   196,   304,
     223,     3,   151,    -5,   197,   487,   154,   218,   400,   198,
     154,   199,   184,   185,   151,   200,   273,   378,   245,   168,
      28,   233,     9,   241,   459,   212,   232,   151,   395,   460,
       5,   233,   262,   241,   135,     7,   233,   454,    16,    17,
     259,   140,   144,     2,    18,    19,   233,    20,    91,   345,
      23,    -6,   409,   233,   347,   331,   411,   332,   148,   150,
     151,   340,   156,   168,   169,   170,   203,   215,   274,   265,
      28,    29,   219,   276,   282,   220,   290,    34,    35,   221,
     435,   226,   237,   439,   240,   230,   290,   247,   252,   244,
     253,   255,   292,   257,   276,   258,   263,   295,   446,   373,
     355,   380,   264,   302,   272,   286,   377,   289,   299,   314,
     321,   293,   326,   316,   301,   317,   324,   289,   313,   320,
     318,   323,   421,   426,   325,   297,   319,   467,   330,   337,
     303,   470,     3,   348,   349,    99,   329,   350,   344,  -246,
     474,   475,   138,    99,   281,   352,   354,   351,   357,   358,
     192,   361,   365,     9,   363,   306,   368,   338,   369,   482,
     371,   374,   342,   343,   483,   382,   389,   390,   383,    16,
      17,   392,   406,   393,   402,    18,    19,   407,    20,    91,
     408,    23,   412,   413,   416,   418,   427,   430,   436,   437,
     440,   447,   441,   443,   426,  -307,   449,   450,   426,   451,
     426,    28,    29,   453,   426,   464,   468,   154,    34,    35,
       3,   331,   473,   479,   146,   384,   378,   294,   489,   426,
     388,    46,   142,   419,   256,   145,   376,   291,     3,   426,
     396,     9,   356,   216,   397,   385,   217,   276,   276,   366,
     414,   282,   312,   404,   367,   484,   469,    16,    17,     9,
     394,   429,   410,    18,    19,   336,    20,    91,   261,    23,
     415,   267,   269,   266,   270,   134,    17,   420,   268,   287,
     405,    18,    19,   403,    20,    91,   147,    46,   398,    28,
      29,   488,   486,   242,   362,    33,    34,    35,   452,     1,
       2,     3,   485,     4,   490,   417,     5,    28,    29,     6,
     442,     7,     8,   471,    34,    35,   448,   428,     0,     0,
       0,     0,     9,     0,   339,    10,   384,    11,    12,    13,
       0,     0,   466,    14,    15,     0,     0,     0,    16,    17,
     276,     0,   472,     0,    18,    19,     0,    20,    21,    22,
      23,     0,   476,    24,     0,     0,     0,    25,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,    31,    32,    33,    34,    35,     1,
       2,     3,     0,     4,     0,     0,     5,     0,     0,     6,
       0,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,    10,     0,    11,    12,    13,
       0,     0,     0,    14,    15,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,    19,     0,    20,    91,   141,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,    31,    32,    33,    34,    35,     1,
       2,     3,     0,     4,     0,     0,     5,     0,     0,     6,
       0,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,    10,     0,    11,    12,    13,
       0,     0,     0,    14,    15,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,    19,     0,    20,    91,     0,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,    31,    32,    33,    34,    35,     1,
       0,     3,     0,     4,     0,     0,     0,     0,     0,     6,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,    10,     0,     0,    12,    13,
       0,     0,     0,     0,    15,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,    19,     0,    20,    91,   249,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     1,
      27,     3,     0,     4,     0,     0,     0,     0,     0,     6,
      28,    29,     8,     0,     0,     0,    33,    34,    35,     0,
       0,     0,     9,     0,     0,    10,     0,     0,    12,    13,
       0,     0,     0,     0,    15,     0,     0,     0,    16,    17,
       0,     0,     3,     0,    18,    19,     0,    20,    91,     0,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     0,
      27,     3,     0,     9,     0,     0,     0,     0,     0,     0,
      28,    29,     0,   281,     0,     0,    33,    34,    35,    16,
      17,     0,     9,     0,     0,    18,    19,     0,    20,    91,
       0,    23,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,   129,     0,    18,    19,     3,    20,    91,     0,
      23,    28,    29,     0,     0,     0,     0,     0,    34,    35,
       3,   273,     0,     0,     0,     0,     0,     9,     0,     0,
      28,    29,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     9,     0,    16,    17,     0,     0,     0,     0,    18,
      19,     0,    20,    91,     0,    23,     3,    16,    17,     0,
       0,     0,     0,    18,    19,     0,    20,    91,     0,    23,
       3,     0,     0,     0,     0,    28,    29,     9,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,     0,    28,
      29,     9,     0,   422,    17,     0,    34,    35,     0,    18,
      19,     0,    20,    91,     0,    23,     0,     0,    17,     0,
       0,     0,     0,    18,    19,     0,    20,    91,     0,    23,
     157,     0,     0,     0,     0,    28,    29,     0,     0,   158,
     159,   160,    34,    35,   161,     0,   162,     0,     0,    28,
      29,   163,   164,     0,     0,     0,    34,    35,     0,   165,
     166
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,   153,    11,   117,    82,   112,   120,    23,
     209,   299,    18,    14,   349,     2,    17,    18,    19,   383,
       8,   220,    10,    11,    25,    26,   349,    24,    22,   117,
      31,    32,   120,    15,    15,    15,    15,   125,    30,     0,
      39,    52,    52,   131,     6,    56,    56,     3,    56,    21,
      21,    10,    27,   252,    27,     0,     6,    13,    33,    21,
      56,    71,    48,    55,    21,    76,    16,    23,    62,    25,
      52,    52,    52,    52,    56,    31,    56,    56,    39,    76,
      74,    52,    76,    69,    43,    42,    57,    60,    21,    71,
     454,    21,     9,    49,   458,    35,   460,    41,    54,    16,
      52,    41,    56,    56,    56,   181,   441,    63,    64,    42,
     111,     9,    16,     0,    70,   479,    60,   104,   441,    75,
      60,    77,    52,    53,    16,    81,    24,    16,   129,    10,
      78,    35,    30,    35,   422,    16,    15,    16,   337,    41,
      14,    35,   156,    35,    15,    19,    35,    41,    46,    47,
     151,     0,    28,     8,    52,    53,    35,    55,    56,    31,
      58,     0,   361,    35,   276,    32,   365,    34,    73,    16,
      16,   259,     5,    10,    12,     4,    16,    43,    76,   167,
      78,    79,    42,   184,   185,    15,   192,    85,    86,    16,
     389,    15,    67,   392,    71,    31,   202,    16,    15,    72,
      16,     6,   203,    57,   205,    56,    58,   208,   407,   314,
     286,   323,    43,   214,    56,    24,   321,   192,    52,    16,
      16,    56,    16,    71,   212,   226,   233,   202,    56,   230,
      56,   232,   382,   383,   241,   210,    56,   436,    44,    15,
     215,   440,     9,    16,    16,   233,   247,    21,    71,    15,
     449,   450,   253,   241,    21,    16,    15,    72,    71,    71,
      31,    15,    15,    30,    16,    56,     6,   255,    16,   468,
      26,    16,   273,   274,   473,    43,    15,    27,    43,    46,
      47,    15,    57,    27,    21,    52,    53,    15,    55,    56,
      71,    58,    71,    56,    27,    24,    16,    18,    15,    34,
      15,    27,    16,    15,   454,    72,    15,    15,   458,    56,
     460,    78,    79,    15,   464,    16,    15,    60,    85,    86,
       9,    32,    15,    15,    42,   326,    16,   205,    16,   479,
     331,   330,    39,   377,   148,    41,   321,   202,     9,   489,
     341,    30,   288,   103,   345,   329,   103,   348,   349,   304,
     369,   352,   221,   354,   305,   474,   439,    46,    47,    30,
     336,   386,   363,    52,    53,   253,    55,    56,   154,    58,
     371,   169,   173,   168,   176,    28,    47,   378,   170,   187,
     354,    52,    53,   352,    55,    56,    42,   386,   348,    78,
      79,   480,   477,   125,   301,    84,    85,    86,   419,     7,
       8,     9,   476,    11,   481,   373,    14,    78,    79,    17,
     403,    19,    20,   441,    85,    86,   414,   384,    -1,    -1,
      -1,    -1,    30,    -1,   256,    33,   427,    35,    36,    37,
      -1,    -1,   433,    41,    42,    -1,    -1,    -1,    46,    47,
     441,    -1,   443,    -1,    52,    53,    -1,    55,    56,    57,
      58,    -1,   453,    61,    -1,    -1,    -1,    65,    66,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    65,    66,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    65,    66,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,     7,
      -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    65,    66,     7,
      68,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,
      78,    79,    20,    -1,    -1,    -1,    84,    85,    86,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    -1,     9,    -1,    52,    53,    -1,    55,    56,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    65,    66,    -1,
      68,     9,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    -1,    21,    -1,    -1,    84,    85,    86,    46,
      47,    -1,    30,    -1,    -1,    52,    53,    -1,    55,    56,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    69,    -1,    52,    53,     9,    55,    56,    -1,
      58,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,
       9,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    30,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    -1,    55,    56,    -1,    58,     9,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    -1,    55,    56,    -1,    58,
       9,    -1,    -1,    -1,    -1,    78,    79,    30,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    78,
      79,    30,    -1,    46,    47,    -1,    85,    86,    -1,    52,
      53,    -1,    55,    56,    -1,    58,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    -1,    55,    56,    -1,    58,
      29,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    38,
      39,    40,    85,    86,    43,    -1,    45,    -1,    -1,    78,
      79,    50,    51,    -1,    -1,    -1,    85,    86,    -1,    58,
      59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    11,    14,    17,    19,    20,    30,
      33,    35,    36,    37,    41,    42,    46,    47,    52,    53,
      55,    56,    57,    58,    61,    65,    66,    68,    78,    79,
      80,    82,    83,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    95,    96,    97,   107,   108,   109,   110,   114,
     117,   118,   119,   120,   121,   122,   123,   124,   127,   128,
     129,   138,   139,   140,   141,   142,   144,   145,   146,   150,
     161,   163,   164,   165,   166,   168,   169,   170,   171,   173,
     175,   177,   178,   179,   181,   186,   189,   197,   201,   213,
     214,    56,   161,    56,   137,   161,   212,    56,    56,   168,
     196,   168,   196,    21,   130,   131,    56,   161,   134,   136,
     137,    15,    52,    56,   100,   102,   105,   161,   185,   198,
     161,   182,   183,   188,   214,   161,   184,   187,   165,    69,
     115,   161,   161,   197,   186,    15,   161,   152,   161,   197,
       0,    57,    92,   107,    28,    95,    97,   201,    73,   227,
      16,    16,   218,    41,    60,   162,     5,    29,    38,    39,
      40,    43,    45,    50,    51,    58,    59,   167,    10,    12,
       4,    48,    69,   172,    30,    55,   174,    22,    62,    74,
      76,   176,   177,    21,    52,    53,   180,   190,     3,    13,
      23,    25,    31,    49,    54,    63,    64,    70,    75,    77,
      81,   112,   113,    16,    21,    52,    57,     9,    16,    15,
      52,    98,    16,   216,    43,    43,   130,   131,   137,    42,
      15,    16,     6,   161,   105,   106,    15,    24,    76,   104,
      31,   101,    15,    35,   200,   210,   218,    67,   210,   218,
      71,    35,   207,   218,    72,   161,   218,    16,   126,    57,
     108,   156,    15,    16,   151,     6,   109,    57,    56,   161,
     163,   164,   165,    58,    43,   168,   169,   170,   171,   173,
     175,   177,    56,    24,    76,    94,   161,   203,   204,   224,
     225,    21,   161,   191,   192,   193,    24,   180,   111,   197,
     214,   111,   161,    56,    94,   161,   156,   197,   202,    52,
      99,   168,   161,   197,    42,    52,    56,    76,   132,   133,
     135,   156,   134,    56,    16,   215,    71,   161,    56,    56,
     161,    16,   217,   161,   196,   196,    16,   116,   222,   161,
      44,    32,    34,   147,   153,   156,   152,    15,   168,   227,
     218,    27,   161,   161,    71,    31,   205,   210,    16,    16,
      21,    72,    16,   220,    15,   177,   112,    71,    71,    71,
     100,    15,   216,    16,   125,    15,   132,   135,     6,    16,
     221,    26,   143,   105,    16,   103,   102,   105,    16,   199,
     210,   219,    43,    43,   161,   125,   107,   157,   161,    15,
      27,   148,    15,    27,   151,   156,   161,   161,   203,   204,
     224,   226,    21,   192,   161,   193,    57,    15,    71,   156,
     161,   156,    71,    56,   133,   161,    27,   215,    24,   101,
     161,   163,    46,   158,   159,   160,   163,    16,   222,   157,
      18,     6,    16,   154,   155,   156,    15,    34,   149,   156,
      15,    16,   220,    15,   194,   195,   156,    27,   221,    15,
      15,    56,   217,    15,    41,   209,   210,   211,    15,   100,
      41,   206,   207,   208,    16,   223,   161,   156,    15,   147,
     156,   226,   161,    15,   156,   156,   161,   159,   159,    15,
     159,   159,   156,   156,   143,   219,   209,   159,   206,    16,
     223
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      98,    97,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   107,   107,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   118,   119,   119,   119,   119,   119,
     120,   121,   122,   122,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   181,   181,
     181,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   192,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   211,   212,   212,   213,   214,
     214,   215,   215,   215,   216,   216,   216,   217,   217,   217,
     218,   218,   218,   219,   219,   219,   220,   220,   220,   221,
     221,   221,   222,   222,   222,   223,   223,   223,   224,   225,
     226,   226,   226,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     0,     6,     3,     1,     0,     2,     1,     2,     2,
       0,     6,     3,     2,     2,     3,     2,     0,     4,     0,
       3,     0,     3,     2,     1,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     2,
       0,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     1,     2,     0,     3,
       0,     1,     1,     2,     5,     4,     2,     0,     2,     1,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     3,     3,     2,     5,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     5,     5,     0,
       7,     4,     9,     6,     6,     6,     4,     3,     3,     0,
       3,     0,     5,     3,     0,     3,     1,     3,     1,     1,
       1,     2,     0,     1,     4,     2,     1,     2,     1,     1,
       1,     4,     3,     2,     1,     4,     0,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     4,     2,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     2,     1,     2,     2,     2,     2,     4,     3,     3,
       3,     2,     2,     3,     1,     4,     1,     0,     1,     0,
       2,     1,     2,     2,     4,     2,     1,     1,     1,     1,
       7,     4,     1,     0,     3,     2,     1,     3,     1,     1,
       2,     3,     1,     0,     1,     1,     5,     4,     3,     2,
       1,     1,     5,     4,     3,     2,     3,     1,     1,     2,
       1,     3,     1,     0,     3,     1,     0,     4,     1,     0,
       3,     1,     0,     5,     1,     0,     3,     1,     0,     3,
       1,     0,     3,     3,     2,     3,     3,     2,     2,     2,
       3,     1,     1,     3,     0
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
        case 2:
#line 73 "parse.y" /* yacc.c:1646  */
    { }
#line 1824 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 75 "parse.y" /* yacc.c:1646  */
    {}
#line 1830 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "parse.y" /* yacc.c:1646  */
    {

	   if((yyvsp[0].ast)->getNodetype().compare("var") == 0) {
	
	   }
	   else{
	     // std::cout << " single_input " << $1->myeval() <<  std::endl; $$ = $1; 
	      
	   }
	}
#line 1845 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "parse.y" /* yacc.c:1646  */
    { 

	    if((yyvsp[0].ast)->getNodetype().compare("funcdef") == 0 ){
	    }
	    else{
	    	(yyvsp[0].ast)->myeval();
	    }	
	    	 
		   
	   // }
	   // else{
		//std::cout << $1->myeval() <<  std::endl;
		

	   // tableManager& tabmgr = tableManager::getInstance(); 
	    //int scope = tabmgr.getScope();
	    // tabmgr.pushScope(0);
	  // }
	    }
#line 1869 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "parse.y" /* yacc.c:1646  */
    { (yyval.ast)=(yyvsp[-1].ast); }
#line 1875 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 124 "parse.y" /* yacc.c:1646  */
    {}
#line 1881 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 127 "parse.y" /* yacc.c:1646  */
    {}
#line 1887 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 128 "parse.y" /* yacc.c:1646  */
    {}
#line 1893 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1899 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 132 "parse.y" /* yacc.c:1646  */
    {}
#line 1905 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "parse.y" /* yacc.c:1646  */
    {
		 tableManager& tabmgr = tableManager::getInstance(); 
         int scope = tabmgr.getScope();
         tabmgr.pushScope(++scope); }
#line 1914 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 146 "parse.y" /* yacc.c:1646  */
    {
			std::string funcname((yyvsp[-4].mystring));
	    	funcname.append("()");

	    	(yyval.ast) = new AstFunc("funcdef", funcname, (yyvsp[0].myvec));

	    	tableManager& tabmgr = tableManager::getInstance();
	    	int scope = tabmgr.getScope();
	    	tabmgr.pushScope(--scope);
	    	tabmgr.setVal(funcname, (yyval.ast));

	    	//std::cout << "astfunc funcdef " << std::endl;
	}
#line 1932 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 161 "parse.y" /* yacc.c:1646  */
    { }
#line 1938 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 162 "parse.y" /* yacc.c:1646  */
    { }
#line 1944 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 165 "parse.y" /* yacc.c:1646  */
    { std::cout << "varargslist" << std::endl; }
#line 1950 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 166 "parse.y" /* yacc.c:1646  */
    { std::cout << "varargslist " << std::endl; }
#line 1956 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 169 "parse.y" /* yacc.c:1646  */
    {}
#line 1962 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 170 "parse.y" /* yacc.c:1646  */
    {}
#line 1968 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 185 "parse.y" /* yacc.c:1646  */
    { std::cout << "fpdef" << std::endl; }
#line 1974 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 186 "parse.y" /* yacc.c:1646  */
    { std::cout << "fpdef" << std::endl; }
#line 1980 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 189 "parse.y" /* yacc.c:1646  */
    { std::cout << "fplist" << std::endl; }
#line 1986 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 192 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 1992 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 193 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 1998 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 196 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[-2].ast); }
#line 2004 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 199 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 2010 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 200 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 2016 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 206 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); std::cout << "small_stmt exec"  << std::endl; }
#line 2022 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 210 "parse.y" /* yacc.c:1646  */
    { 
       (yyvsp[-1].ast)->setNodes((yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast) = (yyvsp[-1].ast); }
#line 2029 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 212 "parse.y" /* yacc.c:1646  */
    {  
        //std::cout << $1->getKey() << $2->getNumber() << std::endl;
	    if((yyvsp[-1].ast)->getNodetype().compare("var") == 0){
		   std::string tempKey((yyvsp[-1].ast)->getKey()); 
		   (yyvsp[-1].ast)->setVal((yyvsp[0].ast)->getNumber());

		   tableManager& tabmgr = tableManager::getInstance();
		   tabmgr.setVal(tempKey, (yyvsp[-1].ast));
		   
	     }
	  
	  

	(yyval.ast) = (yyvsp[-1].ast); 
	}
#line 2049 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 229 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2055 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 230 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2061 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 233 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2067 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 234 "parse.y" /* yacc.c:1646  */
    {}
#line 2073 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 237 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new AddNode("plusequal"); }
#line 2079 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 238 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new SubNode("subequal"); }
#line 2085 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 239 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new MultNode("multequal"); }
#line 2091 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 240 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new DivNode("divequal"); }
#line 2097 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 241 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ModNode("modequal"); }
#line 2103 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 242 "parse.y" /* yacc.c:1646  */
    {}
#line 2109 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 243 "parse.y" /* yacc.c:1646  */
    {}
#line 2115 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 244 "parse.y" /* yacc.c:1646  */
    {}
#line 2121 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 245 "parse.y" /* yacc.c:1646  */
    {}
#line 2127 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 246 "parse.y" /* yacc.c:1646  */
    {}
#line 2133 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 247 "parse.y" /* yacc.c:1646  */
    {}
#line 2139 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 248 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new DivDivNode("2slashequal"); }
#line 2145 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 252 "parse.y" /* yacc.c:1646  */
    { 

        (yyval.ast) = new AstPrint("print", (yyvsp[0].ast));
    }
#line 2154 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 256 "parse.y" /* yacc.c:1646  */
    {}
#line 2160 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 259 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[-1].ast); }
#line 2166 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 260 "parse.y" /* yacc.c:1646  */
    {}
#line 2172 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 267 "parse.y" /* yacc.c:1646  */
    {}
#line 2178 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 270 "parse.y" /* yacc.c:1646  */
    {}
#line 2184 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 273 "parse.y" /* yacc.c:1646  */
    {}
#line 2190 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 274 "parse.y" /* yacc.c:1646  */
    {}
#line 2196 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 275 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2202 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 276 "parse.y" /* yacc.c:1646  */
    {}
#line 2208 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 277 "parse.y" /* yacc.c:1646  */
    {}
#line 2214 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 286 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new AstReturn("return", (yyvsp[0].ast)); }
#line 2220 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 287 "parse.y" /* yacc.c:1646  */
    {}
#line 2226 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 293 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2232 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 294 "parse.y" /* yacc.c:1646  */
    {}
#line 2238 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 297 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 2244 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 298 "parse.y" /* yacc.c:1646  */
    {}
#line 2250 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 301 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[-1].ast); }
#line 2256 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 302 "parse.y" /* yacc.c:1646  */
    {}
#line 2262 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 305 "parse.y" /* yacc.c:1646  */
    {}
#line 2268 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 306 "parse.y" /* yacc.c:1646  */
    {}
#line 2274 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 329 "parse.y" /* yacc.c:1646  */
    { std::cout << "import_as_name" << std::endl; }
#line 2280 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 330 "parse.y" /* yacc.c:1646  */
    { std::cout << "import_as_name" << std::endl; }
#line 2286 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 344 "parse.y" /* yacc.c:1646  */
    { std::cout << "dotted_name" << std::endl; }
#line 2292 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 349 "parse.y" /* yacc.c:1646  */
    { 
		std::string var((yyvsp[0].mystring)); 
		tableManager& tabmgr = tableManager::getInstance();
		tabmgr.setGlobal(var);}
#line 2301 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 355 "parse.y" /* yacc.c:1646  */
    {std::cout << "exec_stmt" << std::endl;}
#line 2307 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 356 "parse.y" /* yacc.c:1646  */
    { std::cout << "exec_stmt" << std::endl;}
#line 2313 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 359 "parse.y" /* yacc.c:1646  */
    {std::cout << "assert_stmt" << std::endl;}
#line 2319 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 360 "parse.y" /* yacc.c:1646  */
    {std::cout << "assert_stmt" << std::endl;}
#line 2325 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 368 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 2331 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 373 "parse.y" /* yacc.c:1646  */
    { std::cout << "if_stmt" << std::endl; }
#line 2337 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 374 "parse.y" /* yacc.c:1646  */
    { std::cout << "if_stmt" << std::endl; }
#line 2343 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 377 "parse.y" /* yacc.c:1646  */
    { std::cout << "star_ELIF" << std::endl;}
#line 2349 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 378 "parse.y" /* yacc.c:1646  */
    { std::cout << "star_Elif" << std::endl;}
#line 2355 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 381 "parse.y" /* yacc.c:1646  */
    { std::cout << "while_stmt" << std::endl;}
#line 2361 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 382 "parse.y" /* yacc.c:1646  */
    { std::cout << "while_stmt" << std::endl;}
#line 2367 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 385 "parse.y" /* yacc.c:1646  */
    { std::cout << "for_stmt" << std::endl;}
#line 2373 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 386 "parse.y" /* yacc.c:1646  */
    { std::cout << "for_stmt" << std::endl;}
#line 2379 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 389 "parse.y" /* yacc.c:1646  */
    {}
#line 2385 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 390 "parse.y" /* yacc.c:1646  */
    {}
#line 2391 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 393 "parse.y" /* yacc.c:1646  */
    { std::cout << "plus_except" << std::endl;}
#line 2397 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 394 "parse.y" /* yacc.c:1646  */
    { std::cout << "plus_except" << std::endl;}
#line 2403 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 397 "parse.y" /* yacc.c:1646  */
    { }
#line 2409 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 398 "parse.y" /* yacc.c:1646  */
    {}
#line 2415 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 401 "parse.y" /* yacc.c:1646  */
    {}
#line 2421 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 402 "parse.y" /* yacc.c:1646  */
    {}
#line 2427 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 405 "parse.y" /* yacc.c:1646  */
    {}
#line 2433 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 412 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast);  std::cout << "with_item" << std::endl;}
#line 2439 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 413 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);  std::cout << "with_item" << std::endl;}
#line 2445 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 416 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[-1].ast); }
#line 2451 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 417 "parse.y" /* yacc.c:1646  */
    {   }
#line 2457 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 424 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2463 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 425 "parse.y" /* yacc.c:1646  */
    {}
#line 2469 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 429 "parse.y" /* yacc.c:1646  */
    { }
#line 2475 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 430 "parse.y" /* yacc.c:1646  */
    { (yyval.myvec) = (yyvsp[-1].myvec); }
#line 2481 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 433 "parse.y" /* yacc.c:1646  */
    {  
		(yyval.myvec) = (yyvsp[0].myvec);
		(yyval.myvec)->push_back((yyvsp[-1].ast));

		//std::cout << " plus_stmt " <<std::endl;
		}
#line 2492 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 439 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.myvec) = new std::vector<Ast*>();
	    (yyval.myvec)->push_back((yyvsp[0].ast)); 

	 // std::cout <<  "plus_stmt stmt" << std::endl;
	  }
#line 2503 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 451 "parse.y" /* yacc.c:1646  */
    { }
#line 2509 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 452 "parse.y" /* yacc.c:1646  */
    {}
#line 2515 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 465 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2521 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 466 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2527 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 469 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); std::cout << "opt_IF_ELSE" << std::endl;}
#line 2533 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 470 "parse.y" /* yacc.c:1646  */
    {}
#line 2539 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 473 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2545 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 474 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 2551 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 477 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2557 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 481 "parse.y" /* yacc.c:1646  */
    {}
#line 2563 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 482 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2569 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 485 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2575 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 503 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2581 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 507 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2587 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 511 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2593 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 515 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2599 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 523 "parse.y" /* yacc.c:1646  */
    {			
	      (yyvsp[-1].ast)->setNodes((yyvsp[-2].ast), (yyvsp[0].ast));
	      (yyval.ast) = (yyvsp[-1].ast);
	    }
#line 2608 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 527 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2614 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 530 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new AddNode("addition"); }
#line 2620 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 531 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new SubNode("subtraction"); }
#line 2626 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 534 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2632 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 535 "parse.y" /* yacc.c:1646  */
    { 
	 (yyvsp[-1].ast)->setNodes((yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast) = (yyvsp[-1].ast); }
#line 2639 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 539 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new MultNode("multiply"); }
#line 2645 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 540 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new DivNode("divide");  }
#line 2651 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 541 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ModNode("modulus");}
#line 2657 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 542 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new DivDivNode("Floordivide"); }
#line 2663 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 545 "parse.y" /* yacc.c:1646  */
    { (yyvsp[-1].ast)->setNodes(NULL, (yyvsp[0].ast)); (yyval.ast) = (yyvsp[-1].ast); }
#line 2669 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 546 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2675 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 549 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new UPosNode("integer"); }
#line 2681 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 550 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new UMinNode("integer"); }
#line 2687 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 551 "parse.y" /* yacc.c:1646  */
    {}
#line 2693 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 554 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ExpoNode("expo"); (yyval.ast)->setNodes((yyvsp[-3].ast), (yyvsp[0].ast));   }
#line 2699 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 555 "parse.y" /* yacc.c:1646  */
    { 
	  //std::cout << " power " << std::endl;
	  if((yyvsp[0].ast)->getNodetype().compare("paren") == 0){
		  		std::string var = (yyvsp[-1].ast)->getKey();
		 		var.append("()");
		 		(yyval.ast) = new AstCall("fcall", var); 
	  }
	  else{
	     (yyval.ast) = (yyvsp[-1].ast);
	  }
    
    }
#line 2716 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 569 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2722 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 570 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new voidNode("void"); }
#line 2728 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 573 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ParenNode("paren"); (yyval.ast)->setNodes((yyvsp[-1].ast), NULL);  }
#line 2734 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 574 "parse.y" /* yacc.c:1646  */
    {}
#line 2740 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 575 "parse.y" /* yacc.c:1646  */
    {}
#line 2746 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 576 "parse.y" /* yacc.c:1646  */
    {}
#line 2752 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 577 "parse.y" /* yacc.c:1646  */
    { 
	   

	    std::string var((yyvsp[0].mystring)); 
	    (yyval.ast) = new AstVar("var");
	    (yyval.ast)->setKey(var);
	   // std::cout << " NAME " << var << std::endl;
	}
#line 2765 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 585 "parse.y" /* yacc.c:1646  */
    { std::string s((yyvsp[0].mystring)); (yyval.ast) = new AstNumber("integer", s); }
#line 2771 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 586 "parse.y" /* yacc.c:1646  */
    { std::string s((yyvsp[0].mystring)); (yyval.ast) = new AstNumber("float", s); }
#line 2777 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 591 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2783 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 592 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2789 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 595 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2795 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 596 "parse.y" /* yacc.c:1646  */
    {}
#line 2801 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 600 "parse.y" /* yacc.c:1646  */
    {}
#line 2807 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 604 "parse.y" /* yacc.c:1646  */
    {}
#line 2813 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 607 "parse.y" /* yacc.c:1646  */
    {}
#line 2819 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 608 "parse.y" /* yacc.c:1646  */
    {}
#line 2825 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 611 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2831 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 612 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2837 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 615 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2843 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 616 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2849 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 619 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 2855 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 620 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 2861 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 623 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ParenNode("paren"); }
#line 2867 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 624 "parse.y" /* yacc.c:1646  */
    {}
#line 2873 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 628 "parse.y" /* yacc.c:1646  */
    {}
#line 2879 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 632 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2885 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 633 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 2891 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 636 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2897 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 637 "parse.y" /* yacc.c:1646  */
    {}
#line 2903 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 644 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2909 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 645 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2915 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 648 "parse.y" /* yacc.c:1646  */
    {std::cout << " exprlist " << std::endl; }
#line 2921 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 652 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);  }
#line 2927 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 655 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 2933 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 656 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2939 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 671 "parse.y" /* yacc.c:1646  */
    {}
#line 2945 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 672 "parse.y" /* yacc.c:1646  */
    {}
#line 2951 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 677 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2957 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 679 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2963 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 680 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2969 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 683 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2975 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 684 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 2981 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 688 "parse.y" /* yacc.c:1646  */
    {}
#line 2987 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 716 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); std::cout << "testlist1 "  << std::endl; }
#line 2993 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 717 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); std::cout << "testlist1 "  << std::endl;  }
#line 2999 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 720 "parse.y" /* yacc.c:1646  */
    { }
#line 3005 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 724 "parse.y" /* yacc.c:1646  */
    { }
#line 3011 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 738 "parse.y" /* yacc.c:1646  */
    {}
#line 3017 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 739 "parse.y" /* yacc.c:1646  */
    {}
#line 3023 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 743 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 3029 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 744 "parse.y" /* yacc.c:1646  */
    {}
#line 3035 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 745 "parse.y" /* yacc.c:1646  */
    {}
#line 3041 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 748 "parse.y" /* yacc.c:1646  */
    {}
#line 3047 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 749 "parse.y" /* yacc.c:1646  */
    {}
#line 3053 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 750 "parse.y" /* yacc.c:1646  */
    {}
#line 3059 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 764 "parse.y" /* yacc.c:1646  */
    {}
#line 3065 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 765 "parse.y" /* yacc.c:1646  */
    {}
#line 3071 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 766 "parse.y" /* yacc.c:1646  */
    {}
#line 3077 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 774 "parse.y" /* yacc.c:1646  */
    {}
#line 3083 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 777 "parse.y" /* yacc.c:1646  */
    {std::cout << "with_item" << std::endl;}
#line 3089 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 785 "parse.y" /* yacc.c:1646  */
    {}
#line 3095 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 786 "parse.y" /* yacc.c:1646  */
    {}
#line 3101 "parse.tab.cpp" /* yacc.c:1646  */
    break;


#line 3105 "parse.tab.cpp" /* yacc.c:1646  */
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
#line 789 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

