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

#ifndef YY_YY_VGRAMMAR_H_INCLUDED
# define YY_YY_VGRAMMAR_H_INCLUDED
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
    ALSHIFT = 258,
    ALWAYS = 259,
    ARSHIFT = 260,
    ASGN = 261,
    ASSIGN = 262,
    AT = 263,
    AUTOMATIC = 264,
    BAND = 265,
    BBEGIN = 266,
    BNAND = 267,
    BNOR = 268,
    BNXOR = 269,
    BOR = 270,
    BXOR = 271,
    CASE = 272,
    CASEX = 273,
    CASEZ = 274,
    COLON = 275,
    COMMA = 276,
    DEASSIGN = 277,
    DEFAULT = 278,
    DOT = 279,
    DPATH = 280,
    ELSE = 281,
    END = 282,
    ENDCASE = 283,
    ENDFUNCTION = 284,
    ENDMODULE = 285,
    ENDPRIMITIVE = 286,
    ENDSPECIFY = 287,
    ENDTASK = 288,
    EQ = 289,
    EQZ = 290,
    EVENT = 291,
    FOR = 292,
    FOREVER = 293,
    FORK = 294,
    FUNCTION = 295,
    GT = 296,
    HASH = 297,
    HIGHZ0 = 298,
    HIGHZ1 = 299,
    IF = 300,
    INITIALB = 301,
    INOUT = 302,
    INPUT = 303,
    INTEGER = 304,
    JOIN = 305,
    LARGE = 306,
    LBRACE = 307,
    LBRACK = 308,
    LPAREN = 309,
    LSHIFT = 310,
    LT = 311,
    MOD = 312,
    MEDIUM = 313,
    MODULE = 314,
    MPATH = 315,
    NEGEDGE = 316,
    NEZ = 317,
    NOT = 318,
    OUTPUT = 319,
    PARAMETER = 320,
    PRIMITIVE = 321,
    QUEST = 322,
    REG = 323,
    REPEAT = 324,
    SCALAR = 325,
    SIGNED = 326,
    SMALL = 327,
    STRONG0 = 328,
    STRONG1 = 329,
    SUPPLY0 = 330,
    SUPPLY1 = 331,
    TASK = 332,
    TRI = 333,
    TRI0 = 334,
    TRI1 = 335,
    TRIAND = 336,
    TRIOR = 337,
    TRIREG = 338,
    WAIT = 339,
    WHILE = 340,
    WIRE = 341,
    POSEDGE = 342,
    TRIGGER = 343,
    RPAREN = 344,
    RBRACE = 345,
    RBRACK = 346,
    SEMI = 347,
    REPCAT = 348,
    UINV = 349,
    RSHIFTEQ = 350,
    SPECIFY = 351,
    SPECPARAM = 352,
    WAND = 353,
    WOR = 354,
    VECTORED = 355,
    REAL = 356,
    TIME = 357,
    PULLUP = 358,
    PULLDOWN = 359,
    PULL0 = 360,
    PULL1 = 361,
    WEAK0 = 362,
    WEAK1 = 363,
    CMOS = 364,
    RCMOS = 365,
    BUFIF0 = 366,
    BUFIF1 = 367,
    NOTIF0 = 368,
    NOTIF1 = 369,
    NMOS = 370,
    PMOS = 371,
    RNMOS = 372,
    RPMOS = 373,
    PRIMAND = 374,
    PRIMNAND = 375,
    PRIMNOR = 376,
    PRIMXOR = 377,
    PRIMXNOR = 378,
    BUF = 379,
    PRIMNOT = 380,
    TRANIF0 = 381,
    TRANIF1 = 382,
    RTRANIF0 = 383,
    RTRANIF1 = 384,
    RTRAN = 385,
    KWOR = 386,
    TRAN = 387,
    COND = 388,
    BREAKPT = 389,
    SCRIPT = 390,
    BEGINSCRIPT = 391,
    ENDSCRIPT = 392,
    BOGUS = 393,
    BOGOCHAR = 394,
    INSTANCE = 395,
    MEMORY = 396,
    NUMBER = 397,
    HEX = 398,
    SYSLITERAL = 399,
    LITERAL = 400,
    HLITERAL = 401,
    STRING = 402,
    HDLLINE = 403,
    REALNUM = 404,
    OR = 405,
    AND = 406,
    NE = 407,
    GE = 408,
    LE = 409,
    RSHIFT = 410,
    ADD = 411,
    SUB = 412,
    MUL = 413,
    DIV = 414,
    POW = 415,
    UNEG = 416,
    UPLUS = 417
  };
#endif
/* Tokens.  */
#define ALSHIFT 258
#define ALWAYS 259
#define ARSHIFT 260
#define ASGN 261
#define ASSIGN 262
#define AT 263
#define AUTOMATIC 264
#define BAND 265
#define BBEGIN 266
#define BNAND 267
#define BNOR 268
#define BNXOR 269
#define BOR 270
#define BXOR 271
#define CASE 272
#define CASEX 273
#define CASEZ 274
#define COLON 275
#define COMMA 276
#define DEASSIGN 277
#define DEFAULT 278
#define DOT 279
#define DPATH 280
#define ELSE 281
#define END 282
#define ENDCASE 283
#define ENDFUNCTION 284
#define ENDMODULE 285
#define ENDPRIMITIVE 286
#define ENDSPECIFY 287
#define ENDTASK 288
#define EQ 289
#define EQZ 290
#define EVENT 291
#define FOR 292
#define FOREVER 293
#define FORK 294
#define FUNCTION 295
#define GT 296
#define HASH 297
#define HIGHZ0 298
#define HIGHZ1 299
#define IF 300
#define INITIALB 301
#define INOUT 302
#define INPUT 303
#define INTEGER 304
#define JOIN 305
#define LARGE 306
#define LBRACE 307
#define LBRACK 308
#define LPAREN 309
#define LSHIFT 310
#define LT 311
#define MOD 312
#define MEDIUM 313
#define MODULE 314
#define MPATH 315
#define NEGEDGE 316
#define NEZ 317
#define NOT 318
#define OUTPUT 319
#define PARAMETER 320
#define PRIMITIVE 321
#define QUEST 322
#define REG 323
#define REPEAT 324
#define SCALAR 325
#define SIGNED 326
#define SMALL 327
#define STRONG0 328
#define STRONG1 329
#define SUPPLY0 330
#define SUPPLY1 331
#define TASK 332
#define TRI 333
#define TRI0 334
#define TRI1 335
#define TRIAND 336
#define TRIOR 337
#define TRIREG 338
#define WAIT 339
#define WHILE 340
#define WIRE 341
#define POSEDGE 342
#define TRIGGER 343
#define RPAREN 344
#define RBRACE 345
#define RBRACK 346
#define SEMI 347
#define REPCAT 348
#define UINV 349
#define RSHIFTEQ 350
#define SPECIFY 351
#define SPECPARAM 352
#define WAND 353
#define WOR 354
#define VECTORED 355
#define REAL 356
#define TIME 357
#define PULLUP 358
#define PULLDOWN 359
#define PULL0 360
#define PULL1 361
#define WEAK0 362
#define WEAK1 363
#define CMOS 364
#define RCMOS 365
#define BUFIF0 366
#define BUFIF1 367
#define NOTIF0 368
#define NOTIF1 369
#define NMOS 370
#define PMOS 371
#define RNMOS 372
#define RPMOS 373
#define PRIMAND 374
#define PRIMNAND 375
#define PRIMNOR 376
#define PRIMXOR 377
#define PRIMXNOR 378
#define BUF 379
#define PRIMNOT 380
#define TRANIF0 381
#define TRANIF1 382
#define RTRANIF0 383
#define RTRANIF1 384
#define RTRAN 385
#define KWOR 386
#define TRAN 387
#define COND 388
#define BREAKPT 389
#define SCRIPT 390
#define BEGINSCRIPT 391
#define ENDSCRIPT 392
#define BOGUS 393
#define BOGOCHAR 394
#define INSTANCE 395
#define MEMORY 396
#define NUMBER 397
#define HEX 398
#define SYSLITERAL 399
#define LITERAL 400
#define HLITERAL 401
#define STRING 402
#define HDLLINE 403
#define REALNUM 404
#define OR 405
#define AND 406
#define NE 407
#define GE 408
#define LE 409
#define RSHIFT 410
#define ADD 411
#define SUB 412
#define MUL 413
#define DIV 414
#define POW 415
#define UNEG 416
#define UPLUS 417

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VGRAMMAR_H_INCLUDED  */
