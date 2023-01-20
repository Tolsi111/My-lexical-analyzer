/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VAR = 258,
     CONST = 259,
     BEGINN = 260,
     GATA = 261,
     START = 262,
     END = 263,
     ELSE = 264,
     IF = 265,
     WHILE = 266,
     PRINT = 267,
     READ = 268,
     PROGRAM = 269,
     ID = 270,
     CONST_INT = 271,
     CONST_REAL = 272,
     CONST_CAR = 273,
     CONST_SIR = 274,
     SYMBOL = 275,
     INTEGER = 276,
     WORD = 277,
     ATRIB = 278,
     NE = 279,
     LE = 280,
     GE = 281,
     E = 282,
     SL = 283,
     SE = 284,
     MOD = 285,
     DIV = 286,
     OR = 287,
     AND = 288,
     NOT = 289
   };
#endif
/* Tokens.  */
#define VAR 258
#define CONST 259
#define BEGINN 260
#define GATA 261
#define START 262
#define END 263
#define ELSE 264
#define IF 265
#define WHILE 266
#define PRINT 267
#define READ 268
#define PROGRAM 269
#define ID 270
#define CONST_INT 271
#define CONST_REAL 272
#define CONST_CAR 273
#define CONST_SIR 274
#define SYMBOL 275
#define INTEGER 276
#define WORD 277
#define ATRIB 278
#define NE 279
#define LE 280
#define GE 281
#define E 282
#define SL 283
#define SE 284
#define MOD 285
#define DIV 286
#define OR 287
#define AND 288
#define NOT 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "sspascal.y"
{
  	int l_val;
	char *p_val;
}
/* Line 1529 of yacc.c.  */
#line 122 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

