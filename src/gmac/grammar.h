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

#ifndef YY_YY_GRAMMAR_H_INCLUDED
# define YY_YY_GRAMMAR_H_INCLUDED
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
    MICROCODE = 258,
    MACROCODE = 259,
    MAP = 260,
    BANK = 261,
    FIELD = 262,
    REGISTERS = 263,
    OPERANDS = 264,
    OP = 265,
    KWBEGIN = 266,
    KWEND = 267,
    NL = 268,
    SEMI = 269,
    COLON = 270,
    COMMA = 271,
    ASGN = 272,
    HASH = 273,
    TILDE = 274,
    PERCENT = 275,
    PLUS = 276,
    AT = 277,
    BOGOCHAR = 278,
    MINUS = 279,
    LBRACE = 280,
    RBRACE = 281,
    LPAREN = 282,
    RPAREN = 283,
    LBRACK = 284,
    RBRACK = 285,
    DSHORT = 286,
    DLONG = 287,
    DBYTE = 288,
    DSYMBOL = 289,
    DBSS = 290,
    DPROC = 291,
    DEND = 292,
    NUMBER = 293,
    LITERAL = 294,
    REGISTER = 295,
    STRING = 296
  };
#endif
/* Tokens.  */
#define MICROCODE 258
#define MACROCODE 259
#define MAP 260
#define BANK 261
#define FIELD 262
#define REGISTERS 263
#define OPERANDS 264
#define OP 265
#define KWBEGIN 266
#define KWEND 267
#define NL 268
#define SEMI 269
#define COLON 270
#define COMMA 271
#define ASGN 272
#define HASH 273
#define TILDE 274
#define PERCENT 275
#define PLUS 276
#define AT 277
#define BOGOCHAR 278
#define MINUS 279
#define LBRACE 280
#define RBRACE 281
#define LPAREN 282
#define RPAREN 283
#define LBRACK 284
#define RBRACK 285
#define DSHORT 286
#define DLONG 287
#define DBYTE 288
#define DSYMBOL 289
#define DBSS 290
#define DPROC 291
#define DEND 292
#define NUMBER 293
#define LITERAL 294
#define REGISTER 295
#define STRING 296

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_H_INCLUDED  */
