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

#ifndef YY_YY_BISON_FINAL_TAB_H_INCLUDED
# define YY_YY_BISON_FINAL_TAB_H_INCLUDED
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
    gameId = 258,                  /* gameId  */
    drawId = 259,                  /* drawId  */
    drawTime = 260,                /* drawTime  */
    status = 261,                  /* status  */
    drawBreak = 262,               /* drawBreak  */
    visualDraw = 263,              /* visualDraw  */
    pricePoints = 264,             /* pricePoints  */
    amount = 265,                  /* amount  */
    wagerStatistics = 266,         /* wagerStatistics  */
    columns = 267,                 /* columns  */
    wagers = 268,                  /* wagers  */
    addOn = 269,                   /* addOn  */
    prizeCategories = 270,         /* prizeCategories  */
    winningNumbers = 271,          /* winningNumbers  */
    list = 272,                    /* list  */
    bonus = 273,                   /* bonus  */
    id = 274,                      /* id  */
    divident = 275,                /* divident  */
    winners = 276,                 /* winners  */
    distributed = 277,             /* distributed  */
    jackpot = 278,                 /* jackpot  */
    categoryType = 279,            /* categoryType  */
    fixed = 280,                   /* fixed  */
    gameType = 281,                /* gameType  */
    minimumDistributed = 282,      /* minimumDistributed  */
    last = 283,                    /* last  */
    active = 284,                  /* active  */
    totalPages = 285,              /* totalPages  */
    totalElements = 286,           /* totalElements  */
    numberOfElements = 287,        /* numberOfElements  */
    size = 288,                    /* size  */
    number = 289,                  /* number  */
    content = 290,                 /* content  */
    first = 291,                   /* first  */
    sort = 292,                    /* sort  */
    direction = 293,               /* direction  */
    property = 294,                /* property  */
    ignoreCase = 295,              /* ignoreCase  */
    nullHandling = 296,            /* nullHandling  */
    descending = 297,              /* descending  */
    ascending = 298,               /* ascending  */
    POS_INTR = 299,                /* POS_INTR  */
    POS_INT28 = 300,               /* POS_INT28  */
    POS_INT = 301,                 /* POS_INT  */
    STRING = 302,                  /* STRING  */
    BOOLEAN = 303,                 /* BOOLEAN  */
    PROPERTY_STRING = 304,         /* PROPERTY_STRING  */
    GAMEID_VALUE = 305,            /* GAMEID_VALUE  */
    WIN_POS_INT = 306              /* WIN_POS_INT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_BISON_FINAL_TAB_H_INCLUDED  */
