/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTACTIC_TAB_H_INCLUDED
# define YY_YY_SYNTACTIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IVR = 258,                     /* IVR  */
    STR = 259,                     /* STR  */
    IFU = 260,                     /* IFU  */
    INT = 261,                     /* INT  */
    FLO = 262,                     /* FLO  */
    PYC = 263,                     /* PYC  */
    VAR = 264,                     /* VAR  */
    IGU = 265,                     /* IGU  */
    MAS = 266,                     /* MAS  */
    MUL = 267,                     /* MUL  */
    RES = 268,                     /* RES  */
    DIV = 269,                     /* DIV  */
    MEN = 270,                     /* MEN  */
    MEI = 271,                     /* MEI  */
    MAY = 272,                     /* MAY  */
    MAI = 273,                     /* MAI  */
    EQU = 274,                     /* EQU  */
    DIF = 275,                     /* DIF  */
    SII = 276,                     /* SII  */
    PIZ = 277,                     /* PIZ  */
    PDE = 278,                     /* PDE  */
    FIN = 279,                     /* FIN  */
    NOO = 280,                     /* NOO  */
    HAS = 281,                     /* HAS  */
    FUN = 282,                     /* FUN  */
    PAR = 283,                     /* PAR  */
    RTN = 284,                     /* RTN  */
    ITR = 285,                     /* ITR  */
    FUE = 286,                     /* FUE  */
    ATP = 287,                     /* ATP  */
    ARG = 288,                     /* ARG  */
    PRINT = 289                    /* PRINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "syntactic.y"

    int ival;
    float fval;
    char *sval;

#line 104 "syntactic.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTACTIC_TAB_H_INCLUDED  */
