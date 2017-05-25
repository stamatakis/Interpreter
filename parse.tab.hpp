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
#line 21 "parse.y" /* yacc.c:1909  */

  Ast* ast;
  int inum;
  float fnum;
  char* mystring;
  std::vector<Ast*>* myvec;
  //enum action;

#line 150 "parse.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */
