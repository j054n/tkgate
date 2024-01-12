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
#line 70 "vgrammar.y" /* yacc.c:339  */

#include <unistd.h>
#include <stdio.h>
#include "config.h"
#include "yybasic.h"
#include "vgrammar.h"
#include "vparser.h"
#include "ycmalloc.h"
#include "misc.h"

extern int yy_is_editor;

static char *tech_name = "default";

void BeginPV();		/* Pure verilog */
void BeginVR();		/* tkgate verilog */
void BeginAC();
void BeginLC();
void BeginBC();
void BeginDD();
void BeginDDP();
void BeginVN();
void BeginHDL();


#line 92 "vgrammar.c" /* yacc.c:339  */

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
    NETLISTBEGIN = 258,
    HDLBEGIN = 259,
    BUILTINBEGIN = 260,
    SYMBOLBEGIN = 261,
    XMODULE = 262,
    NETMODULE = 263,
    HDLMODULE = 264,
    BUILTINMODULE = 265,
    ASSIGN = 266,
    ENDMODULE = 267,
    PRIMITIVE = 268,
    TECHNOLOGY = 269,
    DELAY = 270,
    AREA = 271,
    POWER = 272,
    IF = 273,
    ELSE = 274,
    SWITCH = 275,
    CASE = 276,
    CASEX = 277,
    CASEZ = 278,
    RETURN = 279,
    BREAK = 280,
    NEXT = 281,
    FUNC = 282,
    DEFAULT = 283,
    INITIALB = 284,
    INPUT = 285,
    REG = 286,
    OUTPUT = 287,
    INOUT = 288,
    WIRE = 289,
    KWVERSION = 290,
    SUPPLY0 = 291,
    SUPPLY1 = 292,
    KWTRI = 293,
    TRI0 = 294,
    TRI1 = 295,
    TRIREG = 296,
    TRIAND = 297,
    TRIOR = 298,
    WAND = 299,
    WOR = 300,
    DEASSIGN = 301,
    BBEGIN = 302,
    END = 303,
    ENDCASE = 304,
    ALWAYS = 305,
    POSEDGE = 306,
    NEGEDGE = 307,
    INTEGER = 308,
    ENDPRIMITIVE = 309,
    SEMI = 310,
    COLON = 311,
    COMMA = 312,
    DOT = 313,
    ASGN = 314,
    NBASGN = 315,
    LPAREN = 316,
    RPAREN = 317,
    LBRACE = 318,
    RBRACE = 319,
    LBRACK = 320,
    RBRACK = 321,
    AT = 322,
    ANOTATE = 323,
    ENDANOTATE = 324,
    ROT = 325,
    WPLACE = 326,
    SHOWNAME = 327,
    ENDDECLS = 328,
    NOT = 329,
    PORTS = 330,
    PORTDEF = 331,
    BDPORTS = 332,
    SIZE = 333,
    JOINT = 334,
    COMMENT = 335,
    FRAME = 336,
    SLASH = 337,
    BDESC = 338,
    ROOTMODULE = 339,
    TRAN = 340,
    COMLINE = 341,
    COMEND = 342,
    SCRIPT = 343,
    BEGINSCRIPT = 344,
    ENDSCRIPT = 345,
    REQUIRE = 346,
    PROPERTY = 347,
    DECPOS = 348,
    ICONDATA = 349,
    DATA = 350,
    ICONEND = 351,
    SYMBOLREF = 352,
    TEXTBEGIN = 353,
    HASHMARK = 354,
    GT = 355,
    LT = 356,
    EQ = 357,
    BAND = 358,
    BNAND = 359,
    BOR = 360,
    BNOR = 361,
    BXOR = 362,
    BNXOR = 363,
    UINV = 364,
    MOD = 365,
    LSHIFT = 366,
    RSHIFTEQ = 367,
    QUEST = 368,
    ARSHIFT = 369,
    ALSHIFT = 370,
    BOGOCHAR = 371,
    NUMBER = 372,
    HEX = 373,
    VERNUM = 374,
    LITERAL = 375,
    STRING = 376,
    HDLLINE = 377,
    SYSLITERAL = 378,
    OR = 379,
    AND = 380,
    NE = 381,
    GE = 382,
    LE = 383,
    RSHIFT = 384,
    ADD = 385,
    SUB = 386,
    MUL = 387,
    DIV = 388,
    POW = 389,
    UNEG = 390,
    UPLUS = 391
  };
#endif
/* Tokens.  */
#define NETLISTBEGIN 258
#define HDLBEGIN 259
#define BUILTINBEGIN 260
#define SYMBOLBEGIN 261
#define XMODULE 262
#define NETMODULE 263
#define HDLMODULE 264
#define BUILTINMODULE 265
#define ASSIGN 266
#define ENDMODULE 267
#define PRIMITIVE 268
#define TECHNOLOGY 269
#define DELAY 270
#define AREA 271
#define POWER 272
#define IF 273
#define ELSE 274
#define SWITCH 275
#define CASE 276
#define CASEX 277
#define CASEZ 278
#define RETURN 279
#define BREAK 280
#define NEXT 281
#define FUNC 282
#define DEFAULT 283
#define INITIALB 284
#define INPUT 285
#define REG 286
#define OUTPUT 287
#define INOUT 288
#define WIRE 289
#define KWVERSION 290
#define SUPPLY0 291
#define SUPPLY1 292
#define KWTRI 293
#define TRI0 294
#define TRI1 295
#define TRIREG 296
#define TRIAND 297
#define TRIOR 298
#define WAND 299
#define WOR 300
#define DEASSIGN 301
#define BBEGIN 302
#define END 303
#define ENDCASE 304
#define ALWAYS 305
#define POSEDGE 306
#define NEGEDGE 307
#define INTEGER 308
#define ENDPRIMITIVE 309
#define SEMI 310
#define COLON 311
#define COMMA 312
#define DOT 313
#define ASGN 314
#define NBASGN 315
#define LPAREN 316
#define RPAREN 317
#define LBRACE 318
#define RBRACE 319
#define LBRACK 320
#define RBRACK 321
#define AT 322
#define ANOTATE 323
#define ENDANOTATE 324
#define ROT 325
#define WPLACE 326
#define SHOWNAME 327
#define ENDDECLS 328
#define NOT 329
#define PORTS 330
#define PORTDEF 331
#define BDPORTS 332
#define SIZE 333
#define JOINT 334
#define COMMENT 335
#define FRAME 336
#define SLASH 337
#define BDESC 338
#define ROOTMODULE 339
#define TRAN 340
#define COMLINE 341
#define COMEND 342
#define SCRIPT 343
#define BEGINSCRIPT 344
#define ENDSCRIPT 345
#define REQUIRE 346
#define PROPERTY 347
#define DECPOS 348
#define ICONDATA 349
#define DATA 350
#define ICONEND 351
#define SYMBOLREF 352
#define TEXTBEGIN 353
#define HASHMARK 354
#define GT 355
#define LT 356
#define EQ 357
#define BAND 358
#define BNAND 359
#define BOR 360
#define BNOR 361
#define BXOR 362
#define BNXOR 363
#define UINV 364
#define MOD 365
#define LSHIFT 366
#define RSHIFTEQ 367
#define QUEST 368
#define ARSHIFT 369
#define ALSHIFT 370
#define BOGOCHAR 371
#define NUMBER 372
#define HEX 373
#define VERNUM 374
#define LITERAL 375
#define STRING 376
#define HDLLINE 377
#define SYSLITERAL 378
#define OR 379
#define AND 380
#define NE 381
#define GE 382
#define LE 383
#define RSHIFT 384
#define ADD 385
#define SUB 386
#define MUL 387
#define DIV 388
#define POW 389
#define UNEG 390
#define UPLUS 391

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VGRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 410 "vgrammar.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   965

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  137
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  666

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   391

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   101,   102,   102,   102,   103,   104,   111,
     112,   115,   116,   122,   123,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   148,   150,   148,   151,
     151,   152,   153,   156,   156,   157,   158,   158,   161,   162,
     165,   166,   170,   171,   174,   175,   178,   178,   179,   180,
     181,   182,   183,   190,   189,   193,   194,   200,   201,   200,
     203,   206,   206,   207,   209,   210,   213,   214,   217,   218,
     222,   223,   226,   227,   228,   228,   229,   230,   231,   232,
     233,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   253,   254,   257,   258,
     259,   260,   263,   264,   274,   275,   278,   279,   282,   285,
     288,   289,   292,   293,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   309,   309,   312,   312,   312,
     315,   316,   320,   320,   323,   324,   327,   327,   327,   330,
     330,   331,   331,   335,   334,   338,   337,   342,   343,   342,
     344,   344,   345,   344,   349,   352,   353,   349,   357,   358,
     364,   365,   364,   368,   369,   372,   373,   376,   376,   376,
     379,   380,   383,   384,   387,   388,   389,   392,   393,   394,
     397,   398,   401,   402,   405,   406,   413,   414,   417,   418,
     419,   424,   425,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   441,   442,   445,   446,   449,   452,
     453,   454,   457,   458,   461,   468,   468,   473,   474,   477,
     478,   479,   480,   483,   492,   492,   493,   496,   497,   498,
     501,   501,   504,   505,   508,   509,   510,   511,   512,   513,
     519,   519,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   543,   546,   547,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   562,   563
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NETLISTBEGIN", "HDLBEGIN",
  "BUILTINBEGIN", "SYMBOLBEGIN", "XMODULE", "NETMODULE", "HDLMODULE",
  "BUILTINMODULE", "ASSIGN", "ENDMODULE", "PRIMITIVE", "TECHNOLOGY",
  "DELAY", "AREA", "POWER", "IF", "ELSE", "SWITCH", "CASE", "CASEX",
  "CASEZ", "RETURN", "BREAK", "NEXT", "FUNC", "DEFAULT", "INITIALB",
  "INPUT", "REG", "OUTPUT", "INOUT", "WIRE", "KWVERSION", "SUPPLY0",
  "SUPPLY1", "KWTRI", "TRI0", "TRI1", "TRIREG", "TRIAND", "TRIOR", "WAND",
  "WOR", "DEASSIGN", "BBEGIN", "END", "ENDCASE", "ALWAYS", "POSEDGE",
  "NEGEDGE", "INTEGER", "ENDPRIMITIVE", "SEMI", "COLON", "COMMA", "DOT",
  "ASGN", "NBASGN", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACK",
  "RBRACK", "AT", "ANOTATE", "ENDANOTATE", "ROT", "WPLACE", "SHOWNAME",
  "ENDDECLS", "NOT", "PORTS", "PORTDEF", "BDPORTS", "SIZE", "JOINT",
  "COMMENT", "FRAME", "SLASH", "BDESC", "ROOTMODULE", "TRAN", "COMLINE",
  "COMEND", "SCRIPT", "BEGINSCRIPT", "ENDSCRIPT", "REQUIRE", "PROPERTY",
  "DECPOS", "ICONDATA", "DATA", "ICONEND", "SYMBOLREF", "TEXTBEGIN",
  "HASHMARK", "GT", "LT", "EQ", "BAND", "BNAND", "BOR", "BNOR", "BXOR",
  "BNXOR", "UINV", "MOD", "LSHIFT", "RSHIFTEQ", "QUEST", "ARSHIFT",
  "ALSHIFT", "BOGOCHAR", "NUMBER", "HEX", "VERNUM", "LITERAL", "STRING",
  "HDLLINE", "SYSLITERAL", "OR", "AND", "NE", "GE", "LE", "RSHIFT", "ADD",
  "SUB", "MUL", "DIV", "POW", "UNEG", "UPLUS", "$accept", "prog", "$@1",
  "$@2", "$@3", "tunits", "tunit", "vunits", "vunit", "hdl_module", "$@4",
  "$@5", "$@6", "hdl_modhead", "$@7", "$@8", "mparms", "mparm", "hstats",
  "hprops", "hprop", "$@9", "builtin_module", "$@10", "skiplines",
  "net_module", "$@11", "$@12", "net_modhead", "$@13", "net_e_modhead",
  "omargs", "margs", "decls", "decl", "$@14", "dtype", "wnotes", "wnote",
  "wcoords", "wcoord", "wsizep", "wend", "enddecl", "bwidth", "stats",
  "stat", "comment", "$@15", "script", "$@16", "$@17", "script_lines",
  "frame", "$@18", "comlines", "joint", "$@19", "$@20", "iogate", "$@21",
  "$@22", "tapassign", "$@23", "$@24", "concat_assign", "$@25", "$@26",
  "$@27", "$@28", "$@29", "concat", "$@30", "$@31", "$@32", "concat_args",
  "tran", "$@33", "$@34", "tran_arg", "tran_range", "call", "$@35", "$@36",
  "omodparms", "modparms", "modparm", "modparmval", "ocargs", "cargs",
  "carg", "clit", "obang", "cnote", "citem", "wplist", "pplist", "bport",
  "bdir", "bdplist", "bdport", "modsymbol", "$@37", "mslines", "msline",
  "portdef", "tech_def", "$@38", "primdefs", "primdef", "$@39", "pstats",
  "pstat", "dparm", "$@40", "pexpr", "pcode", "pc_stats", "pc_stat",
  "semi", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391
};
# endif

#define YYPACT_NINF -511

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-511)))

#define YYTABLE_NINF -189

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     236,   184,  -102,   -73,  -511,  -511,    25,   156,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,    72,   191,
     -69,    83,   110,   169,   187,   141,   151,   162,   186,  -511,
     250,  -511,   638,  -511,  -511,  -511,  -511,  -511,  -511,   220,
     242,  -511,   203,   258,   273,   284,   300,    16,  -511,    -3,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,   454,  -511,   299,  -511,   245,
     245,   306,  -511,  -511,  -511,  -511,   301,  -511,  -511,  -511,
     237,  -511,  -511,   308,  -511,   310,   261,   319,   204,   265,
     269,    12,  -511,   344,   358,   354,   -31,   321,   439,  -511,
     -13,  -511,  -511,   384,   391,   392,  -511,   576,  -511,   404,
     349,   361,  -511,   419,   425,  -511,   429,   442,   440,   441,
     -20,  -511,   347,   388,  -511,  -511,  -511,  -511,  -511,  -511,
     461,   462,   401,   469,   408,   470,    85,  -511,   410,   -17,
    -511,  -511,  -511,   420,  -511,   480,  -511,  -511,   484,   421,
    -511,  -511,  -511,   498,   504,   511,   515,   520,   521,   523,
     526,   528,   254,  -511,   445,   517,   527,   488,    54,   514,
     267,  -511,   509,  -511,  -511,  -511,   561,   501,   507,   508,
     510,   -22,   563,  -511,   568,   571,   580,   196,   546,   582,
    -511,  -511,  -511,   594,   111,   -31,   595,  -511,   596,  -511,
     178,   638,   684,  -511,   438,   589,  -511,   541,   543,   598,
     545,   599,   600,   605,   572,   477,  -511,  -511,   619,   621,
     622,  -511,  -511,  -511,   575,  -511,   637,   577,  -511,  -511,
     629,   581,    -8,  -511,  -511,  -511,  -511,  -511,   639,  -511,
    -511,  -511,  -511,  -511,   586,   641,   584,   576,   111,   111,
     111,  -511,   644,   111,   585,  -511,   245,   645,  -511,   651,
    -511,   245,  -511,   657,  -511,   666,   587,   680,   617,   618,
     623,   670,   131,  -511,   683,  -511,  -511,  -511,  -511,  -511,
     624,  -511,  -511,  -511,  -511,  -511,  -511,  -511,   685,  -511,
     292,  -511,  -511,   246,  -511,   678,   688,   576,   576,   576,
      90,  -511,    96,   689,     3,   694,   387,   213,   260,  -511,
     111,  -511,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   699,  -511,   136,  -511,   707,
      14,  -511,   576,  -511,   687,   653,   636,   702,   655,   704,
    -511,   705,   658,    28,   -24,    -2,   720,   661,   662,   663,
     664,   723,   581,   668,   667,   402,   576,   416,   669,  -511,
    -511,   721,   729,  -511,   671,    90,   731,   673,   672,  -511,
    -511,   734,  -511,   172,  -511,  -511,  -511,  -511,  -511,  -511,
     271,   280,   280,   620,   597,   632,   620,   280,   280,   291,
     291,   660,   660,  -511,   740,    17,  -511,  -511,  -511,   185,
     741,  -511,  -511,   434,   491,   728,   299,  -511,   681,  -511,
    -511,   737,  -511,  -511,  -511,   207,  -511,  -511,   207,  -511,
     686,   743,   744,   742,  -511,   682,   252,    75,   745,  -511,
    -511,   747,   576,    96,  -511,   748,    99,   739,   750,   379,
       3,  -511,    90,  -511,  -511,   708,   753,   754,  -511,  -511,
    -511,  -511,   738,   -12,  -511,   746,   749,   751,  -511,   752,
     697,  -511,  -511,  -511,  -511,   700,   696,   759,   706,   709,
    -511,  -511,   767,   710,   769,  -511,   757,  -511,   -60,   576,
    -511,   576,   711,  -511,   712,   768,   379,  -511,  -511,   766,
    -511,   771,   143,   143,   785,  -511,  -511,  -511,  -511,   773,
     770,  -511,   299,  -511,   774,   775,   780,   772,   776,   777,
     576,   448,   -11,    -6,   576,   782,   779,   781,  -511,   786,
    -511,   718,   143,  -511,    35,   789,    50,   789,   778,   732,
    -511,   790,  -511,  -511,   784,   730,   798,   735,   576,  -511,
     472,  -511,  -511,   755,  -511,   792,   -60,   801,   756,  -511,
     794,  -511,   758,    88,   789,    20,  -511,  -511,  -511,  -511,
    -511,  -511,   802,   760,   761,   762,   793,   763,  -511,   797,
    -511,   764,   795,   145,   581,  -511,  -511,  -511,   803,   804,
       8,   111,   807,   810,  -511,  -511,   808,  -511,   783,   787,
     765,  -511,   788,  -511,   791,   781,   576,   796,  -511,   255,
     111,   111,   812,   799,   154,  -511,  -511,    38,   111,   809,
     800,  -511,   576,   805,   576,   806,   813,   486,   814,   817,
     307,   318,  -511,   820,  -511,  -511,   168,   816,   825,   576,
     503,  -511,   518,   815,  -511,  -511,  -511,   811,    67,    67,
    -511,  -511,   822,  -511,   532,  -511,   576,  -511,  -511,  -511,
     869,  -511,   818,  -511,   547,   827,    67,  -511,  -511,   835,
    -511,  -511,   823,   576,   564,  -511
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     4,    25,     0,     0,    13,    17,
      29,    16,    15,    70,    18,    32,    31,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,    42,     0,    63,    61,    35,    33,    36,     5,     0,
       0,    53,     0,     0,     0,     0,     0,     0,    14,     0,
      81,    86,    82,    83,    87,    84,    85,    90,    91,    92,
      95,    93,    94,    88,    89,    96,    71,   110,   112,    66,
      66,     0,     9,    57,    26,    55,     0,     2,    19,    20,
       0,    30,    43,     0,    74,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    67,     0,     0,     6,     0,    44,
       0,   215,    13,     0,     0,     0,   109,     0,    77,     0,
       0,     0,    73,     0,     0,    97,     0,     0,     0,     0,
       0,    60,     0,     0,   167,   113,   122,   123,   120,   121,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
      10,    12,    11,     0,    70,     0,    54,    56,     0,     0,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,   107,
       0,   102,     0,    72,   124,   150,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,   170,     0,
      62,    69,    34,     0,     0,     0,     0,   230,     0,   224,
       0,     0,     0,    45,     0,     0,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,   192,     0,     0,
       0,    76,   108,    99,     0,   100,     0,     0,   103,    98,
       0,     0,     0,   136,   125,   132,   127,   139,     0,   117,
     118,   115,   116,   160,     0,     0,     0,     0,     0,     0,
       0,   260,   259,     0,    40,    39,    66,     0,   227,     0,
      65,    66,   112,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   195,   204,   199,   206,   212,
       0,   200,   201,   203,   202,    78,    79,    80,     0,   106,
       0,   111,   158,     0,   147,     0,     0,     0,     0,     0,
     180,   141,   188,     0,     0,     0,     0,     0,     0,   255,
       0,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   232,     0,   227,     0,
       0,    27,     0,    49,     0,     0,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,     0,     0,   189,
     190,     0,   181,   182,     0,   180,     0,     0,     0,   177,
     178,     0,   179,     0,   172,   174,   168,   114,    41,   257,
       0,   249,   250,   253,   248,   246,   254,   251,   252,   242,
     243,   244,   245,   247,     0,     0,   229,   226,   228,     0,
       0,    58,    42,     0,     0,     0,   110,   222,     0,   220,
     216,     0,   196,   205,   197,     0,   207,   198,     0,   213,
       0,     0,     0,     0,   159,     0,     0,     0,     0,   134,
     128,     0,     0,   188,   185,     0,   188,     0,     0,     0,
       0,   171,   180,   258,    37,     0,     0,     0,   231,   233,
     225,    64,     0,     0,    47,     0,     0,     0,    48,     0,
       0,   193,   211,   209,   210,     0,     0,     0,     0,     0,
     104,   151,     0,     0,     0,   137,     0,   130,   188,   140,
     183,     0,     0,   161,     0,     0,     0,   176,   173,     0,
     240,     0,     0,     0,     0,    28,    50,    51,    52,     0,
       0,   208,   110,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,   154,     0,
     169,     0,     0,   262,     0,   274,     0,   274,     0,     0,
     219,     0,   101,   105,     0,     0,     0,     0,   138,   126,
       0,   129,   131,     0,   186,     0,   188,     0,     0,   164,
       0,   175,     0,     0,   274,     0,   234,   275,   235,   236,
     237,    59,     0,     0,     0,     0,     0,     0,   135,     0,
     184,     0,     0,     0,     0,   241,   238,   239,     0,     0,
       0,     0,     0,     0,   262,   261,     0,   263,     0,     0,
       0,   148,     0,   143,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,     0,   268,   271,     0,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,     0,   272,   267,     0,     0,     0,     0,
       0,   145,     0,     0,   163,   162,   166,     0,     0,     0,
     270,   264,     0,   214,     0,   149,     0,   144,   187,   155,
     265,   273,     0,   153,     0,     0,     0,   223,   146,     0,
     266,   156,     0,     0,     0,   157
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -511,  -511,  -511,  -511,  -511,  -511,  -511,   819,   892,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,   698,   492,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,   -64,  -511,   821,  -511,  -511,  -511,  -511,  -511,  -511,
     725,  -511,   726,   701,  -396,   635,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -350,  -511,  -511,  -511,  -511,
     303,  -511,  -511,  -511,  -511,  -511,   459,  -284,  -349,  -511,
    -295,  -511,  -424,  -246,  -162,  -511,  -511,  -511,   483,  -511,
    -511,  -511,  -511,  -511,   713,  -511,  -511,  -511,   578,   826,
    -511,  -511,  -511,  -511,  -511,  -245,  -476,   320,  -510,  -401
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   102,    20,    72,    97,   140,    30,    48,     9,
      99,   402,    31,    10,    70,    71,   136,   137,    49,   145,
     203,   332,    11,    75,   100,    12,    98,   452,    13,    69,
     144,    93,    94,    32,    66,   107,    67,    88,   115,   170,
     171,   227,   116,    68,    90,    91,   125,   182,   297,   183,
     299,   477,   512,   184,   298,   476,   185,   296,   510,   186,
     300,   365,   126,   614,   646,   127,   352,   612,   231,   506,
     629,   128,   550,   655,   662,   293,   129,   302,   516,   483,
     549,   130,   188,   442,   246,   373,   374,   375,   361,   362,
     363,   545,   364,   162,   163,   343,   344,   416,   465,   345,
     419,    14,   148,   205,   206,   337,   141,   259,   327,   398,
     257,   395,   449,   491,   521,   254,   525,   555,   587,   558
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     217,   306,   426,   307,   308,   309,    95,   366,   311,    81,
     459,   198,   484,   119,   359,   119,   435,   527,    18,    21,
      22,    23,    24,   120,   121,   120,   401,   134,    21,    22,
      23,    24,   445,   446,   447,   146,   495,   541,   578,   237,
     579,   580,   414,   175,   581,   582,   554,    19,   583,   360,
      38,   355,   356,   357,   513,   294,   578,   543,   579,   580,
      25,   368,   581,   582,   417,   380,   583,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     122,   448,   122,   584,   585,   578,   403,   579,   580,   135,
     556,   581,   582,   489,   412,   583,   415,   123,   238,   123,
     176,   584,   625,   199,    26,   559,   531,    27,    28,   147,
      82,   542,   295,    26,   544,   224,    27,    28,   418,    82,
     369,   370,   571,   371,   372,   602,   560,    33,   650,   651,
     584,   473,   124,    34,   124,   312,   313,   314,   480,   603,
     586,   474,   195,   576,   217,   413,   660,   196,   358,   138,
     312,   313,   314,   577,   358,   487,    29,   482,   586,   315,
     316,   317,   318,   319,   359,   320,   321,   322,   323,   324,
     359,   225,   249,   359,   315,   316,   317,   318,   319,   341,
     320,   321,   322,   323,   324,   250,   479,   586,   312,   313,
     314,   396,   325,   217,   217,   217,    15,   329,   138,   360,
     397,   597,   519,    39,   249,   360,   523,   268,   360,   624,
    -188,   598,   315,   316,   317,   318,   319,   250,   320,   321,
     322,   323,   324,   641,   599,   269,   270,   271,   251,   440,
      40,   252,    16,   260,   441,   514,    -8,     1,    41,   261,
     396,   217,   253,    42,     2,     3,    35,   524,   526,   450,
      -7,     1,    36,    17,   312,   313,   314,   243,     2,     3,
     251,   244,    43,   252,   538,   540,   462,   111,   312,   313,
     314,     4,    44,   112,   253,   378,   113,   553,   315,   316,
     317,   318,   319,    45,   320,   321,   322,   323,   324,    73,
      37,     5,   315,   316,   317,   318,   319,   114,   320,   321,
     322,   323,   324,   350,     6,     5,    46,   463,   464,   350,
     351,    74,   350,   312,   313,   314,   472,   217,    47,   619,
      76,   153,   379,   216,   154,   155,   156,    77,   169,   157,
     111,   158,   159,   443,   138,   139,   604,   315,   316,   317,
     318,   319,    78,   320,   321,   322,   323,   324,   348,   349,
     617,   160,   217,    79,   103,   620,   621,   104,   105,    80,
     312,   313,   314,   626,    89,    92,   630,    96,   632,   638,
     101,   312,   313,   314,   161,   110,   217,   106,   217,   108,
     639,   109,   117,   644,   315,   316,   317,   318,   319,   118,
     320,   321,   322,   323,   324,   315,   316,   317,   318,   319,
     654,   320,   321,   322,   323,   324,   131,   312,   313,   314,
     320,   321,   322,   323,   324,   132,   133,   664,   312,   313,
     314,    -3,     1,   322,   323,   324,   177,   178,   179,     2,
       3,   315,   316,   317,   318,   319,   180,   320,   321,   322,
     323,   324,   315,   316,   317,   318,   319,   143,   320,   321,
     322,   323,   324,   150,   153,   217,   377,   154,   155,   156,
     151,   152,   157,   164,   158,   159,   165,   181,   217,   153,
     217,   429,   154,   155,   156,   167,     5,   157,   166,   158,
     159,   168,   217,   153,   160,   430,   154,   155,   156,    47,
     169,   157,   217,   158,   159,   173,   369,   370,   172,   160,
     372,   153,   217,   454,   154,   155,   156,   161,   187,   157,
     174,   158,   159,   160,   268,   153,   189,   190,   154,   155,
     156,   191,   161,   157,   192,   158,   159,    83,   193,   194,
     197,   160,   269,   270,   271,   539,   161,    84,    85,   153,
     200,   568,   154,   155,   156,   160,    86,   157,   202,   158,
     159,    87,   204,   153,   161,   635,   154,   155,   156,   207,
     208,   157,   218,   158,   159,   219,   220,   209,   161,   160,
     153,   210,   645,   154,   155,   156,   211,   212,   157,   213,
     158,   159,   214,   160,   215,   153,   221,   647,   154,   155,
     156,   222,   161,   157,   282,   158,   159,   283,   284,   153,
     160,   653,   154,   155,   156,   223,   161,   157,   455,   158,
     159,   456,   457,   226,   153,   160,   658,   154,   155,   156,
     232,   233,   157,   161,   158,   159,   230,   234,   235,   160,
     236,   153,   239,   665,   154,   155,   156,   240,   161,   157,
     241,   158,   159,   153,   160,   245,   154,   155,   156,   242,
     247,   157,   161,   158,   159,   248,   256,   272,   274,   258,
     275,   160,   277,   276,   278,   279,   280,   161,    50,    51,
      52,    53,    54,   160,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,   161,   312,   313,   314,   285,   281,
     286,   287,   288,   289,   290,   291,   161,   312,   313,   314,
     301,   292,   304,   303,   305,   310,    65,   334,   326,   315,
     316,   317,   318,   319,   328,   320,   321,   322,   323,   324,
     312,   313,   316,   317,   318,   319,   331,   320,   321,   322,
     323,   324,   312,   313,   314,   333,   335,   336,   338,   340,
     342,   346,   347,   353,   339,   367,   404,   318,   319,   354,
     320,   321,   322,   323,   324,   376,   406,   263,   317,   318,
     319,   394,   320,   321,   322,   323,   324,   264,   265,   400,
     405,   407,   408,   409,   410,   411,   266,   420,   421,   422,
     423,   267,   425,   432,   424,   427,   433,   428,   436,   431,
     437,   434,   438,   439,   324,   444,   451,   458,   460,   461,
     468,   469,   471,   467,   470,   485,   494,   475,   478,   490,
     481,   486,   492,   493,   500,   496,   502,   501,   497,   499,
     498,   503,   507,   504,   509,   511,   505,   508,   520,   518,
     522,   515,   517,   528,   529,   534,   532,   533,   552,   530,
     535,   547,   536,   546,   557,   537,   548,   561,   551,   562,
     565,   563,   564,   566,   570,   567,   572,   574,   575,   588,
     594,   592,   605,   596,   600,   601,   606,   608,   622,   610,
     633,   627,   569,   573,   637,   634,   640,   589,   652,   648,
     636,   590,   591,   593,   595,   611,   642,   643,   656,   659,
     661,   663,     8,   255,   453,   228,   229,   330,   616,   488,
     609,   466,   262,     0,   607,     0,   399,     0,   613,     0,
       0,   615,     0,   618,     0,     0,   623,   628,   273,     0,
       0,   149,     0,   142,     0,   631,     0,     0,     0,     0,
       0,   649,     0,     0,     0,   657,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201
};

static const yytype_int16 yycheck[] =
{
     162,   247,   352,   248,   249,   250,    70,   302,   253,    12,
     406,    28,   436,     1,    74,     1,   365,   493,   120,     3,
       4,     5,     6,    11,    12,    11,    12,    58,     3,     4,
       5,     6,    15,    16,    17,    48,    48,    48,    18,    61,
      20,    21,    66,    63,    24,    25,   522,   120,    28,   109,
     119,   297,   298,   299,   478,    63,    18,    63,    20,    21,
      35,    58,    24,    25,    66,   310,    28,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      68,    64,    68,    63,    64,    18,   332,    20,    21,   120,
      55,    24,    25,   442,    66,    28,   120,    85,   120,    85,
     120,    63,    64,   120,    88,    55,   502,    91,    92,   122,
     122,   122,   120,    88,   120,    61,    91,    92,   120,   122,
     117,   118,   546,   120,   121,   117,   527,    55,   638,   639,
      63,    56,   120,    61,   120,   100,   101,   102,   433,   131,
     120,    66,    57,    55,   306,   117,   656,    62,    58,    13,
     100,   101,   102,   554,    58,   439,     0,    58,   120,   124,
     125,   126,   127,   128,    74,   130,   131,   132,   133,   134,
      74,   117,    61,    74,   124,   125,   126,   127,   128,    48,
     130,   131,   132,   133,   134,    74,   432,   120,   100,   101,
     102,    55,   256,   355,   356,   357,    12,   261,    13,   109,
      64,    56,   486,   120,    61,   109,    63,    76,   109,    55,
     120,    66,   124,   125,   126,   127,   128,    74,   130,   131,
     132,   133,   134,    55,   574,    94,    95,    96,   117,    57,
     120,   120,    48,    55,    62,   481,     0,     1,    69,    61,
      55,   403,   131,    56,     8,     9,    55,   492,   493,    64,
       0,     1,    61,    69,   100,   101,   102,    61,     8,     9,
     117,    65,   121,   120,   510,   511,    59,    63,   100,   101,
     102,    35,   121,    69,   131,    62,    72,   522,   124,   125,
     126,   127,   128,   121,   130,   131,   132,   133,   134,    69,
      99,    55,   124,   125,   126,   127,   128,    93,   130,   131,
     132,   133,   134,    57,    68,    55,   120,   100,   101,    57,
      64,    69,    57,   100,   101,   102,    64,   479,    68,    64,
     117,    67,    62,    69,    70,    71,    72,    69,    61,    75,
      63,    77,    78,    62,    13,    14,   581,   124,   125,   126,
     127,   128,    69,   130,   131,   132,   133,   134,    56,    57,
     596,    97,   514,    69,   117,   600,   601,   120,   121,    59,
     100,   101,   102,   608,    65,   120,   612,    61,   614,    62,
      69,   100,   101,   102,   120,    56,   538,    69,   540,    69,
      62,   120,   117,   629,   124,   125,   126,   127,   128,   120,
     130,   131,   132,   133,   134,   124,   125,   126,   127,   128,
     646,   130,   131,   132,   133,   134,    62,   100,   101,   102,
     130,   131,   132,   133,   134,    57,    62,   663,   100,   101,
     102,     0,     1,   132,   133,   134,    79,    80,    81,     8,
       9,   124,   125,   126,   127,   128,    89,   130,   131,   132,
     133,   134,   124,   125,   126,   127,   128,     8,   130,   131,
     132,   133,   134,    69,    67,   617,    69,    70,    71,    72,
      69,    69,    75,    59,    77,    78,   117,   120,   630,    67,
     632,    69,    70,    71,    72,    56,    55,    75,   117,    77,
      78,    56,   644,    67,    97,    69,    70,    71,    72,    68,
      61,    75,   654,    77,    78,    55,   117,   118,    56,    97,
     121,    67,   664,    69,    70,    71,    72,   120,   120,    75,
      69,    77,    78,    97,    76,    67,    55,    55,    70,    71,
      72,   120,   120,    75,    55,    77,    78,    73,   120,    59,
     120,    97,    94,    95,    96,    87,   120,    83,    84,    67,
     120,    69,    70,    71,    72,    97,    92,    75,    68,    77,
      78,    97,    68,    67,   120,    69,    70,    71,    72,    61,
      56,    75,   117,    77,    78,   120,   121,    56,   120,    97,
      67,    56,    69,    70,    71,    72,    56,    56,    75,    56,
      77,    78,    56,    97,    56,    67,    69,    69,    70,    71,
      72,    64,   120,    75,   117,    77,    78,   120,   121,    67,
      97,    69,    70,    71,    72,   117,   120,    75,   117,    77,
      78,   120,   121,    99,    67,    97,    69,    70,    71,    72,
      59,   120,    75,   120,    77,    78,   117,   120,   120,    97,
     120,    67,    69,    69,    70,    71,    72,    69,   120,    75,
      69,    77,    78,    67,    97,    99,    70,    71,    72,    69,
      68,    75,   120,    77,    78,    61,    61,    68,   117,    63,
     117,    97,   117,    65,    65,    65,    61,   120,    30,    31,
      32,    33,    34,    97,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   120,   100,   101,   102,    69,   117,
      69,    69,   117,    56,   117,    66,   120,   100,   101,   102,
      61,   120,    61,   117,   120,    61,    68,   120,    63,   124,
     125,   126,   127,   128,    63,   130,   131,   132,   133,   134,
     100,   101,   125,   126,   127,   128,    69,   130,   131,   132,
     133,   134,   100,   101,   102,    69,    56,   120,   120,    69,
      57,   117,    57,    65,   121,    56,    59,   127,   128,    61,
     130,   131,   132,   133,   134,    61,   120,    73,   126,   127,
     128,    62,   130,   131,   132,   133,   134,    83,    84,    62,
     117,    69,   117,    69,    69,   117,    92,    57,   117,   117,
     117,    97,    59,    62,   120,   117,    57,   120,    57,   120,
     117,   120,   120,    59,   134,    55,    55,    69,   117,    62,
      57,    57,   120,   117,    62,    66,    68,    62,    61,   101,
      62,    61,    59,    59,   117,    69,   120,   117,    69,    67,
      69,    62,    55,   117,    55,    68,   117,   117,    62,    61,
      59,   120,   120,    48,    61,    55,    62,    62,   120,    69,
      68,    62,    66,    61,    55,    68,    65,    69,    62,   117,
     120,    61,    68,    55,    62,   120,    55,    63,   100,    57,
      63,    68,    55,    68,    61,    61,    56,    59,    56,    82,
      64,    62,   117,   117,    57,    62,    56,   117,    56,    64,
      66,   120,   120,   120,   120,   120,    70,    62,    19,    62,
      55,    68,     0,   195,   402,   170,   170,   262,   595,   440,
     117,   418,   201,    -1,   584,    -1,   328,    -1,   120,    -1,
      -1,   120,    -1,   117,    -1,    -1,   117,   117,   205,    -1,
      -1,   102,    -1,    97,    -1,   120,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     8,     9,    35,    55,    68,   138,   145,   146,
     150,   159,   162,   165,   238,    12,    48,    69,   120,   120,
     140,     3,     4,     5,     6,    35,    88,    91,    92,     0,
     144,   149,   170,    55,    61,    55,    61,    99,   119,   120,
     120,    69,    56,   121,   121,   121,   120,    68,   145,   155,
      30,    31,    32,    33,    34,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    68,   171,   173,   180,   166,
     151,   152,   141,    69,    69,   160,   117,    69,    69,    69,
      59,    12,   122,    73,    83,    84,    92,    97,   174,    65,
     181,   182,   120,   168,   169,   168,    61,   142,   163,   147,
     161,    69,   139,   117,   120,   121,    69,   172,    69,   120,
      56,    63,    69,    72,    93,   175,   179,   117,   120,     1,
      11,    12,    68,    85,   120,   183,   199,   202,   208,   213,
     218,    62,    57,    62,    58,   120,   153,   154,    13,    14,
     143,   243,   246,     8,   167,   156,    48,   122,   239,   144,
      69,    69,    69,    67,    70,    71,    72,    75,    77,    78,
      97,   120,   230,   231,    59,   117,   117,    56,    56,    61,
     176,   177,    56,    55,    69,    63,   120,    79,    80,    81,
      89,   120,   184,   186,   190,   193,   196,   120,   219,    55,
      55,   120,    55,   120,    59,    57,    62,   120,    28,   120,
     120,   170,    68,   157,    68,   240,   241,    61,    56,    56,
      56,    56,    56,    56,    56,    56,    69,   231,   117,   120,
     121,    69,    64,   117,    61,   117,    99,   178,   177,   179,
     117,   205,    59,   120,   120,   120,   120,    61,   120,    69,
      69,    69,    69,    61,    65,    99,   221,    68,    61,    61,
      74,   117,   120,   131,   252,   154,    61,   247,    63,   244,
      55,    61,   180,    73,    83,    84,    92,    97,    76,    94,
      95,    96,    68,   241,   117,   117,    65,   117,    65,    65,
      61,   117,   117,   120,   121,    69,    69,    69,   117,    56,
     117,    66,   120,   212,    63,   120,   194,   185,   191,   187,
     197,    61,   214,   117,    61,   120,   230,   252,   252,   252,
      61,   252,   100,   101,   102,   124,   125,   126,   127,   128,
     130,   131,   132,   133,   134,   168,    63,   245,    63,   168,
     182,    69,   158,    69,   120,    56,   120,   242,   120,   121,
      69,    48,    57,   232,   233,   236,   117,    57,    56,    57,
      57,    64,   203,    65,    61,   230,   230,   230,    58,    74,
     109,   225,   226,   227,   229,   198,   227,    56,    58,   117,
     118,   120,   121,   222,   223,   224,    61,    69,    62,    62,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,    62,   248,    55,    64,   246,   245,
      62,    12,   148,   230,    59,   117,   120,    69,   117,    69,
      69,   117,    66,   117,    66,   120,   234,    66,   120,   237,
      57,   117,   117,   117,   120,    59,   212,   117,   120,    69,
      69,   120,    62,    57,   120,   225,    57,   117,   120,    59,
      57,    62,   220,    62,    55,    15,    16,    17,    64,   249,
      64,    55,   164,   155,    69,   117,   120,   121,    69,   181,
     117,    62,    59,   100,   101,   235,   235,   117,    57,    57,
      62,   120,    64,    56,    66,    62,   192,   188,    61,   230,
     227,    62,    58,   216,   229,    66,    61,   224,   223,   225,
     101,   250,    59,    59,    68,    48,    69,    69,    69,    67,
     117,   117,   120,    62,   117,   117,   206,    55,   117,    55,
     195,    68,   189,   229,   230,   120,   215,   120,    61,   224,
      62,   251,    59,    63,   252,   253,   252,   253,    48,    61,
      69,   181,    62,    62,    55,    68,    66,    68,   230,    87,
     230,    48,   122,    63,   120,   228,    61,    62,    65,   217,
     209,    62,   120,   252,   253,   254,    55,    55,   256,    55,
     256,    69,   117,    61,    68,   120,    55,   120,    69,   117,
      62,   229,    55,   117,    63,   100,    55,   256,    18,    20,
      21,    24,    25,    28,    63,    64,   120,   255,    57,   117,
     120,   120,    68,   120,    63,   120,    68,    56,    66,   212,
      61,    61,   117,   131,   252,    55,    56,   254,    59,   117,
      82,   120,   204,   120,   200,   120,   217,   230,   117,    64,
     252,   252,    56,   117,    55,    64,   252,    62,   117,   207,
     230,   120,   230,    64,    62,    69,    66,    57,    62,    62,
      56,    55,    70,    62,   230,    69,   201,    69,    64,   120,
     255,   255,    56,    69,   230,   210,    19,   117,    69,    62,
     255,    55,   211,    68,   230,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   137,   139,   138,   140,   141,   138,   138,   138,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   147,   148,   146,   149,
     146,   146,   146,   151,   150,   150,   152,   150,   153,   153,
     154,   154,   155,   155,   156,   156,   158,   157,   157,   157,
     157,   157,   157,   160,   159,   161,   161,   163,   164,   162,
     162,   166,   165,   165,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   171,   171,   171,   171,   171,
     171,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   180,
     181,   181,   182,   182,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   185,   184,   187,   188,   186,
     189,   189,   191,   190,   192,   192,   194,   195,   193,   197,
     196,   198,   196,   200,   199,   201,   199,   203,   204,   202,
     205,   206,   207,   202,   209,   210,   211,   208,   212,   212,
     214,   215,   213,   216,   216,   217,   217,   219,   220,   218,
     221,   221,   222,   222,   223,   223,   223,   224,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   228,   229,   229,
     229,   230,   230,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   233,   233,   234,   235,
     235,   235,   236,   236,   237,   239,   238,   240,   240,   241,
     241,   241,   241,   242,   244,   243,   243,   245,   245,   245,
     247,   246,   248,   248,   249,   249,   249,   249,   249,   249,
     251,   250,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   256,   256
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     0,     0,     5,     2,     0,     0,
       2,     1,     1,     0,     2,     1,     1,     1,     1,     4,
       4,     6,     6,     6,     2,     1,     0,     0,    12,     0,
       4,     2,     2,     0,     7,     3,     0,    11,     1,     3,
       3,     5,     0,     2,     0,     2,     0,     5,     5,     3,
       6,     6,     6,     0,     6,     0,     2,     0,     0,    14,
       5,     0,     7,     3,     6,     3,     0,     1,     1,     3,
       0,     2,     4,     3,     0,     5,     5,     3,     6,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     3,     3,
       3,     9,     1,     2,     6,     8,     2,     0,     3,     3,
       0,     5,     0,     2,     5,     3,     3,     3,     3,     2,
       1,     1,     1,     1,     2,     0,     8,     0,     0,     8,
       0,     2,     0,     4,     0,     4,     0,     0,     8,     0,
       6,     0,     7,     0,    14,     0,    16,     0,     0,    14,
       0,     0,     0,    15,     0,     0,     0,    21,     1,     3,
       0,     0,    13,     7,     3,     3,     5,     0,     0,     8,
       0,     4,     1,     3,     1,     5,     3,     1,     1,     1,
       0,     1,     1,     3,     6,     2,     1,     6,     0,     1,
       1,     1,     2,     6,     7,     3,     5,     5,     5,     3,
       3,     3,     3,     3,     0,     2,     0,     2,     3,     1,
       1,     1,     0,     2,     9,     0,    10,     1,     2,     7,
       4,     3,     4,    12,     0,     6,     5,     0,     2,     2,
       0,     6,     0,     2,     4,     4,     4,     4,     5,     5,
       0,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     4,     1,
       1,     3,     0,     2,     4,     5,     7,     3,     2,     3,
       4,     2,     3,     5,     0,     1
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
#line 101 "vgrammar.y" /* yacc.c:1646  */
    { VerCheckVersion((yyvsp[-1].S)); }
#line 2030 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 4:
#line 102 "vgrammar.y" /* yacc.c:1646  */
    { BeginVN(); }
#line 2036 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 5:
#line 102 "vgrammar.y" /* yacc.c:1646  */
    { BeginDD(); }
#line 2042 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "vgrammar.y" /* yacc.c:1646  */
    { VerAddScript((yyvsp[-1].S)); }
#line 2048 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 20:
#line 131 "vgrammar.y" /* yacc.c:1646  */
    { VerAddVLib((yyvsp[-1].S)); }
#line 2054 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 132 "vgrammar.y" /* yacc.c:1646  */
    { VerCircuitProp((yyvsp[-3].S),&(yyvsp[-1].I),TYPE_INT); }
#line 2060 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "vgrammar.y" /* yacc.c:1646  */
    { VerCircuitProp((yyvsp[-3].S),(yyvsp[-1].S),TYPE_STR); }
#line 2066 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 134 "vgrammar.y" /* yacc.c:1646  */
    { VerCircuitProp((yyvsp[-3].S),(yyvsp[-1].S),TYPE_STR); }
#line 2072 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 148 "vgrammar.y" /* yacc.c:1646  */
    { nativeVerilog = 0; VerNewModule(HDLMODULE,(yyvsp[-1].S),0); }
#line 2078 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 150 "vgrammar.y" /* yacc.c:1646  */
    { BeginHDL(); }
#line 2084 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 150 "vgrammar.y" /* yacc.c:1646  */
    { BeginVR(); VerEndModule(); }
#line 2090 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 151 "vgrammar.y" /* yacc.c:1646  */
    { VerModParm(0); BeginHDL(); }
#line 2096 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "vgrammar.y" /* yacc.c:1646  */
    { BeginVR(); VerEndModule(); }
#line 2102 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 152 "vgrammar.y" /* yacc.c:1646  */
    { BeginVR(); }
#line 2108 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 153 "vgrammar.y" /* yacc.c:1646  */
    { BeginVR(); }
#line 2114 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 156 "vgrammar.y" /* yacc.c:1646  */
    { nativeVerilog = 1; VerNewModule(HDLMODULE,(yyvsp[-1].S),0); }
#line 2120 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 157 "vgrammar.y" /* yacc.c:1646  */
    { nativeVerilog = 1; VerNewModule(HDLMODULE,(yyvsp[-1].S),1); }
#line 2126 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 158 "vgrammar.y" /* yacc.c:1646  */
    { nativeVerilog = 1; VerNewModule(HDLMODULE,(yyvsp[-1].S),0); }
#line 2132 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 165 "vgrammar.y" /* yacc.c:1646  */
    { VerModHashParm((yyvsp[-2].S),(yyvsp[0].E)); }
#line 2138 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "vgrammar.y" /* yacc.c:1646  */
    { VerModHashParm((yyvsp[-3].S),(yyvsp[-1].E)); }
#line 2144 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 171 "vgrammar.y" /* yacc.c:1646  */
    { VerAddHdlLine((yyvsp[0].S)); }
#line 2150 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 178 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginBD(); }
#line 2156 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 178 "vgrammar.y" /* yacc.c:1646  */
    { VerEndBD(); }
#line 2162 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp("symbol",&(yyvsp[-1].I),TYPE_INT); }
#line 2168 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 180 "vgrammar.y" /* yacc.c:1646  */
    { VerSetRootMod(); }
#line 2174 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 181 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp((yyvsp[-3].S),&(yyvsp[-1].I),TYPE_INT); }
#line 2180 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 182 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp((yyvsp[-3].S),(yyvsp[-1].S),TYPE_STR); }
#line 2186 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 183 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp((yyvsp[-3].S),(yyvsp[-1].S),TYPE_STR); }
#line 2192 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 190 "vgrammar.y" /* yacc.c:1646  */
    { nativeVerilog = 0; BeginHDL(); }
#line 2198 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "vgrammar.y" /* yacc.c:1646  */
    { BeginVR(); }
#line 2204 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 200 "vgrammar.y" /* yacc.c:1646  */
    { VerNewModule(NETMODULE,(yyvsp[-1].S),0); }
#line 2210 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 201 "vgrammar.y" /* yacc.c:1646  */
    { VerEndModule(); }
#line 2216 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 203 "vgrammar.y" /* yacc.c:1646  */
    { VerEndModule(); }
#line 2222 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 206 "vgrammar.y" /* yacc.c:1646  */
    { VerNewModule(NETMODULE,(yyvsp[-1].S),0); }
#line 2228 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 207 "vgrammar.y" /* yacc.c:1646  */
    { VerNewModule(NETMODULE,(yyvsp[-1].S),1); }
#line 2234 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "vgrammar.y" /* yacc.c:1646  */
    { VerModParm((yyvsp[0].S)); }
#line 2240 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 218 "vgrammar.y" /* yacc.c:1646  */
    { VerModParm((yyvsp[0].S)); }
#line 2246 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 72:
#line 226 "vgrammar.y" /* yacc.c:1646  */
    { VerNewNet((yyvsp[-1].S),(yyvsp[-2].I),(yyvsp[-3].I)); }
#line 2252 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 228 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginBD(); }
#line 2258 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 75:
#line 228 "vgrammar.y" /* yacc.c:1646  */
    { VerEndBD(); }
#line 2264 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 229 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp("symbol",&(yyvsp[-1].I),TYPE_INT); }
#line 2270 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 230 "vgrammar.y" /* yacc.c:1646  */
    { VerSetRootMod(); }
#line 2276 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 78:
#line 231 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp((yyvsp[-3].S),&(yyvsp[-1].I),TYPE_INT); }
#line 2282 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 79:
#line 232 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp((yyvsp[-3].S),(yyvsp[-1].S),TYPE_STR); }
#line 2288 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 80:
#line 233 "vgrammar.y" /* yacc.c:1646  */
    { VerModuleProp((yyvsp[-3].S),(yyvsp[-1].S),TYPE_STR); }
#line 2294 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 236 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = INPUT; }
#line 2300 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 237 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = OUTPUT; }
#line 2306 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 238 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = INOUT; }
#line 2312 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 84:
#line 239 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = SUPPLY0; }
#line 2318 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 240 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = SUPPLY1; }
#line 2324 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 86:
#line 241 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = REG; }
#line 2330 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 87:
#line 242 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = WIRE; }
#line 2336 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 88:
#line 243 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = WAND; }
#line 2342 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 244 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = WOR; }
#line 2348 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 90:
#line 245 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = KWTRI; }
#line 2354 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 246 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = TRI0; }
#line 2360 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 247 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = TRI1; }
#line 2366 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 248 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = TRIAND; }
#line 2372 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 249 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = TRIOR; }
#line 2378 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 95:
#line 250 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = TRIREG; }
#line 2384 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 99:
#line 258 "vgrammar.y" /* yacc.c:1646  */
    { VerSetShowName((yyvsp[0].I)); }
#line 2390 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 100:
#line 259 "vgrammar.y" /* yacc.c:1646  */
    { VerSetWireDecorationPos((yyvsp[0].I),-1,-1); }
#line 2396 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 101:
#line 260 "vgrammar.y" /* yacc.c:1646  */
    { VerSetWireDecorationPos((yyvsp[-5].I),(yyvsp[-3].I),(yyvsp[-1].I)); }
#line 2402 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 274 "vgrammar.y" /* yacc.c:1646  */
    { VerMakeNode((yyvsp[-3].I),(yyvsp[-1].I),(yyvsp[-4].I),0,0); }
#line 2408 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 275 "vgrammar.y" /* yacc.c:1646  */
    { VerMakeNode((yyvsp[-3].I),(yyvsp[-1].I),(yyvsp[-6].I),1,(yyvsp[-5].I)); }
#line 2414 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 278 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 1; }
#line 2420 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 279 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 0; }
#line 2426 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 108:
#line 282 "vgrammar.y" /* yacc.c:1646  */
    { VerMakeWire((yyvsp[-1].I)); }
#line 2432 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 109:
#line 285 "vgrammar.y" /* yacc.c:1646  */
    { VerEndDecls(); }
#line 2438 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 288 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 1; }
#line 2444 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 289 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = ((yyvsp[-3].I)-(yyvsp[-1].I))+1; }
#line 2450 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 296 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2456 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 297 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2462 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 298 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2468 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 299 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2474 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 118:
#line 300 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2480 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 119:
#line 301 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2486 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 120:
#line 302 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2492 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 303 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2498 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 122:
#line 304 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2504 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 305 "vgrammar.y" /* yacc.c:1646  */
    { VerEndGate(); }
#line 2510 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 124:
#line 306 "vgrammar.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2516 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 125:
#line 309 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("COMMENT",(yyvsp[0].S)); }
#line 2522 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 127:
#line 312 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("SCRIPT",(yyvsp[0].S)); }
#line 2528 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 128:
#line 312 "vgrammar.y" /* yacc.c:1646  */
    {BeginHDL(); }
#line 2534 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 129:
#line 312 "vgrammar.y" /* yacc.c:1646  */
    { BeginVR(); }
#line 2540 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 131:
#line 316 "vgrammar.y" /* yacc.c:1646  */
    { VerAddScriptLine((yyvsp[0].S)); }
#line 2546 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 132:
#line 320 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("FRAME",(yyvsp[0].S)); }
#line 2552 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 136:
#line 327 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("JOINT",(yyvsp[0].S)); }
#line 2558 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 137:
#line 327 "vgrammar.y" /* yacc.c:1646  */
    { VerJointNet((yyvsp[-1].S)); }
#line 2564 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 139:
#line 330 "vgrammar.y" /* yacc.c:1646  */
    { VerGate((yyvsp[-1].S),0); }
#line 2570 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 141:
#line 331 "vgrammar.y" /* yacc.c:1646  */
    { VerGate((yyvsp[-2].S),(yyvsp[-1].S)); }
#line 2576 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 143:
#line 335 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("TAP",(yyvsp[0].S)); VerTranRange((yyvsp[-5].I),(yyvsp[-5].I)); VerAttach("Z",(yyvsp[-9].S),0); VerAttach("I",(yyvsp[-7].S),0); VerTranDup(); }
#line 2582 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 145:
#line 338 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("TAP",(yyvsp[0].S)); VerTranRange((yyvsp[-7].I),(yyvsp[-5].I)); VerAttach("Z",(yyvsp[-11].S),0); VerAttach("I",(yyvsp[-9].S),0); VerTranDup(); }
#line 2588 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 147:
#line 342 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("CONCAT",0); VerAttach("Z",(yyvsp[-2].S),0); }
#line 2594 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 148:
#line 343 "vgrammar.y" /* yacc.c:1646  */
    { VerRenameCurrent((yyvsp[0].S)); VerRevPad(0); }
#line 2600 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 150:
#line 344 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("CONCAT",0); }
#line 2606 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 151:
#line 344 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach("Z",(yyvsp[0].S),0); }
#line 2612 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 152:
#line 345 "vgrammar.y" /* yacc.c:1646  */
    { VerRenameCurrent((yyvsp[0].S)); VerRevPad(0); }
#line 2618 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 154:
#line 349 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("CONCAT",(yyvsp[-6].S)); }
#line 2624 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 155:
#line 352 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach("Z",(yyvsp[0].S),0); }
#line 2630 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 156:
#line 353 "vgrammar.y" /* yacc.c:1646  */
    { VerRevPad(0); }
#line 2636 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 158:
#line 357 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach("I",(yyvsp[0].S),0); }
#line 2642 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 159:
#line 358 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach("I",(yyvsp[0].S),0); }
#line 2648 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 160:
#line 364 "vgrammar.y" /* yacc.c:1646  */
    { VerGate("TAP",(yyvsp[-1].S)); }
#line 2654 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 161:
#line 365 "vgrammar.y" /* yacc.c:1646  */
    { VerTranDup(); }
#line 2660 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 163:
#line 368 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach((yyvsp[-5].S),(yyvsp[-2].S),(yyvsp[-3].I)); }
#line 2666 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 164:
#line 369 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach(0,(yyvsp[-1].S),(yyvsp[-2].I)); }
#line 2672 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 165:
#line 372 "vgrammar.y" /* yacc.c:1646  */
    { VerTranRange((yyvsp[-1].I),(yyvsp[-1].I)); }
#line 2678 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 166:
#line 373 "vgrammar.y" /* yacc.c:1646  */
    { VerTranRange((yyvsp[-3].I),(yyvsp[-1].I)); }
#line 2684 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 167:
#line 376 "vgrammar.y" /* yacc.c:1646  */
    { VerCallMParmFlush(); }
#line 2690 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 168:
#line 376 "vgrammar.y" /* yacc.c:1646  */
    { VerCell((yyvsp[-4].S),(yyvsp[-1].S)); }
#line 2696 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 174:
#line 387 "vgrammar.y" /* yacc.c:1646  */
    { VerCallMParmAdd(0,(yyvsp[0].S)); }
#line 2702 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 175:
#line 388 "vgrammar.y" /* yacc.c:1646  */
    { VerCallMParmAdd((yyvsp[-3].S),(yyvsp[-1].S)); }
#line 2708 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 176:
#line 389 "vgrammar.y" /* yacc.c:1646  */
    { VerCallMParmAdd((yyvsp[-2].S),(yyvsp[0].S)); }
#line 2714 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 177:
#line 392 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.S) = yc_sprintf("%u",(yyvsp[0].I)); }
#line 2720 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 178:
#line 393 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.S) = (yyvsp[0].S); }
#line 2726 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 179:
#line 394 "vgrammar.y" /* yacc.c:1646  */
    { char buf[1024]; (yyval.S) = yc_sprintf("\"%s\"",quoteChars(buf,(yyvsp[0].S),"\"\\")); }
#line 2732 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 184:
#line 405 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach((yyvsp[-4].S),(yyvsp[-1].S),(yyvsp[-2].I)); }
#line 2738 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 185:
#line 406 "vgrammar.y" /* yacc.c:1646  */
    { VerAttach(0,(yyvsp[0].S),(yyvsp[-1].I)); }
#line 2744 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 186:
#line 413 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.S) = (yyvsp[0].S); }
#line 2750 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 187:
#line 414 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.S) = (yyvsp[-2].S); }
#line 2756 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 188:
#line 417 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 0; }
#line 2762 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 189:
#line 418 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 1; }
#line 2768 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 190:
#line 419 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 1; }
#line 2774 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 193:
#line 428 "vgrammar.y" /* yacc.c:1646  */
    { VerSetPos((yyvsp[-3].I),(yyvsp[-1].I)); }
#line 2780 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 194:
#line 429 "vgrammar.y" /* yacc.c:1646  */
    { VerSetSize((yyvsp[-3].I),(yyvsp[-1].I)); }
#line 2786 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 195:
#line 430 "vgrammar.y" /* yacc.c:1646  */
    { VerSetRot((yyvsp[0].I)); }
#line 2792 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 199:
#line 434 "vgrammar.y" /* yacc.c:1646  */
    { VerSetShowName((yyvsp[0].I)); }
#line 2798 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 200:
#line 435 "vgrammar.y" /* yacc.c:1646  */
    { VerSetBlockSymbol((yyvsp[0].I)); }
#line 2804 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 201:
#line 436 "vgrammar.y" /* yacc.c:1646  */
    { VerSetProperty((yyvsp[-2].S),(yyvsp[0].I)); }
#line 2810 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 202:
#line 437 "vgrammar.y" /* yacc.c:1646  */
    { VerSetStrProperty((yyvsp[-2].S),(yyvsp[0].S)); }
#line 2816 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 203:
#line 438 "vgrammar.y" /* yacc.c:1646  */
    { VerSetStrProperty((yyvsp[-2].S),(yyvsp[0].S)); }
#line 2822 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 205:
#line 442 "vgrammar.y" /* yacc.c:1646  */
    { VerPlaceWire((yyvsp[0].I)); }
#line 2828 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 208:
#line 449 "vgrammar.y" /* yacc.c:1646  */
    { VerBlockPort((yyvsp[-2].S),(yyvsp[-1].I),(yyvsp[0].I)); }
#line 2834 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 209:
#line 452 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 2; }
#line 2840 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 210:
#line 453 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 3; }
#line 2846 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 211:
#line 454 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 1; }
#line 2852 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 214:
#line 462 "vgrammar.y" /* yacc.c:1646  */
    { VerBDPort((yyvsp[-8].S),(yyvsp[-7].I),(yyvsp[-6].S),(yyvsp[-5].I),(yyvsp[-3].I),(yyvsp[-1].I)); }
#line 2858 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 215:
#line 468 "vgrammar.y" /* yacc.c:1646  */
    { VerSymbol((yyvsp[-1].I)); }
#line 2864 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 216:
#line 470 "vgrammar.y" /* yacc.c:1646  */
    { VerSymbol(0); }
#line 2870 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 219:
#line 477 "vgrammar.y" /* yacc.c:1646  */
    { VerSetIcon((yyvsp[-4].S),(yyvsp[-3].I),(yyvsp[-2].I),(yyvsp[-1].I)); }
#line 2876 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 220:
#line 478 "vgrammar.y" /* yacc.c:1646  */
    { VerIconData((yyvsp[-1].S)); }
#line 2882 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 221:
#line 479 "vgrammar.y" /* yacc.c:1646  */
    { VerSetIcon(0,0,0,0); }
#line 2888 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 223:
#line 485 "vgrammar.y" /* yacc.c:1646  */
    { VerSymPort((yyvsp[-11].S),(yyvsp[-10].S),(yyvsp[-9].I),(yyvsp[-6].I),(yyvsp[-4].I),(yyvsp[0].I)); }
#line 2894 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 224:
#line 492 "vgrammar.y" /* yacc.c:1646  */
    { tech_name = (yyvsp[0].S); }
#line 2900 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 225:
#line 492 "vgrammar.y" /* yacc.c:1646  */
    { tech_name = "default"; }
#line 2906 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 230:
#line 501 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDelayDef(tech_name,(yyvsp[0].S)); }
#line 2912 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 231:
#line 501 "vgrammar.y" /* yacc.c:1646  */
    { VerEndDelayDef(); }
#line 2918 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 234:
#line 508 "vgrammar.y" /* yacc.c:1646  */
    { PrimSet("area",0,(yyvsp[-1].E)); }
#line 2924 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 235:
#line 509 "vgrammar.y" /* yacc.c:1646  */
    { PrimSet("area",0,(yyvsp[-1].E)); }
#line 2930 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 236:
#line 510 "vgrammar.y" /* yacc.c:1646  */
    { PrimSet("power",0,(yyvsp[-1].E)); }
#line 2936 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 237:
#line 511 "vgrammar.y" /* yacc.c:1646  */
    { PrimSet("power",0,(yyvsp[-1].E)); }
#line 2942 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 238:
#line 512 "vgrammar.y" /* yacc.c:1646  */
    { PrimSet("delay",(yyvsp[-3].S),(yyvsp[-1].E)); }
#line 2948 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 239:
#line 513 "vgrammar.y" /* yacc.c:1646  */
    { PrimSet("delay",(yyvsp[-3].S),(yyvsp[-1].E)); }
#line 2954 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 240:
#line 519 "vgrammar.y" /* yacc.c:1646  */
    { BeginDDP(); }
#line 2960 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 241:
#line 519 "vgrammar.y" /* yacc.c:1646  */
    {  BeginDD(); (yyval.S) = (yyvsp[-1].S); }
#line 2966 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 242:
#line 522 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(ADD,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 2972 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 243:
#line 523 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(SUB,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 2978 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 244:
#line 524 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(MUL,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 2984 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 245:
#line 525 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(DIV,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 2990 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 246:
#line 526 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(AND,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 2996 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 247:
#line 527 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(POW,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3002 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 248:
#line 528 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(OR,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3008 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 249:
#line 529 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(GT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3014 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 250:
#line 530 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(LT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3020 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 251:
#line 531 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(GE,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3026 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 252:
#line 532 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(LE,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3032 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 253:
#line 533 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(EQ,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3038 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 254:
#line 534 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(NE,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3044 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 255:
#line 535 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(NOT,0,(yyvsp[0].E)); }
#line 3050 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 256:
#line 536 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(UNEG,0,(yyvsp[0].E)); }
#line 3056 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 257:
#line 537 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[-1].E); }
#line 3062 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 258:
#line 538 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_func((yyvsp[-3].S),(yyvsp[-1].E),0); }
#line 3068 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 259:
#line 539 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_lit((yyvsp[0].S)); }
#line 3074 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 260:
#line 540 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_num((yyvsp[0].I)); }
#line 3080 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 261:
#line 543 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[-1].E); }
#line 3086 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 262:
#line 546 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = 0; }
#line 3092 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 263:
#line 547 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(NEXT,(yyvsp[-1].E),(yyvsp[0].E)); }
#line 3098 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 264:
#line 550 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(ASGN,Expr_lit((yyvsp[-3].S)),(yyvsp[-1].E)); }
#line 3104 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 265:
#line 551 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op3(IF,(yyvsp[-2].E),(yyvsp[0].E),0); }
#line 3110 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 266:
#line 552 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op3(IF,(yyvsp[-4].E),(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3116 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 267:
#line 553 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[-1].E); }
#line 3122 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 268:
#line 554 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(BREAK,0,0); }
#line 3128 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 269:
#line 555 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_case(CASE,(yyvsp[-1].I)); }
#line 3134 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 270:
#line 556 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_case(CASE,-(yyvsp[-1].I)); }
#line 3140 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 271:
#line 557 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_case(DEFAULT,0); }
#line 3146 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 272:
#line 558 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(RETURN,(yyvsp[-1].E),0); }
#line 3152 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 273:
#line 559 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = Expr_op(SWITCH,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3158 "vgrammar.c" /* yacc.c:1646  */
    break;


#line 3162 "vgrammar.c" /* yacc.c:1646  */
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
#line 566 "vgrammar.y" /* yacc.c:1906  */

