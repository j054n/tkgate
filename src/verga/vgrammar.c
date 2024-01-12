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
#line 168 "vgrammar.y" /* yacc.c:339  */

#include "thyme.h"

void BeginPV();		/* Pure verilog */
void BeginLC();
void BeginBC();


#line 75 "vgrammar.c" /* yacc.c:339  */

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

/* Copy the second part of user declarations.  */

#line 445 "vgrammar.c" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5113

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  391
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  805

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   417

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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   188,   188,   189,   190,   191,   194,   195,   198,   201,
     202,   210,   213,   214,   217,   218,   219,   220,   221,   222,
     223,   224,   239,   239,   242,   243,   246,   247,   251,   252,
     255,   256,   257,   261,   262,   279,   280,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   297,
     298,   301,   304,   307,   315,   315,   316,   319,   320,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   351,
     350,   353,   352,   357,   356,   360,   360,   363,   362,   365,
     364,   369,   368,   372,   372,   374,   374,   375,   375,   376,
     376,   377,   377,   378,   378,   381,   381,   381,   381,   381,
     381,   382,   382,   383,   383,   384,   384,   384,   384,   385,
     385,   385,   385,   386,   386,   387,   387,   387,   387,   389,
     390,   393,   394,   397,   398,   401,   402,   405,   406,   409,
     410,   413,   414,   420,   421,   428,   429,   433,   437,   454,
     454,   457,   458,   461,   465,   466,   467,   468,   477,   478,
     481,   482,   483,   486,   487,   491,   492,   495,   496,   514,
     514,   515,   515,   516,   516,   517,   517,   518,   518,   519,
     522,   523,   524,   525,   528,   529,   532,   533,   536,   537,
     538,   539,   540,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   556,   559,   560,   561,   562,   565,
     566,   569,   570,   571,   572,   573,   574,   577,   578,   579,
     582,   583,   584,   585,   586,   588,   589,   590,   591,   592,
     595,   596,   599,   600,   601,   621,   624,   625,   628,   629,
     630,   632,   635,   636,   640,   641,   644,   645,   648,   649,
     664,   665,   668,   669,   670,   671,   674,   675,   678,   679,
     680,   681,   684,   685,   688,   689,   692,   693,   694,   709,
     708,   712,   711,   727,   727,   728,   728,   732,   733,   736,
     736,   737,   737,   738,   738,   739,   739,   742,   743,   746,
     747,   747,   750,   751,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   787,   788,   791,   806,   807,   819,   820,
     821,   822,   839,   842,   843,   844,   847,   848,   851,   852,
     865,   882,   896,   909,   922,   923,   935,   952,   969,   970,
     973,   974,   977,   978,   979,   980,   981,   982,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1014,  1015,  1016,  1017,
    1018,  1019,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1035,  1036,  1039,  1040,  1043,  1044,
    1047,  1048
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALSHIFT", "ALWAYS", "ARSHIFT", "ASGN",
  "ASSIGN", "AT", "AUTOMATIC", "BAND", "BBEGIN", "BNAND", "BNOR", "BNXOR",
  "BOR", "BXOR", "CASE", "CASEX", "CASEZ", "COLON", "COMMA", "DEASSIGN",
  "DEFAULT", "DOT", "DPATH", "ELSE", "END", "ENDCASE", "ENDFUNCTION",
  "ENDMODULE", "ENDPRIMITIVE", "ENDSPECIFY", "ENDTASK", "EQ", "EQZ",
  "EVENT", "FOR", "FOREVER", "FORK", "FUNCTION", "GT", "HASH", "HIGHZ0",
  "HIGHZ1", "IF", "INITIALB", "INOUT", "INPUT", "INTEGER", "JOIN", "LARGE",
  "LBRACE", "LBRACK", "LPAREN", "LSHIFT", "LT", "MOD", "MEDIUM", "MODULE",
  "MPATH", "NEGEDGE", "NEZ", "NOT", "OUTPUT", "PARAMETER", "PRIMITIVE",
  "QUEST", "REG", "REPEAT", "SCALAR", "SIGNED", "SMALL", "STRONG0",
  "STRONG1", "SUPPLY0", "SUPPLY1", "TASK", "TRI", "TRI0", "TRI1", "TRIAND",
  "TRIOR", "TRIREG", "WAIT", "WHILE", "WIRE", "POSEDGE", "TRIGGER",
  "RPAREN", "RBRACE", "RBRACK", "SEMI", "REPCAT", "UINV", "RSHIFTEQ",
  "SPECIFY", "SPECPARAM", "WAND", "WOR", "VECTORED", "REAL", "TIME",
  "PULLUP", "PULLDOWN", "PULL0", "PULL1", "WEAK0", "WEAK1", "CMOS",
  "RCMOS", "BUFIF0", "BUFIF1", "NOTIF0", "NOTIF1", "NMOS", "PMOS", "RNMOS",
  "RPMOS", "PRIMAND", "PRIMNAND", "PRIMNOR", "PRIMXOR", "PRIMXNOR", "BUF",
  "PRIMNOT", "TRANIF0", "TRANIF1", "RTRANIF0", "RTRANIF1", "RTRAN", "KWOR",
  "TRAN", "COND", "BREAKPT", "SCRIPT", "BEGINSCRIPT", "ENDSCRIPT", "BOGUS",
  "BOGOCHAR", "INSTANCE", "MEMORY", "NUMBER", "HEX", "SYSLITERAL",
  "LITERAL", "HLITERAL", "STRING", "HDLLINE", "REALNUM", "OR", "AND", "NE",
  "GE", "LE", "RSHIFT", "ADD", "SUB", "MUL", "DIV", "POW", "UNEG", "UPLUS",
  "$accept", "prog", "punits", "punit", "module", "script", "sitems",
  "sitem", "modhead", "$@1", "omparmdecls", "mparmdecls", "mparmdecl",
  "omargs", "margs", "mitems", "mitem", "assign", "parameter", "initial",
  "always", "escript", "$@2", "esitems", "esitem", "gate", "$@3", "$@4",
  "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "inx_gtype", "outx_gtype", "cmos_gtype", "mos_gtype",
  "bif_gtype", "tran_gtype", "trif_gtype", "drstrength", "ginsts", "ginst",
  "oinx_ginsts", "ooutx_ginsts", "inx_ginsts", "outx_ginsts", "inx_ginst",
  "outx_ginst", "inx_named_ginst", "outx_named_ginst", "instance", "$@16",
  "omparmsets", "mparmsets", "mpexprs", "minsts", "minst", "miports",
  "miexprs", "miasgns", "decl", "$@17", "$@18", "$@19", "$@20", "$@21",
  "decltail", "dlits", "dlit", "port_type", "net_type", "reg_type",
  "xreg_type", "netattrs", "netattr", "capsize", "size0", "size1",
  "orange", "range", "specblock", "specitems", "specitem", "ptype",
  "starg", "tgparms", "otgparms", "econd", "event", "delay", "dexpr",
  "odelay", "triggers", "trigger", "userfunc", "$@22", "$@23", "usertask",
  "$@24", "$@25", "taskdecls", "taskdecl", "$@26", "$@27", "$@28", "$@29",
  "taskprotos", "taskproto", "$@30", "oautomatic", "stat", "stats",
  "asgn_stat", "if_stat", "task_stat", "case_stat", "casekw", "caseents",
  "caseent", "for_stat", "while_stat", "forever_stat", "wait_stat",
  "raise_stat", "repeat_stat", "fork_stat", "lval", "lvals", "bval",
  "expr", "catexprs", "catexpr", "exprs", "oexprs", YY_NULLPTR
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417
};
# endif

#define YYPACT_NINF -637

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-637)))

#define YYTABLE_NINF -284

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,    41,   -85,   -65,  -637,    82,    46,  -637,  -637,  -637,
    -637,  -637,    67,  -637,  5011,  -637,  -637,  4747,   145,  4312,
      98,  4673,    20,  -637,  -637,  4673,  -637,  -637,  -637,   124,
      52,   138,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,   152,   153,   152,  -637,  -637,  -637,    -1,   -35,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,    21,    25,   167,   167,   167,   167,
     167,  -637,  -637,  -637,  -637,  -637,   157,   191,  4312,  4312,
    4312,  4312,  4312,  4312,  4312,  4312,  4312,  4312,  -637,  -637,
     233,   252,  -637,  -637,  -637,  4312,  4312,   255,   753,  -637,
     224,   -10,   297,  -637,  -637,  -637,   265,  4673,  -637,     1,
     267,    -7,   269,   278,   282,   -72,  -637,   249,   251,  4673,
    -637,  -637,  -637,   230,  -637,  -637,  -637,   284,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,    30,   255,  -637,    -7,   343,
    -637,  -637,   353,  -637,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,  4312,  -637,  -637,  3223,
     167,  -637,   215,   152,   218,  -637,  -637,    24,  -637,   322,
     426,   312,  -637,  3927,   319,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,    19,   197,   283,  -637,  -637,  -637,  -637,  -637,
    -637,   809,    33,  -637,   880,  -637,  -637,  4312,  4312,  -637,
    -637,  4312,  4312,  4312,  4312,  4312,  4312,  4312,  4312,  4312,
    4312,  4312,  4312,  4312,  4312,  4312,  4312,  4312,  -637,  4312,
    4312,  4312,  4312,  4312,  4312,  4312,  4312,  4312,  4312,  -637,
    3831,  -637,  -637,   240,  4520,    -7,  -637,  4583,  4312,  -637,
    -637,  -637,   354,  4312,  -637,    43,  4312,  4312,  4312,   295,
     298,  4312,  -637,  4312,  -637,  -637,  -637,  4312,  3806,  3806,
     387,  4312,  4312,   359,  -637,  -637,  -637,  -637,   936,   215,
     306,   215,  -637,   215,   152,  -637,   245,   250,   344,  -637,
     346,    -7,   256,   350,  -637,  4877,   358,   273,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,   324,   394,
     398,   401,    -7,   285,   340,  3521,   417,  4312,   294,    -4,
      -4,    -4,    -4,    -4,   296,   438,   186,  -637,  -637,  -637,
     221,  -637,  4312,  4312,  -637,  -637,   424,   357,   361,   648,
       2,     2,  2904,  2904,  3698,  3753,  3698,  3753,   299,   299,
     121,     2,   121,  -637,   299,  1006,  3681,   139,   299,   121,
     121,     2,     4,     4,  -637,  -637,  4312,  4312,   370,   -23,
    -637,  3521,  -637,  -637,  -637,   355,   454,  -637,  1041,     1,
    1112,    -7,  -637,  1168,  1239,  1274,  -637,  -637,   374,   383,
    1345,  4312,  3521,  4312,  1401,  4312,  1471,  1527,  -637,  -637,
    -637,   390,   455,   460,  4312,  3397,  4065,  -637,   341,  -637,
     215,  -637,  -637,  4099,   215,  -637,   431,   400,   440,  4312,
      28,   492,  3944,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  4213,   152,    17,  -637,   167,
     270,   304,  4312,   482,   152,   485,   167,  4312,   488,   152,
     489,  4312,   152,    44,  -637,    90,   101,   106,   107,   457,
    4312,    19,  -637,   367,  -637,  1597,  -637,  4312,  -637,  -637,
    4312,  -637,  4237,  4258,  4312,  3521,  3521,  -637,  -637,  3944,
    4661,  4312,  4312,  -637,   493,  4673,  -637,  4673,  4673,  4673,
     422,   423,  -637,  1634,  1702,  -637,  1807,  -637,  -637,  -637,
     270,   304,  1863,  4312,  4312,   510,   512,  4312,  1880,   148,
    -637,   427,   467,  -637,    36,  1936,  -637,  -637,    -7,  4312,
    -637,   501,   434,   -63,   379,   436,   506,  3521,   475,   273,
    -637,  -637,  -637,  -637,   226,  4312,   476,    26,   443,  -637,
    2041,  4312,   483,    27,   444,   229,   484,    -4,  -637,  -637,
    -637,  -637,  -637,  4312,  3521,  -637,  -637,  -637,  3521,  2097,
    4312,  4312,  3626,  -637,  -637,  2167,     1,   515,  -637,  -637,
    -637,  -637,  -637,  4000,  -637,  -637,  -637,   456,   458,  -637,
    2223,  2293,  4312,  4312,  2330,  -637,   215,  -637,  -637,    36,
    4434,   138,  -637,   152,   235,  -637,   490,   246,  2398,  3944,
     451,  4312,   494,  -637,  4280,  4043,  -637,    26,  -637,   261,
      -7,    -7,   525,  -637,  -637,  -637,    27,  -637,  2458,  4312,
    4312,   528,  -637,  -637,  -637,  -637,  4312,  -637,  2529,  -637,
    2564,  2634,    -7,  -637,  4673,   530,  -637,  -637,  2692,  -637,
    -637,  -637,  -637,  2760,  2865,  -637,  -637,  4434,   262,   152,
     152,   152,  -637,  -637,   518,  -637,    36,   463,    -7,   546,
    -637,  -637,  -637,  3521,  4312,   411,  3521,   412,  -637,   469,
     538,   539,  3521,   154,   485,  -637,   542,   543,    26,   156,
     489,  -637,   545,   547,    27,   263,  -637,  -637,  -637,   478,
    -637,  4673,  4673,  -637,  -637,   540,   481,  -637,  -637,  -637,
     215,  -637,   215,  -637,  -637,    28,  4312,  2921,   516,   521,
    -637,  4312,   552,  -637,   486,   485,  4312,  4312,  -637,  -637,
     487,   489,  4312,  4312,  -637,  -637,  4673,  -637,  -637,  -637,
    -637,   215,   215,   215,   168,  -637,  4434,    -7,  2938,  -637,
    4312,  4312,  3521,   432,  -637,   495,   264,   268,  -637,   496,
    3095,  3112,  -637,  4434,   170,   179,   189,  -637,   548,   280,
    -637,  3269,  3286,   526,  -637,  -637,  -637,  -637,  -637,  -637,
     553,  -637,  -637,  -637,  -637,   579,  -637,  -637,  4312,  -637,
    4312,  3443,  3460,  -637,  -637
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,    12,     0,     0,     6,     8,    36,
      10,    22,     0,     5,     0,     1,     7,     0,    25,     0,
       0,     0,     0,   282,   198,     0,   180,   178,   195,   179,
       0,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   196,   197,    13,    17,    18,    15,    16,
      14,   220,   220,   220,   165,    20,    19,     0,     0,     9,
     226,   103,   104,   109,   110,   111,   112,   105,   106,   107,
     108,    95,    96,    97,    98,    99,   101,   102,   115,   116,
     117,   118,   114,   100,   113,    54,   139,    35,    40,    43,
      38,    39,    47,    42,   253,   253,   253,   253,   253,   253,
     253,    41,    37,    44,    46,    45,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,   378,
     381,   332,   333,   379,   376,     0,     0,   375,     0,    21,
       0,     0,   303,   313,   314,   315,     0,     0,   303,     0,
       0,     0,     0,     0,     0,     0,   300,     0,   332,     0,
     240,   241,    53,     0,   291,   290,   292,     0,   293,   294,
     295,   298,   299,   296,   297,     0,   328,   332,     0,     0,
      52,   181,     0,   182,   194,   192,   193,   186,   188,   187,
     189,   190,   191,   183,   184,   185,     0,   167,   221,     0,
     159,   163,     0,   220,     0,    48,    56,     0,    58,   142,
       0,   252,    75,     0,   252,    83,   252,    85,    87,    89,
      91,    93,     0,     0,     0,   366,   369,   370,   371,   367,
     368,   386,     0,   384,     0,   364,   365,   390,   390,   373,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
       0,   243,   244,     0,     0,     0,   322,     0,     0,   250,
     249,   251,   246,     0,   330,     0,     0,     0,     0,     0,
       0,   390,   311,   390,   310,   301,   286,     0,     0,     0,
       0,     0,     0,     0,   202,   203,   201,   200,     0,     0,
       0,     0,   161,     0,   176,   166,     0,     0,   263,   225,
       0,     0,     0,     0,   227,   283,     0,     0,   214,   219,
     211,   216,   210,   215,   212,   217,   213,   218,     0,     0,
       0,     0,     0,     0,     0,   388,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    31,    33,
       0,    23,     0,     0,   380,   374,   391,     0,     0,     0,
     355,   354,   357,   360,   361,   362,   358,   359,   348,   350,
     344,   353,   345,   356,   351,     0,   343,   342,   349,   346,
     347,   352,   338,   339,   340,   341,     0,     0,     0,     0,
     254,   256,   303,   284,   304,     0,     0,   327,     0,     0,
       0,     0,   329,     0,     0,     0,   324,   325,     0,     0,
       0,     0,   305,     0,     0,     0,     0,     0,   209,   208,
     207,     0,     0,     0,     0,     0,     0,   168,     0,   160,
       0,   164,   177,     0,     0,   170,   259,     0,     0,     0,
       0,     0,   238,    55,    62,    65,    60,    61,    57,    64,
      63,    59,    66,    68,    67,     0,   220,     0,   148,   253,
       0,     0,     0,     0,   220,   126,   253,     0,     0,   220,
     128,     0,   220,     0,   121,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    32,     0,   385,     0,   382,   383,
       0,   334,     0,     0,     0,   258,   257,   245,   242,     0,
       0,     0,     0,   248,     0,     0,   331,     0,     0,     0,
       0,     0,   316,     0,     0,   288,     0,    49,    51,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     174,     0,     0,   267,     0,     0,   233,   232,     0,     0,
     236,   239,     0,   234,     0,     0,   143,   144,   152,     0,
     140,    69,   119,   120,     0,     0,     0,     0,     0,    77,
     389,     0,     0,     0,     0,     0,     0,     0,    86,    88,
      90,    92,    94,     0,    29,    27,    34,   387,   389,     0,
       0,     0,   363,   255,   285,     0,     0,   306,   326,   323,
     321,   309,   308,     0,   287,   289,    50,     0,     0,   222,
       0,     0,     0,     0,     0,   172,     0,   171,   267,     0,
       0,     0,   279,   220,     0,   277,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,   149,     0,    71,     0,
       0,     0,   125,   129,   133,    76,     0,    79,   389,     0,
       0,   127,   131,   135,    84,   124,     0,   122,     0,   337,
       0,     0,     0,   247,     0,     0,   312,   317,     0,   205,
     206,   223,   224,     0,     0,   173,   175,     0,     0,   220,
     220,   220,   275,   268,     0,   280,     0,     0,     0,     0,
     231,   237,   228,   235,     0,     0,   146,     0,   151,     0,
     153,   154,   155,     0,   126,    73,     0,     0,     0,     0,
     128,    81,     0,     0,     0,     0,    28,   335,   336,     0,
     307,     0,     0,   169,   162,     0,     0,   269,   271,   273,
       0,   264,     0,   278,   267,     0,     0,     0,     0,     0,
     150,     0,     0,    70,     0,   126,     0,     0,   130,    78,
       0,   128,     0,     0,   132,   123,     0,   319,   318,   260,
     267,     0,     0,     0,     0,   281,     0,     0,     0,   145,
       0,     0,   156,     0,    72,     0,     0,     0,    80,     0,
     389,   389,   320,     0,     0,     0,     0,   276,     0,     0,
     229,     0,     0,     0,    74,   137,   134,    82,   138,   136,
       0,   270,   272,   274,   266,     0,   147,   157,     0,   262,
       0,     0,     0,   158,   230
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -637,  -637,  -637,   580,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,   108,  -637,  -637,  -637,  -637,   -15,    -3,    -2,
      13,  -637,  -637,  -637,  -637,   275,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,   388,    85,    29,  -636,
    -393,   -34,   -42,  -103,  -107,   266,   274,   286,  -637,  -637,
    -637,  -637,  -637,    55,  -637,  -637,  -637,    14,  -637,  -637,
    -637,  -637,  -637,    83,  -381,  -169,    -6,    10,    11,    12,
     639,  -637,  -637,  -258,  -256,   -48,   303,   293,  -637,  -637,
    -114,    -5,  -637,  -637,  -203,  -637,    18,  -357,   -78,   356,
     114,    15,  -637,  -637,    16,  -637,  -637,  -567,  -637,  -637,
    -637,  -637,  -637,     6,   -59,  -637,  -637,   -18,  -104,  -253,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,   -21,  -295,   -12,   -19,  -637,   271,  -197,
    -180
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    13,    14,    45,     9,    18,
     107,   346,   347,   214,   350,    17,    87,    46,    47,    48,
      49,    92,   198,   315,   448,    93,   627,   694,   735,   333,
     636,   700,   741,   338,   339,   340,   341,   342,   343,    94,
      95,    96,    97,    98,    99,   100,   328,   473,   474,   558,
     564,   632,   641,   633,   642,   634,   643,   101,   199,   317,
     545,   546,   457,   458,   689,   690,   691,    50,   301,   430,
     303,   192,   299,   305,   529,   530,   669,   670,   671,   672,
     174,   297,   421,   329,   330,   187,   188,   103,   197,   314,
     538,   540,   541,   542,   149,   150,   151,   272,   202,   543,
     390,    55,   531,   532,    56,   437,   438,   610,   673,   751,
     752,   753,   720,   614,   615,   722,    57,   394,   264,   153,
     154,   155,   156,   157,   593,   657,   158,   159,   160,   161,
     162,   163,   164,   165,   275,   127,   335,   222,   223,   356,
     357
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   169,    88,   152,   190,   191,   336,   170,    51,   166,
     166,    51,   395,   166,    89,    90,   440,   205,   207,   208,
     209,   210,   211,   306,    52,    53,    54,    52,    53,    54,
      91,   102,   104,   105,   267,   422,   288,   423,   549,   193,
     168,   667,   504,   344,   260,   141,    -3,     1,   358,   401,
     471,    -2,     1,   536,   353,   268,   309,   195,   734,   245,
      11,   245,   139,   139,   401,   567,   498,   139,   499,   310,
     621,    10,   141,   279,   280,   200,   194,    12,   311,   203,
     631,   640,    15,    26,    27,   411,   413,    19,   537,   215,
     216,   217,   218,   219,   220,   221,   224,   225,   226,   765,
      29,   408,   196,   409,   611,     2,   229,   230,   499,   550,
       2,   567,   201,   204,   206,   206,   206,   206,   206,   266,
     274,   312,   567,   354,   232,   166,   233,   567,   567,   166,
     306,   285,   306,   402,   306,   261,   568,   166,   167,   122,
     468,   472,   232,   269,   233,   307,   270,   290,   262,   234,
     271,   235,   236,   237,   238,   239,   166,   756,   255,   256,
     257,   258,   257,   258,   345,   167,   122,   298,   313,   606,
     298,   464,   469,   240,   241,   698,   243,   704,   245,   331,
     242,   304,   569,   773,   289,     3,     4,   106,   166,   606,
     129,   606,   171,   570,   243,   244,   245,   172,   571,   572,
     606,   246,   173,   553,   552,   186,   189,   481,   302,   139,
     606,   212,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   653,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     607,   391,   483,   617,   396,   213,   733,   487,   739,   398,
     487,   433,   166,   166,   400,   166,   676,   403,   404,   405,
     777,   526,   791,   598,   597,   554,   434,   401,   410,   412,
     414,   792,   416,   417,   565,   482,   254,   255,   256,   257,
     258,   793,   487,   676,   487,   487,   348,   227,   500,   487,
     274,   251,   252,   253,   254,   255,   256,   257,   258,   166,
     444,   401,   232,   281,   233,   283,   228,   740,   231,    51,
     484,   463,   445,   446,   319,   628,   259,   263,   645,   265,
     166,   273,   286,   276,   677,    52,    53,    54,   447,   451,
     453,   454,   277,   485,   221,   679,   278,   435,   287,   754,
     242,   282,   349,   284,   321,   293,   323,   318,   769,   291,
     695,   716,   745,   785,   243,   244,   245,   786,   629,   292,
     304,   294,   295,   308,   316,   612,   332,   495,   496,   795,
     774,   775,   776,   337,   399,   351,   325,   320,   327,   322,
     506,   551,   427,   725,   429,   392,   431,   406,   559,   166,
     407,   296,   513,   415,   514,   436,   516,   428,  -265,   709,
     439,   441,   318,   319,   442,   522,   382,   383,   548,   324,
     418,   326,   455,   459,   528,   460,   556,   419,   456,   461,
     535,   562,   462,   391,   566,   475,   476,   477,   478,   466,
     464,   420,   320,   321,   322,   323,   547,   666,   467,   469,
     612,   479,   702,   703,   480,   487,   488,   501,   560,   705,
     489,   527,   252,   253,   254,   255,   256,   257,   258,   497,
     502,   574,   779,   510,   324,   325,   326,   327,   578,   318,
     319,   579,   511,   382,   383,   582,   520,   206,   141,   519,
     391,   521,   585,   412,   206,  -261,   525,   587,   166,   588,
     589,   590,   533,   166,   534,   166,   166,   166,   539,   320,
     321,   322,   323,   555,   600,   601,   557,   612,   604,   561,
     563,   573,   576,   586,   591,   592,   602,   274,   603,   608,
     618,   609,   619,   620,   622,   623,   166,   624,   613,   625,
     630,   324,   325,   326,   327,   635,   644,   639,   646,   766,
     767,   654,   638,   682,   678,   659,   698,   660,   684,   704,
     711,   721,   726,   755,   648,   724,   728,   729,   730,   731,
     732,   650,   651,   736,   737,   675,   742,   746,   743,   749,
     760,   167,   122,   750,   658,   761,   763,   783,   764,   768,
     798,   794,   799,   663,   664,   800,    16,   784,   787,   575,
     449,   334,   674,   693,   699,   738,   647,   744,   166,   465,
     391,   450,   683,   613,   626,   686,   692,   432,   452,   696,
     697,   757,   470,   583,   681,   668,   389,   723,   166,   166,
       0,   717,   718,   719,   486,     0,     0,     0,     0,     0,
       0,   396,     0,     0,     0,     0,   710,     0,     0,     0,
     166,     0,   166,     0,     0,     0,     0,     0,     0,   715,
       0,   232,     0,   233,     0,   166,     0,   274,   234,     0,
     235,   236,   237,   238,   239,   727,   166,     0,   490,     0,
     613,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   240,   241,     0,     0,     0,     0,     0,   242,
       0,     0,     0,   747,   748,     0,     0,     0,     0,   166,
     166,     0,     0,   243,   244,   245,     0,   758,     0,     0,
     246,     0,   762,     0,     0,   247,     0,     0,     0,     0,
       0,     0,     0,   770,   771,     0,     0,     0,   772,     0,
       0,     0,     0,     0,   166,     0,   274,     0,   778,   491,
       0,   781,   782,     0,   166,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   790,   232,     0,   233,     0,
       0,   166,     0,   234,     0,   235,   236,   237,   238,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   801,
       0,   802,     0,     0,     0,     0,     0,   240,   241,     0,
       0,     0,     0,     0,   242,     0,     0,     0,   249,   250,
     251,   252,   253,   254,   492,   493,   257,   258,   243,   244,
     245,     0,   232,     0,   233,   246,     0,     0,     0,   234,
     247,   235,   236,   237,   238,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,   241,   248,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,     0,     0,   243,   244,   245,     0,     0,     0,
       0,   246,     0,     0,     0,     0,   247,     0,     0,     0,
       0,     0,     0,   232,     0,   233,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,     0,     0,     0,
       0,     0,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   240,   241,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244,   245,     0,   232,
       0,   233,   246,     0,     0,     0,   234,   247,   235,   236,
     237,   238,   239,     0,     0,     0,   424,     0,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   355,
     240,   241,     0,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   244,   245,     0,     0,     0,     0,   246,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,   232,
       0,   233,     0,     0,     0,     0,   234,     0,   235,   236,
     237,   238,   239,     0,     0,     0,   494,     0,     0,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     240,   241,     0,     0,   232,     0,   233,   242,     0,     0,
       0,   234,     0,   235,   236,   237,   238,   239,     0,     0,
       0,   243,   244,   245,     0,     0,     0,     0,   246,     0,
       0,     0,     0,   247,     0,   240,   241,     0,     0,     0,
       0,     0,   242,     0,     0,     0,   249,   250,   251,   252,
     253,   254,   425,   426,   257,   258,   243,   244,   245,     0,
       0,     0,     0,   246,     0,     0,     0,     0,   247,     0,
       0,     0,     0,     0,     0,   232,     0,   233,     0,     0,
       0,     0,   234,     0,   235,   236,   237,   238,   239,     0,
     503,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   240,   241,     0,     0,
       0,     0,     0,   242,     0,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   243,   244,   245,
       0,   232,     0,   233,   246,     0,     0,     0,   234,   247,
     235,   236,   237,   238,   239,     0,     0,     0,     0,     0,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   505,   240,   241,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   244,   245,     0,     0,     0,     0,
     246,     0,     0,     0,     0,   247,     0,     0,     0,     0,
       0,     0,   232,     0,   233,     0,     0,     0,     0,   234,
       0,   235,   236,   237,   238,   239,     0,   507,     0,     0,
       0,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   240,   241,     0,     0,   232,     0,   233,
     242,     0,     0,     0,   234,     0,   235,   236,   237,   238,
     239,     0,     0,     0,   243,   244,   245,     0,     0,     0,
       0,   246,     0,     0,     0,     0,   247,     0,   240,   241,
       0,     0,     0,     0,     0,   242,     0,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   508,   243,
     244,   245,     0,     0,     0,     0,   246,     0,     0,     0,
       0,   247,     0,     0,     0,     0,     0,     0,   232,     0,
     233,     0,     0,     0,     0,   234,     0,   235,   236,   237,
     238,   239,     0,   509,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   240,
     241,     0,     0,     0,     0,     0,   242,     0,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     243,   244,   245,     0,   232,     0,   233,   246,     0,     0,
       0,   234,   247,   235,   236,   237,   238,   239,     0,     0,
       0,     0,     0,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   512,   240,   241,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   244,   245,     0,
       0,     0,     0,   246,     0,     0,     0,     0,   247,     0,
       0,     0,     0,     0,   232,     0,   233,     0,     0,     0,
       0,   234,     0,   235,   236,   237,   238,   239,     0,     0,
       0,     0,     0,   515,     0,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   240,   241,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   244,   245,     0,
     232,     0,   233,   246,     0,     0,     0,   234,   247,   235,
     236,   237,   238,   239,     0,     0,     0,     0,     0,     0,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   240,   241,   517,     0,     0,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,   245,     0,     0,     0,     0,   246,
       0,     0,     0,     0,   247,     0,     0,     0,     0,     0,
     232,     0,   233,     0,     0,     0,     0,   234,     0,   235,
     236,   237,   238,   239,     0,     0,     0,     0,     0,   518,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   240,   241,     0,     0,     0,     0,   232,   242,   233,
       0,     0,     0,     0,   234,     0,   235,   236,   237,   238,
     239,     0,   243,   244,   245,     0,     0,     0,     0,   246,
       0,     0,     0,     0,   247,     0,     0,     0,   240,   241,
       0,     0,     0,     0,     0,   242,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   577,     0,   243,
     244,   245,     0,     0,     0,     0,   246,     0,     0,     0,
       0,   247,     0,     0,     0,   232,     0,   233,     0,     0,
       0,     0,   234,     0,   235,   236,   237,   238,   239,     0,
       0,     0,     0,     0,     0,     0,   594,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   240,   241,     0,     0,
       0,     0,     0,   242,     0,     0,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   243,   244,   245,
       0,     0,     0,     0,   246,     0,     0,     0,     0,   247,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   595,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     232,     0,   233,     0,     0,     0,     0,   234,     0,   235,
     236,   237,   238,   239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   240,   241,     0,     0,     0,     0,     0,   242,     0,
       0,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   243,   244,   245,     0,   232,     0,   233,   246,
       0,     0,     0,   234,   247,   235,   236,   237,   238,   239,
       0,     0,     0,   232,     0,   233,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,   240,   241,   596,
       0,     0,     0,     0,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,   241,     0,     0,   243,   244,
     245,   242,     0,     0,     0,   246,     0,     0,     0,     0,
     247,     0,     0,     0,     0,   243,   244,   245,     0,   232,
       0,   233,   246,     0,     0,     0,   234,   247,   235,   236,
     237,   238,   239,     0,   599,     0,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,     0,
     240,   241,   605,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   244,   245,     0,     0,     0,     0,   246,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,   616,     0,     0,     0,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,     0,     0,   232,     0,   233,     0,     0,     0,
       0,   234,     0,   235,   236,   237,   238,   239,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   240,   241,     0,     0,     0,
       0,     0,   242,     0,     0,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   243,   244,   245,     0,
     232,     0,   233,   246,     0,     0,     0,   234,   247,   235,
     236,   237,   238,   239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     637,   240,   241,     0,     0,     0,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,   245,     0,     0,     0,     0,   246,
       0,     0,     0,     0,   247,     0,     0,     0,     0,     0,
     232,     0,   233,     0,     0,     0,     0,   234,     0,   235,
     236,   237,   238,   239,     0,     0,     0,     0,   649,     0,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   240,   241,     0,     0,     0,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,   245,     0,   232,     0,   233,   246,
       0,     0,     0,   234,   247,   235,   236,   237,   238,   239,
       0,     0,     0,     0,     0,     0,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   240,   241,   652,
       0,     0,     0,     0,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,   244,
     245,     0,     0,     0,     0,   246,     0,     0,     0,     0,
     247,     0,     0,     0,     0,     0,   232,     0,   233,     0,
       0,     0,     0,   234,     0,   235,   236,   237,   238,   239,
       0,     0,     0,     0,   661,     0,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   240,   241,     0,
       0,     0,     0,   232,   242,   233,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,     0,   243,   244,
     245,     0,     0,     0,     0,   246,     0,     0,     0,     0,
     247,     0,     0,     0,   240,   241,     0,     0,     0,     0,
       0,   242,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   662,   243,   244,   245,     0,     0,
       0,     0,   246,     0,     0,     0,     0,   247,     0,     0,
       0,   232,     0,   233,     0,     0,     0,     0,   234,     0,
     235,   236,   237,   238,   239,     0,     0,     0,     0,     0,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,   241,     0,     0,     0,     0,     0,   242,
       0,     0,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   243,   244,   245,     0,     0,     0,     0,
     246,   232,     0,   233,     0,   247,     0,     0,   234,     0,
     235,   236,   237,   238,   239,     0,     0,     0,     0,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     680,     0,   240,   241,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   244,   245,     0,     0,     0,     0,
     246,     0,     0,     0,     0,   247,     0,     0,     0,     0,
       0,     0,   232,     0,   233,     0,     0,     0,     0,   234,
       0,   235,   236,   237,   238,   239,     0,   701,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
       0,     0,     0,   240,   241,     0,     0,   232,     0,   233,
     242,     0,     0,     0,   234,     0,   235,   236,   237,   238,
     239,     0,     0,     0,   243,   244,   245,     0,     0,     0,
       0,   246,     0,     0,     0,     0,   247,     0,   240,   241,
       0,     0,     0,     0,     0,   242,     0,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   706,   243,
     244,   245,     0,     0,     0,     0,   246,     0,     0,     0,
       0,   247,     0,     0,     0,     0,     0,   232,     0,   233,
       0,     0,     0,     0,   234,     0,   235,   236,   237,   238,
     239,     0,     0,     0,     0,   707,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   240,   241,
       0,     0,     0,     0,     0,   242,     0,     0,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   243,
     244,   245,     0,     0,     0,   232,   246,   233,     0,     0,
       0,   247,   234,     0,   235,   236,   237,   238,   239,     0,
       0,     0,   712,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   708,   240,   241,     0,     0,
       0,     0,     0,   242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,   245,
       0,     0,     0,     0,   246,     0,     0,     0,     0,   247,
       0,     0,     0,   232,     0,   233,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,     0,     0,     0,
       0,     0,     0,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   240,   241,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244,   245,     0,     0,
       0,     0,   246,     0,     0,     0,     0,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   713,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   232,     0,
     233,     0,     0,     0,     0,   234,     0,   235,   236,   237,
     238,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   240,
     241,     0,     0,     0,     0,     0,   242,   232,     0,   233,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     243,   244,   245,     0,   232,     0,   233,   246,     0,     0,
       0,   234,   247,   235,   236,   237,   238,   239,   240,   241,
       0,   232,     0,   233,     0,   242,     0,     0,   234,     0,
     235,   236,   237,   238,   239,   240,   241,   714,     0,   243,
     244,   245,   242,     0,     0,     0,   246,     0,     0,     0,
       0,     0,   240,   241,     0,     0,   243,   244,   245,   242,
       0,     0,     0,   246,     0,     0,     0,     0,   247,     0,
       0,     0,     0,   243,   244,   245,     0,     0,     0,     0,
     246,     0,     0,     0,     0,   247,     0,     0,     0,     0,
     759,     0,     0,     0,     0,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,     0,     0,
     780,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,     0,     0,     0,     0,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,     0,     0,     0,     0,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   232,     0,
     233,     0,     0,     0,     0,   234,     0,   235,   236,   237,
     238,   239,     0,     0,     0,   232,     0,   233,     0,     0,
       0,     0,   234,     0,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   240,   241,     0,     0,
     243,   244,   245,   242,     0,     0,     0,   246,     0,     0,
       0,     0,   247,     0,     0,     0,     0,   243,   244,   245,
       0,     0,     0,     0,   246,     0,     0,     0,     0,   247,
       0,     0,     0,     0,   788,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   789,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   109,   110,   111,   112,   113,
       0,     0,     0,     0,     0,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,     0,     0,
       0,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   232,     0,   233,   114,     0,   115,     0,   234,
       0,   235,   236,   237,   238,   239,   116,     0,     0,   232,
       0,   233,     0,     0,     0,     0,   234,     0,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     240,   241,     0,     0,   243,   244,   245,   242,     0,     0,
       0,   246,     0,     0,     0,     0,   247,     0,     0,     0,
       0,   243,   244,   245,     0,     0,     0,     0,   246,     0,
       0,     0,     0,   247,     0,     0,     0,     0,   796,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,     0,   124,     0,     0,   797,     0,     0,     0,   125,
     126,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,   109,
     110,   111,   112,   113,     0,     0,     0,   523,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,     0,     0,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   232,     0,   233,   114,
       0,   115,     0,   234,     0,   235,   236,   237,   238,   239,
     116,     0,     0,   232,     0,   233,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,   242,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   240,   241,     0,     0,   243,   244,
     245,   242,     0,     0,     0,   246,     0,     0,     0,     0,
     247,     0,     0,     0,     0,   243,   244,   245,     0,     0,
       0,     0,   246,     0,   232,     0,   233,   247,     0,     0,
       0,   234,   803,   235,   236,   237,   238,   239,     0,   118,
     119,   120,   121,   122,   123,     0,   124,     0,     0,     0,
       0,     0,   804,   125,   126,   240,   241,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   244,   245,     0,
       0,     0,     0,   246,     0,     0,     0,     0,   247,     0,
       0,     0,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   232,
       0,   233,     0,     0,     0,     0,   234,     0,   235,   236,
     237,   238,   239,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     240,   241,     0,     0,     0,     0,     0,   242,     0,     0,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   243,   244,   245,   232,     0,   233,     0,   246,     0,
       0,   234,     0,   235,   236,   237,   238,   239,     0,     0,
       0,   232,     0,   233,     0,     0,     0,     0,   234,     0,
     235,     0,   237,     0,   239,   240,   241,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,   241,     0,     0,   243,   244,   245,   242,
       0,     0,     0,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   244,   245,   232,     0,   233,     0,
     246,     0,     0,   234,     0,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   240,   241,     0,
       0,     0,     0,     0,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,   244,
     245,     0,     0,     0,   131,   246,   108,     0,   109,   110,
     111,   112,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   108,     0,   109,   110,   111,   112,   113,   139,     0,
     251,   252,   253,   254,   255,   256,   257,   258,   114,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,   115,     0,     0,     0,     0,
       0,     0,   386,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,     0,     0,   387,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,   109,
     110,   111,   112,   113,     0,     0,     0,     0,   118,   119,
     120,   121,   122,   123,   108,   124,   109,   110,   111,   112,
     113,     0,   125,   126,     0,     0,     0,     0,     0,     0,
     318,   319,     0,   118,   119,   120,   121,   122,   123,   114,
     124,   115,     0,     0,     0,     0,     0,   125,   126,   388,
     116,     0,     0,     0,     0,     0,   114,     0,   115,     0,
     320,   321,   322,   323,     0,   386,     0,   116,     0,     0,
     108,     0,   109,   110,   111,   112,   113,     0,     0,     0,
       0,   117,     0,   655,     0,     0,     0,     0,   656,     0,
       0,   387,   324,   325,   326,   327,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   108,   115,   109,   110,   111,   112,   113,
       0,     0,     0,   116,     0,     0,     0,   687,     0,   118,
     119,   120,   121,   122,   123,   108,   124,   109,   110,   111,
     112,   113,     0,   125,   126,   524,   118,   119,   120,   121,
     122,   123,     0,   124,   117,   114,     0,   115,     0,     0,
     125,   126,     0,     0,     0,     0,   116,     0,     0,   108,
       0,   109,   110,   111,   112,   113,     0,   114,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   688,     0,     0,     0,     0,   117,     0,     0,
       0,   139,   118,   119,   120,   121,   122,   123,     0,   124,
       0,   114,     0,   115,     0,     0,   125,   126,     0,   117,
       0,     0,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,     0,   124,   117,     0,     0,     0,     0,     0,   125,
     126,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,     0,   124,     0,     0,     0,     0,     0,
       0,   125,   126,   108,     0,   109,   110,   111,   112,   113,
       0,     0,     0,     0,     0,     0,     0,   544,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   108,   124,   109,
     110,   111,   112,   113,     0,   125,   126,   580,     0,     0,
       0,     0,     0,     0,     0,   114,     0,   115,   108,     0,
     109,   110,   111,   112,   113,     0,   116,     0,   581,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     108,   115,   109,   110,   111,   112,   113,     0,     0,     0,
     116,     0,     0,     0,   685,     0,     0,   117,     0,     0,
     114,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,   116,   108,     0,   109,   110,   111,   112,   113,     0,
       0,   117,   114,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,     0,   124,     0,   114,     0,   115,     0,     0,   125,
     126,     0,     0,     0,   117,   116,     0,     0,     0,   118,
     119,   120,   121,   122,   123,     0,   124,     0,     0,     0,
       0,     0,     0,   125,   126,     0,     0,     0,     0,     0,
     118,   119,   120,   121,   122,   123,   117,   124,     0,     0,
       0,     0,     0,     0,   125,   126,     0,     0,     0,     0,
       0,     0,   118,   119,   120,   121,   122,   123,     0,   124,
       0,     0,     0,     0,     0,   130,   125,   126,     0,     0,
       0,     0,   131,     0,     0,   132,     0,     0,     0,     0,
       0,   133,   134,   135,   118,   119,   120,   121,   122,   123,
       0,   124,     0,     0,     0,     0,     0,     0,   125,   126,
      24,   136,   137,   138,     0,     0,   139,     0,     0,   140,
       0,    26,    27,    28,     0,     0,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,    31,   142,     0,     0,     0,     0,     0,    32,
      33,     0,    34,    35,    36,    37,    38,    39,   143,   144,
      40,   130,   145,     0,     0,     0,   146,     0,   131,     0,
       0,   132,    41,    42,     0,    43,    44,   133,   134,   135,
       0,     0,     0,     0,     0,     0,     0,   393,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   136,   137,   138,
       0,     0,   139,     0,     0,   140,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,     0,     0,   147,   148,
     122,     0,     0,     0,   130,     0,     0,     0,     0,   142,
       0,   131,     0,     0,   132,     0,     0,     0,     0,     0,
     133,   134,   135,     0,   143,   144,     0,     0,   145,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
     136,   137,   138,     0,     0,   139,     0,     0,   140,     0,
       0,     0,     0,   397,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,     0,   147,   148,   122,   143,   144,   131,
       0,   145,   132,     0,   130,   146,     0,     0,   133,   134,
     135,   131,     0,     0,   132,     0,     0,     0,   584,     0,
     133,   134,   135,     0,     0,     0,     0,     0,   136,   137,
     138,     0,     0,   139,     0,     0,   140,     0,     0,     0,
     136,   137,   138,   141,     0,   139,     0,     0,   140,     0,
       0,     0,     0,     0,     0,   141,     0,   147,   148,   122,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,   143,   144,     0,    58,   145,
       0,    21,     0,   146,    22,     0,    23,   143,   144,     0,
       0,   145,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,    24,     0,     0,     0,  -283,     0,     0,
       0,     0,     0,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   148,   122,     0,     0,
       0,    29,    30,     0,     0,    31,     0,   147,   148,   122,
       0,     0,    32,    33,  -283,    34,    35,    36,    37,    38,
      39,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,    41,    42,     0,    43,    44,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    21,     0,    85,    22,     0,    23,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,    31,     0,     0,     0,     0,
       0,     0,    32,    33,     0,    34,    35,    36,    37,    38,
      39,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,    41,    42,     0,    43,    44,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,   -11,    20,     0,   443,    21,     0,     0,    22,     0,
      23,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,  -283,     0,     0,     0,     0,     0,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,    31,
       0,     0,     0,     0,     0,     0,    32,    33,  -283,    34,
      35,    36,    37,    38,    39,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,     0,    43,    44
};

static const yytype_int16 yycheck[] =
{
      19,    22,    17,    21,    52,    53,   203,    25,    14,    21,
      22,    17,   265,    25,    17,    17,   311,    95,    96,    97,
      98,    99,   100,   192,    14,    14,    14,    17,    17,    17,
      17,    17,    17,    17,   138,   293,     6,   293,    21,    40,
      22,   608,   399,    24,    54,    52,     0,     1,   228,    21,
      54,     0,     1,    25,    21,    54,    32,    92,   694,    57,
     145,    57,    42,    42,    21,    21,    89,    42,   131,    45,
     133,    30,    52,   145,   146,    54,    77,   142,    54,    54,
      54,    54,     0,    47,    48,   288,   289,    20,    60,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   735,
      64,   281,   137,   283,    68,    59,   125,   126,   131,    92,
      59,    21,    94,    95,    96,    97,    98,    99,   100,   137,
     141,    97,    21,    90,     3,   137,     5,    21,    21,   141,
     299,   149,   301,    90,   303,   145,    92,   149,   145,   146,
     337,   145,     3,   142,     5,   193,   145,   168,   158,    10,
     149,    12,    13,    14,    15,    16,   168,   724,   156,   157,
     158,   159,   158,   159,   145,   145,   146,   186,   144,    21,
     189,   145,   145,    34,    35,    21,    55,    21,    57,   200,
      41,   145,    92,   750,   154,   134,   135,    42,   200,    21,
      92,    21,    68,    92,    55,    56,    57,   145,    92,    92,
      21,    62,    64,   461,   460,    53,    53,    21,   190,    42,
      21,    54,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   586,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
      92,   260,    21,   538,   265,    54,    92,    21,    92,   268,
      21,     6,   264,   265,   273,   267,    21,   276,   277,   278,
      92,   430,    92,   521,   520,   462,    21,    21,   287,   288,
     289,    92,   291,   292,   471,    89,   155,   156,   157,   158,
     159,    92,    21,    21,    21,    21,    89,    54,   392,    21,
     311,   152,   153,   154,   155,   156,   157,   158,   159,   311,
     315,    21,     3,    54,     5,    54,    54,   700,    53,   315,
      89,   332,   315,   315,    44,    89,    92,    20,    89,    54,
     332,    54,    92,    54,    89,   315,   315,   315,   315,   315,
     315,   315,    54,   352,   353,    89,    54,    92,    54,   720,
      41,    92,   145,    92,    74,    54,    76,    43,   741,     6,
      89,    89,    89,    89,    55,    56,    57,    89,   555,     6,
     145,    70,    71,   145,    42,   534,    54,   386,   387,    89,
     751,   752,   753,    54,    20,    92,   106,    73,   108,    75,
     401,   459,   299,   678,   301,   145,   303,    92,   466,   401,
      92,   100,   411,     6,   413,   145,   415,    91,    54,   652,
      54,   145,    43,    44,    54,   424,   425,   426,   456,   105,
      51,   107,    54,    89,   433,    21,   464,    58,   145,    21,
     439,   469,    21,   442,   472,   340,   341,   342,   343,    89,
     145,    72,    73,    74,    75,    76,   455,   606,    21,   145,
     609,   145,   639,   640,     6,    21,    89,    92,   467,   646,
      89,   433,   153,   154,   155,   156,   157,   158,   159,    89,
       6,   480,   757,    89,   105,   106,   107,   108,   487,    43,
      44,   490,    89,   492,   493,   494,    21,   459,    52,    89,
     499,    21,   501,   502,   466,    54,   145,   505,   500,   507,
     508,   509,    92,   505,    54,   507,   508,   509,     6,    73,
      74,    75,    76,    21,   523,   524,    21,   676,   527,    21,
      21,    54,   145,    20,    92,    92,     6,   538,     6,    92,
     539,    54,    21,    89,   145,    89,   538,    21,   534,    54,
      54,   105,   106,   107,   108,    92,    92,    54,    54,   736,
     737,    26,   561,    92,    54,    89,    21,    89,    54,    21,
      20,    33,     6,   722,   573,    92,   145,   145,    89,    21,
      21,   580,   581,    21,    21,   613,    21,    89,    21,    29,
      54,   145,   146,    92,   593,    54,    24,   145,    92,    92,
      54,    33,    29,   602,   603,     6,     6,    92,    92,   481,
     315,   203,   610,   627,   636,   698,   567,   704,   610,   333,
     619,   315,   621,   609,   549,   624,   625,   304,   315,   630,
     631,   725,   338,   499,   619,   609,   260,   676,   630,   631,
      -1,   669,   670,   671,   353,    -1,    -1,    -1,    -1,    -1,
      -1,   652,    -1,    -1,    -1,    -1,   654,    -1,    -1,    -1,
     652,    -1,   654,    -1,    -1,    -1,    -1,    -1,    -1,   667,
      -1,     3,    -1,     5,    -1,   667,    -1,   678,    10,    -1,
      12,    13,    14,    15,    16,   684,   678,    -1,    20,    -1,
     676,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,   711,   712,    -1,    -1,    -1,    -1,   711,
     712,    -1,    -1,    55,    56,    57,    -1,   726,    -1,    -1,
      62,    -1,   731,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   742,   743,    -1,    -1,    -1,   746,    -1,
      -1,    -1,    -1,    -1,   746,    -1,   757,    -1,   756,    91,
      -1,   760,   761,    -1,   756,   757,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   773,     3,    -1,     5,    -1,
      -1,   773,    -1,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   798,
      -1,   800,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,    55,    56,
      57,    -1,     3,    -1,     5,    62,    -1,    -1,    -1,    10,
      67,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    92,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,     3,
      -1,     5,    62,    -1,    -1,    -1,    10,    67,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    89,
      34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
      34,    35,    -1,    -1,     3,    -1,     5,    41,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    16,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    -1,    55,    56,    57,
      -1,     3,    -1,     5,    62,    -1,    -1,    -1,    10,    67,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    89,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    16,    -1,    89,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    -1,    34,    35,    -1,    -1,     3,    -1,     5,
      41,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,    89,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    16,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
      55,    56,    57,    -1,     3,    -1,     5,    62,    -1,    -1,
      -1,    10,    67,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    89,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    92,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
       3,    -1,     5,    62,    -1,    -1,    -1,    10,    67,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    34,    35,    92,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    92,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    34,    35,    -1,    -1,    -1,    -1,     3,    41,     5,
      -1,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      16,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    90,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    55,    56,    57,    -1,     3,    -1,     5,    62,
      -1,    -1,    -1,    10,    67,    12,    13,    14,    15,    16,
      -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    34,    35,    92,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    55,    56,
      57,    41,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,     3,
      -1,     5,    62,    -1,    -1,    -1,    10,    67,    12,    13,
      14,    15,    16,    -1,    91,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    -1,    -1,    -1,
      34,    35,    92,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,    -1,    89,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    55,    56,    57,    -1,
       3,    -1,     5,    62,    -1,    -1,    -1,    10,    67,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    91,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,     3,    -1,     5,    62,
      -1,    -1,    -1,    10,    67,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    34,    35,    92,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    91,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    34,    35,    -1,
      -1,    -1,    -1,     3,    41,     5,    -1,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,    91,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,     3,    -1,     5,    -1,    67,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
      92,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    16,    -1,    89,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,     3,    -1,     5,
      41,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,    89,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    55,
      56,    57,    -1,    -1,    -1,     3,    62,     5,    -1,    -1,
      -1,    67,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    20,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    -1,    91,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,     3,    -1,     5,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
      55,    56,    57,    -1,     3,    -1,     5,    62,    -1,    -1,
      -1,    10,    67,    12,    13,    14,    15,    16,    34,    35,
      -1,     3,    -1,     5,    -1,    41,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    34,    35,    92,    -1,    55,
      56,    57,    41,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    55,    56,    57,    41,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    16,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      55,    56,    57,    41,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,     3,    -1,     5,    52,    -1,    54,    -1,    10,
      -1,    12,    13,    14,    15,    16,    63,    -1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,    13,
      14,    15,    16,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      34,    35,    -1,    -1,    55,    56,    57,    41,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
     147,    -1,   149,    -1,    -1,    89,    -1,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,     3,    -1,     5,    52,
      -1,    54,    -1,    10,    -1,    12,    13,    14,    15,    16,
      63,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    34,    35,    -1,    -1,    55,    56,
      57,    41,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,     3,    -1,     5,    67,    -1,    -1,
      -1,    10,    89,    12,    13,    14,    15,    16,    -1,   142,
     143,   144,   145,   146,   147,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    92,   156,   157,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    55,    56,    57,     3,    -1,     5,    -1,    62,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,
      12,    -1,    14,    -1,    16,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    55,    56,    57,    41,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,     3,    -1,     5,    -1,
      62,    -1,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,     8,    62,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    10,    -1,    12,    13,    14,    15,    16,    42,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,   147,    10,   149,    12,    13,    14,    15,
      16,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,   142,   143,   144,   145,   146,   147,    52,
     149,    54,    -1,    -1,    -1,    -1,    -1,   156,   157,   158,
      63,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      73,    74,    75,    76,    -1,    61,    -1,    63,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    94,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    87,   105,   106,   107,   108,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    10,    54,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    24,    -1,   142,
     143,   144,   145,   146,   147,    10,   149,    12,    13,    14,
      15,    16,    -1,   156,   157,    20,   142,   143,   144,   145,
     146,   147,    -1,   149,    94,    52,    -1,    54,    -1,    -1,
     156,   157,    -1,    -1,    -1,    -1,    63,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    16,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    42,   142,   143,   144,   145,   146,   147,    -1,   149,
      -1,    52,    -1,    54,    -1,    -1,   156,   157,    -1,    94,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
     147,    -1,   149,    94,    -1,    -1,    -1,    -1,    -1,   156,
     157,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,   147,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,   156,   157,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,   142,   143,   144,   145,   146,   147,    10,   149,    12,
      13,    14,    15,    16,    -1,   156,   157,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    10,    -1,
      12,    13,    14,    15,    16,    -1,    63,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      10,    54,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    24,    -1,    -1,    94,    -1,    -1,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    94,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,   142,   143,   144,   145,   146,
     147,    -1,   149,    -1,    52,    -1,    54,    -1,    -1,   156,
     157,    -1,    -1,    -1,    94,    63,    -1,    -1,    -1,   142,
     143,   144,   145,   146,   147,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,   147,    94,   149,    -1,    -1,
      -1,    -1,    -1,    -1,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,   147,    -1,   149,
      -1,    -1,    -1,    -1,    -1,     1,   156,   157,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,   142,   143,   144,   145,   146,   147,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      -1,    47,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,     1,    88,    -1,    -1,    -1,    92,    -1,     8,    -1,
      -1,    11,    98,    99,    -1,   101,   102,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    69,
      -1,     8,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    84,    85,    -1,    -1,    88,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,   144,   145,   146,    84,    85,     8,
      -1,    88,    11,    -1,     1,    92,    -1,    -1,    17,    18,
      19,     8,    -1,    -1,    11,    -1,    -1,    -1,    27,    -1,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      37,    38,    39,    52,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,   144,   145,   146,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    84,    85,    -1,     1,    88,
      -1,     4,    -1,    92,     7,    -1,     9,    84,    85,    -1,
      -1,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    64,    65,    -1,    -1,    68,    -1,   144,   145,   146,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,     4,    -1,   136,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,     0,     1,    -1,   137,     4,    -1,    -1,     7,    -1,
       9,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,   101,   102
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    59,   134,   135,   164,   165,   166,   167,   171,
      30,   145,   142,   168,   169,     0,   166,   178,   172,    20,
       1,     4,     7,     9,    36,    46,    47,    48,    49,    64,
      65,    68,    75,    76,    78,    79,    80,    81,    82,    83,
      86,    98,    99,   101,   102,   170,   180,   181,   182,   183,
     230,   239,   240,   241,   242,   264,   267,   279,     1,    30,
      96,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   136,   145,   179,   180,   181,
     182,   183,   184,   188,   202,   203,   204,   205,   206,   207,
     208,   220,   230,   250,   264,   267,    42,   173,    10,    12,
      13,    14,    15,    16,    52,    54,    63,    94,   142,   143,
     144,   145,   146,   147,   149,   156,   157,   298,   299,    92,
       1,     8,    11,    17,    18,    19,    37,    38,    39,    42,
      45,    52,    69,    84,    85,    88,    92,   144,   145,   257,
     258,   259,   280,   282,   283,   284,   285,   286,   289,   290,
     291,   292,   293,   294,   295,   296,   298,   145,   259,   296,
     280,    68,   145,    64,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,    53,   248,   249,    53,
     248,   248,   234,    40,    77,    92,   137,   251,   185,   221,
      54,   259,   261,    54,   259,   261,   259,   261,   261,   261,
     261,   261,    54,    54,   176,   299,   299,   299,   299,   299,
     299,   299,   300,   301,   299,   299,   299,    54,    54,   299,
     299,    53,     3,     5,    10,    12,    13,    14,    15,    16,
      34,    35,    41,    55,    56,    57,    62,    67,    92,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    92,
      54,   145,   158,    20,   281,    54,   280,   281,    54,   142,
     145,   149,   260,    54,   296,   297,    54,    54,    54,   145,
     146,    54,    92,    54,    92,   280,    92,    54,     6,   154,
     296,     6,     6,    54,    70,    71,   100,   244,   299,   235,
     158,   231,   259,   233,   145,   236,   238,   248,   145,    32,
      45,    54,    97,   144,   252,   186,    42,   222,    43,    44,
      73,    74,    75,    76,   105,   106,   107,   108,   209,   246,
     247,   296,    54,   192,   209,   299,   302,    54,   196,   197,
     198,   199,   200,   201,    24,   145,   174,   175,    89,   145,
     177,    92,    52,    21,    90,    89,   302,   303,   303,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,    61,    87,   158,   262,
     263,   299,   145,    27,   280,   282,   296,    50,   299,    20,
     299,    21,    90,   299,   299,   299,    92,    92,   303,   303,
     299,   257,   299,   257,   299,     6,   299,   299,    51,    58,
      72,   245,   246,   247,    20,   156,   157,   236,    91,   236,
     232,   236,   249,     6,    21,    92,   145,   268,   269,    54,
     297,   145,    54,   137,   180,   181,   182,   183,   187,   188,
     220,   230,   250,   264,   267,    54,   145,   225,   226,    89,
      21,    21,    21,   296,   145,   218,    89,    21,   302,   145,
     219,    54,   145,   210,   211,   210,   210,   210,   210,   145,
       6,    21,    89,    21,    89,   299,   301,    21,    89,    89,
      20,    91,   156,   157,    20,   299,   299,    89,    89,   131,
     281,    92,     6,    89,   260,    89,   296,    89,    89,    89,
      89,    89,    89,   299,   299,    92,   299,    92,    92,    89,
      21,    21,   299,    20,    20,   145,   238,   259,   299,   237,
     238,   265,   266,    92,    54,   299,    25,    60,   253,     6,
     254,   255,   256,   262,    24,   223,   224,   299,   248,    21,
      92,   261,   247,   246,   302,    21,   248,    21,   212,   261,
     299,    21,   248,    21,   213,   302,   248,    21,    92,    92,
      92,    92,    92,    54,   299,   175,   145,    90,   299,   299,
      20,    20,   299,   263,    27,   299,    20,   280,   280,   280,
     280,    92,    92,   287,    92,    92,    92,   247,   246,    91,
     299,   299,     6,     6,   299,    92,    21,    92,    92,    54,
     270,    68,   238,   239,   276,   277,    89,   297,   299,    21,
      89,   133,   145,    89,    21,    54,   226,   189,    89,   302,
      54,    54,   214,   216,   218,    92,   193,    89,   299,    54,
      54,   215,   217,   219,    92,    89,    54,   211,   299,    91,
     299,   299,    92,   260,    26,    23,    28,   288,   299,    89,
      89,    91,    91,   299,   299,    92,   238,   270,   276,   239,
     240,   241,   242,   271,   280,   248,    21,    89,    54,    89,
      92,   254,    92,   299,    54,    24,   299,    24,    89,   227,
     228,   229,   299,   214,   190,    89,   296,   296,    21,   215,
     194,    89,   302,   302,    21,   302,    89,    91,    91,   282,
     280,    20,    20,    92,    92,   280,    89,   248,   248,   248,
     275,    33,   278,   277,    92,   297,     6,   299,   145,   145,
      89,    21,    21,    92,   212,   191,    21,    21,   216,    92,
     213,   195,    21,    21,   217,    89,    89,   280,   280,    29,
      92,   272,   273,   274,   237,   238,   270,   253,   299,    89,
      54,    54,   299,    24,    92,   212,   302,   302,    92,   213,
     299,   299,   280,   270,   237,   237,   237,    92,   280,   297,
      92,   299,   299,   145,    92,    89,    89,    92,    89,    89,
     280,    92,    92,    92,    33,    89,    89,    89,    54,    29,
       6,   299,   299,    89,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   164,   164,   164,   165,   165,   166,   167,
     167,   168,   169,   169,   170,   170,   170,   170,   170,   170,
     170,   170,   172,   171,   173,   173,   174,   174,   175,   175,
     176,   176,   176,   177,   177,   178,   178,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   180,
     180,   181,   182,   183,   185,   184,   184,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   189,
     188,   190,   188,   191,   188,   192,   188,   193,   188,   194,
     188,   195,   188,   196,   188,   197,   188,   198,   188,   199,
     188,   200,   188,   201,   188,   202,   202,   202,   202,   202,
     202,   203,   203,   204,   204,   205,   205,   205,   205,   206,
     206,   206,   206,   207,   207,   208,   208,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   215,   216,   216,   217,   217,   218,   219,   221,
     220,   222,   222,   223,   224,   224,   224,   224,   225,   225,
     226,   226,   226,   227,   227,   228,   228,   229,   229,   231,
     230,   232,   230,   233,   230,   234,   230,   235,   230,   230,
     236,   236,   236,   236,   237,   237,   238,   238,   239,   239,
     239,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   241,   242,   242,   242,   242,   243,
     243,   244,   244,   244,   244,   244,   244,   245,   245,   245,
     246,   246,   246,   246,   246,   247,   247,   247,   247,   247,
     248,   248,   249,   249,   249,   250,   251,   251,   252,   252,
     252,   252,   253,   253,   254,   254,   255,   255,   256,   256,
     257,   257,   258,   258,   258,   258,   259,   259,   260,   260,
     260,   260,   261,   261,   262,   262,   263,   263,   263,   265,
     264,   266,   264,   268,   267,   269,   267,   270,   270,   272,
     271,   273,   271,   274,   271,   275,   271,   276,   276,   277,
     278,   277,   279,   279,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   281,   281,   282,   283,   283,   284,   284,
     284,   284,   285,   286,   286,   286,   287,   287,   288,   288,
     289,   290,   291,   292,   293,   293,   294,   295,   296,   296,
     297,   297,   298,   298,   298,   298,   298,   298,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   300,   300,   301,   301,   302,   302,
     303,   303
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     5,     2,     1,     2,     1,     3,
       2,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     6,     4,     0,     1,     3,     5,     3,
       0,     2,     3,     1,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       6,     5,     2,     2,     0,     4,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       8,     0,     9,     0,    10,     0,     6,     0,     8,     0,
       9,     0,    10,     0,     6,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     5,     3,     2,     0,     2,     0,     1,
       3,     1,     3,     1,     5,     1,     5,     7,     7,     0,
       5,     4,     0,     1,     1,     5,     3,     7,     1,     3,
       5,     4,     2,     1,     1,     1,     3,     5,     7,     0,
       4,     0,     8,     0,     4,     0,     3,     0,     4,     8,
       2,     4,     4,     5,     1,     3,     1,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     3,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     6,     6,     3,     0,     2,     5,     8,
      12,     5,     1,     1,     1,     3,     1,     3,     0,     1,
       1,     1,     4,     2,     2,     4,     2,     6,     3,     1,
       1,     1,     1,     0,     1,     3,     1,     2,     2,     0,
       9,     0,    12,     0,     8,     0,    11,     0,     2,     0,
       5,     0,     5,     0,     5,     0,     4,     1,     3,     1,
       0,     4,     1,     0,     3,     5,     2,     5,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     2,     3,     5,     7,     5,     5,
       2,     2,     6,     1,     1,     1,     0,     2,     3,     3,
       9,     5,     2,     5,     3,     3,     5,     3,     1,     3,
       1,     3,     1,     1,     4,     7,     7,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     1,     3,     1,     4,     1,     3,
       0,     1
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
        case 4:
#line 190 "vgrammar.y" /* yacc.c:1646  */
    { VerBreakpoint((yyvsp[-3].I),(yyvsp[-1].E)); }
#line 2991 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 9:
#line 201 "vgrammar.y" /* yacc.c:1646  */
    { VerEndModule(); }
#line 2997 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 239 "vgrammar.y" /* yacc.c:1646  */
    { VerNewModule((yyvsp[0].S)); }
#line 3003 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 251 "vgrammar.y" /* yacc.c:1646  */
    { VerParmDef((yyvsp[-3].S),(yyvsp[-1].E),1); }
#line 3009 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 252 "vgrammar.y" /* yacc.c:1646  */
    { VerParmDef((yyvsp[-2].S),(yyvsp[0].E),1); }
#line 3015 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 261 "vgrammar.y" /* yacc.c:1646  */
    { VerPort((yyvsp[0].S)); }
#line 3021 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 262 "vgrammar.y" /* yacc.c:1646  */
    { VerPort((yyvsp[0].S)); }
#line 3027 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 297 "vgrammar.y" /* yacc.c:1646  */
    { VerAssign((yyvsp[-3].E),(yyvsp[-1].E),0); }
#line 3033 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 298 "vgrammar.y" /* yacc.c:1646  */
    { VerAssign((yyvsp[-3].E),(yyvsp[-1].E),(yyvsp[-4].E)); }
#line 3039 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 301 "vgrammar.y" /* yacc.c:1646  */
    { VerParmDef((yyvsp[-3].S),(yyvsp[-1].E),0); }
#line 3045 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 304 "vgrammar.y" /* yacc.c:1646  */
    { VerIABlock(INITIALB,(yyvsp[0].SD)); }
#line 3051 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 307 "vgrammar.y" /* yacc.c:1646  */
    { VerIABlock(ALWAYS,(yyvsp[0].SD)); }
#line 3057 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 315 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginEScript((yyvsp[0].S)); }
#line 3063 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 315 "vgrammar.y" /* yacc.c:1646  */
    { VerEndEScript(); }
#line 3069 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 351 "vgrammar.y" /* yacc.c:1646  */
    { fprintf(stderr, "fixme: drive strength\n"); VerGateDecl((yyvsp[-4].I),(yyvsp[0].E)); }
#line 3075 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 353 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-5].I),NULL);
	      VerGateInst(NULL,NULL,VerListPrepend((yyvsp[-3].E),(yyvsp[-1].L)));
	    }
#line 3083 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 357 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-6].I),(yyvsp[-5].E));
	      VerGateInst(NULL,NULL,VerListPrepend((yyvsp[-3].E),(yyvsp[-1].L)));
	    }
#line 3091 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 75:
#line 360 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-1].I),(yyvsp[0].E)); }
#line 3097 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 363 "vgrammar.y" /* yacc.c:1646  */
    { fprintf(stderr, "fixme: drive strength\n"); VerGateDecl((yyvsp[-4].I),(yyvsp[0].E)); }
#line 3103 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 79:
#line 365 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-5].I),NULL);
	      VerGateInst(NULL,NULL,VerListAppend((yyvsp[-3].L),(yyvsp[-1].E)));
	    }
#line 3111 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 369 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-6].I),(yyvsp[-5].E));
	      VerGateInst(NULL,NULL,VerListAppend((yyvsp[-3].L),(yyvsp[-1].E)));
	    }
#line 3119 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 372 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-1].I),(yyvsp[0].E)); }
#line 3125 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 374 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-1].I),(yyvsp[0].E)); }
#line 3131 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 87:
#line 375 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-1].I),(yyvsp[0].E)); }
#line 3137 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 376 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-1].I),(yyvsp[0].E)); }
#line 3143 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 377 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-1].I),(yyvsp[0].E)); }
#line 3149 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 378 "vgrammar.y" /* yacc.c:1646  */
    { VerGateDecl((yyvsp[-1].I),(yyvsp[0].E)); }
#line 3155 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 397 "vgrammar.y" /* yacc.c:1646  */
    { VerGateInst((yyvsp[-4].S),(yyvsp[-3].R),(yyvsp[-1].L)); }
#line 3161 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 124:
#line 398 "vgrammar.y" /* yacc.c:1646  */
    { VerGateInst(0,0,(yyvsp[-1].L)); }
#line 3167 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 134:
#line 422 "vgrammar.y" /* yacc.c:1646  */
    { VerGateInst(NULL,NULL,VerListPrepend((yyvsp[-3].E),(yyvsp[-1].L))); }
#line 3173 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 136:
#line 430 "vgrammar.y" /* yacc.c:1646  */
    { VerGateInst(NULL,NULL,VerListAppend((yyvsp[-3].L),(yyvsp[-1].E))); }
#line 3179 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 137:
#line 434 "vgrammar.y" /* yacc.c:1646  */
    { VerGateInst((yyvsp[-6].S),(yyvsp[-5].R),VerListPrepend((yyvsp[-3].E),(yyvsp[-1].L))); }
#line 3185 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 138:
#line 438 "vgrammar.y" /* yacc.c:1646  */
    { VerGateInst((yyvsp[-6].S),(yyvsp[-5].R),VerListAppend((yyvsp[-3].L),(yyvsp[-1].E))); }
#line 3191 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 139:
#line 454 "vgrammar.y" /* yacc.c:1646  */
    { VerModDecl((yyvsp[0].S)); }
#line 3197 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 144:
#line 465 "vgrammar.y" /* yacc.c:1646  */
    { VerModDeclParm(0,(yyvsp[0].E)); }
#line 3203 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 145:
#line 466 "vgrammar.y" /* yacc.c:1646  */
    { VerModDeclParm((yyvsp[-3].S),(yyvsp[-1].E)); }
#line 3209 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 146:
#line 467 "vgrammar.y" /* yacc.c:1646  */
    { VerModDeclParm(0,(yyvsp[0].E)); }
#line 3215 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 147:
#line 468 "vgrammar.y" /* yacc.c:1646  */
    { VerModDeclParm((yyvsp[-3].S),(yyvsp[-1].E)); }
#line 3221 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 150:
#line 481 "vgrammar.y" /* yacc.c:1646  */
    { VerModInst((yyvsp[-4].S),(yyvsp[-3].R),(yyvsp[-1].L)); }
#line 3227 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 151:
#line 482 "vgrammar.y" /* yacc.c:1646  */
    { VerModInst((yyvsp[-3].S),(yyvsp[-2].R),VerEmptyList()); }
#line 3233 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 152:
#line 483 "vgrammar.y" /* yacc.c:1646  */
    { VerModInst((yyvsp[-1].S),(yyvsp[0].R),VerEmptyList()); }
#line 3239 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 155:
#line 491 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend(VerEmptyList(),new_NameExpr(0,(yyvsp[0].E))); }
#line 3245 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 156:
#line 492 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend((yyvsp[-2].L),new_NameExpr(0,(yyvsp[0].E))); }
#line 3251 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 157:
#line 495 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend(VerEmptyList(),new_NameExpr((yyvsp[-3].S),(yyvsp[-1].E))); }
#line 3257 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 158:
#line 496 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend((yyvsp[-6].L),new_NameExpr((yyvsp[-3].S),(yyvsp[-1].E))); }
#line 3263 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 159:
#line 514 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-1].I),(yyvsp[0].R)); }
#line 3269 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 161:
#line 515 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-2].I),(yyvsp[-1].R)); }
#line 3275 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 162:
#line 515 "vgrammar.y" /* yacc.c:1646  */
    { VerAssign(new_Expr_lit((yyvsp[-3].S)),(yyvsp[-1].E),(yyvsp[-5].E)); }
#line 3281 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 163:
#line 516 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-1].I),(yyvsp[0].R)); }
#line 3287 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 165:
#line 517 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[0].I),0); }
#line 3293 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 167:
#line 518 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-1].I),(yyvsp[0].R)); }
#line 3299 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 169:
#line 519 "vgrammar.y" /* yacc.c:1646  */
    { VerAutoAssign((yyvsp[-7].I),(yyvsp[-3].S),(yyvsp[-1].E)); }
#line 3305 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 172:
#line 524 "vgrammar.y" /* yacc.c:1646  */
    { VerDeclAssign(new_Expr_lit((yyvsp[-3].S)),(yyvsp[-1].E),0); }
#line 3311 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 173:
#line 525 "vgrammar.y" /* yacc.c:1646  */
    { VerDeclAssign(new_Expr_lit((yyvsp[-4].S)),(yyvsp[-1].E),(yyvsp[-2].E)); }
#line 3317 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 176:
#line 532 "vgrammar.y" /* yacc.c:1646  */
    { VerDecl((yyvsp[0].S),0); (yyval.S) = (yyvsp[0].S); }
#line 3323 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 177:
#line 533 "vgrammar.y" /* yacc.c:1646  */
    { VerDecl((yyvsp[-1].S),(yyvsp[0].R)); (yyval.S) = (yyvsp[-1].S); }
#line 3329 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 178:
#line 536 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_INPUT; }
#line 3335 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 179:
#line 537 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_OUTPUT; }
#line 3341 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 180:
#line 538 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_INOUT; }
#line 3347 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 181:
#line 539 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_REG_OUTPUT; }
#line 3353 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 182:
#line 540 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_REG_OUTPUT; }
#line 3359 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 183:
#line 543 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_WIRE|(yyvsp[0].I); }
#line 3365 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 184:
#line 544 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_WAND|(yyvsp[0].I); }
#line 3371 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 185:
#line 545 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_WOR|(yyvsp[0].I); }
#line 3377 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 186:
#line 546 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_TRI|(yyvsp[0].I); }
#line 3383 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 187:
#line 547 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_TRI1|(yyvsp[0].I); }
#line 3389 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 188:
#line 548 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_TRI0|(yyvsp[0].I); }
#line 3395 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 189:
#line 549 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_TRIAND|(yyvsp[0].I); }
#line 3401 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 190:
#line 550 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_TRIOR|(yyvsp[0].I); }
#line 3407 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 191:
#line 551 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_TRIREG|(yyvsp[0].I); }
#line 3413 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 192:
#line 552 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_SUPPLY0|(yyvsp[0].I); }
#line 3419 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 193:
#line 553 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_SUPPLY1|(yyvsp[0].I); }
#line 3425 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 194:
#line 556 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_REG|(yyvsp[0].I); }
#line 3431 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 195:
#line 559 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_INTEGER; }
#line 3437 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 196:
#line 560 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_REAL; }
#line 3443 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 197:
#line 561 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_TIME; }
#line 3449 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 198:
#line 562 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_EVENT; }
#line 3455 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 199:
#line 565 "vgrammar.y" /* yacc.c:1646  */
    {(yyval.I) = 0; }
#line 3461 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 200:
#line 566 "vgrammar.y" /* yacc.c:1646  */
    {(yyval.I) = (yyvsp[-1].I)|(yyvsp[0].I); }
#line 3467 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 201:
#line 569 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_VECTORED; }
#line 3473 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 202:
#line 570 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_SCALAR; }
#line 3479 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 203:
#line 571 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_SIGNED; }
#line 3485 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 204:
#line 572 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[-1].I); }
#line 3491 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 205:
#line 573 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[-3].I)|(yyvsp[-1].I); }
#line 3497 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 206:
#line 574 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[-3].I)|(yyvsp[-1].I); }
#line 3503 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 207:
#line 577 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_SMALL; }
#line 3509 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 208:
#line 578 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_MEDIUM; }
#line 3515 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 209:
#line 579 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_LARGE; }
#line 3521 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 210:
#line 582 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_SUPPLY0; }
#line 3527 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 211:
#line 583 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_STRONG0; }
#line 3533 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 212:
#line 584 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_PULL0; }
#line 3539 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 213:
#line 585 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_WEAK0; }
#line 3545 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 214:
#line 586 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_HIGHZ0; }
#line 3551 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 215:
#line 588 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_SUPPLY1; }
#line 3557 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 216:
#line 589 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_STRONG1; }
#line 3563 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 217:
#line 590 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_PULL1; }
#line 3569 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 218:
#line 591 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_WEAK1; }
#line 3575 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 219:
#line 592 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = NT_P_HIGHZ1; }
#line 3581 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 220:
#line 595 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.R) = VerRange(RS_MAXMIN,new_Expr_num(0),new_Expr_num(0)); }
#line 3587 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 221:
#line 596 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.R) = (yyvsp[0].R); }
#line 3593 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 222:
#line 599 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.R) = VerRange(RS_MAXMIN,(yyvsp[-3].E),(yyvsp[-1].E)); }
#line 3599 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 223:
#line 600 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.R) = VerRange(RS_BASEUP,(yyvsp[-4].E),(yyvsp[-1].E)); }
#line 3605 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 224:
#line 601 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.R) = VerRange(RS_BASEDN,(yyvsp[-4].E),(yyvsp[-1].E)); }
#line 3611 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 228:
#line 628 "vgrammar.y" /* yacc.c:1646  */
    { VerSpecTask((yyvsp[-4].S),(yyvsp[-2].L)); }
#line 3617 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 229:
#line 629 "vgrammar.y" /* yacc.c:1646  */
    { VerSpecify(0,(yyvsp[-5].I),(yyvsp[-6].E),(yyvsp[-4].E),(yyvsp[-1].E)); }
#line 3623 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 230:
#line 631 "vgrammar.y" /* yacc.c:1646  */
    { VerSpecify((yyvsp[-9].E),(yyvsp[-5].I),(yyvsp[-6].E),(yyvsp[-4].E),(yyvsp[-1].E)); }
#line 3629 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 231:
#line 632 "vgrammar.y" /* yacc.c:1646  */
    { VerSpecParam((yyvsp[-3].S),(yyvsp[-1].E)); }
#line 3635 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 232:
#line 635 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = SPT_MPATH; }
#line 3641 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 233:
#line 636 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = SPT_DPATH; }
#line 3647 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 234:
#line 640 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 3653 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 235:
#line 641 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_COND,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3659 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 236:
#line 644 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend(0,(yyvsp[0].E)); }
#line 3665 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 237:
#line 645 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend((yyvsp[-2].L),(yyvsp[0].E)); }
#line 3671 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 238:
#line 648 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = 0; }
#line 3677 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 239:
#line 649 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = (yyvsp[0].L); }
#line 3683 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 240:
#line 664 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 3689 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 241:
#line 665 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 3695 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 242:
#line 668 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_AT,(yyvsp[-1].E)); }
#line 3701 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 243:
#line 669 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_AT,new_Expr_lit((yyvsp[0].S))); }
#line 3707 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 244:
#line 670 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_AT,0); }
#line 3713 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 245:
#line 671 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_AT,0); }
#line 3719 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 246:
#line 674 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_DELAY,(yyvsp[0].E)); }
#line 3725 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 247:
#line 675 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op3(E_DELAY,(yyvsp[-4].E),(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3731 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 248:
#line 678 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[-1].E); }
#line 3737 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 249:
#line 679 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_lit((yyvsp[0].S)); }
#line 3743 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 250:
#line 680 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_num((yyvsp[0].I)); }
#line 3749 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 251:
#line 681 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_realnum((yyvsp[0].F)); }
#line 3755 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 252:
#line 684 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 3761 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 253:
#line 685 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = 0; }
#line 3767 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 254:
#line 688 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 3773 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 255:
#line 689 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_EVENTOR,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 3779 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 256:
#line 692 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 3785 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 257:
#line 693 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_POSEDGE,(yyvsp[0].E)); }
#line 3791 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 258:
#line 694 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_NEGEDGE,(yyvsp[0].E)); }
#line 3797 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 259:
#line 709 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginTask((yyvsp[0].S),(yyvsp[-3].I)); VerBeginDecls(NT_OUTPUT|NT_P_REG,(yyvsp[-1].R)); VerDecl((yyvsp[0].S),0); VerTaskToFunc((yyvsp[-1].R)); }
#line 3803 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 260:
#line 710 "vgrammar.y" /* yacc.c:1646  */
    { VerEndTask((yyvsp[-1].SD)); }
#line 3809 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 261:
#line 712 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginTask((yyvsp[0].S),(yyvsp[-3].I)); VerBeginDecls(NT_OUTPUT|NT_P_REG,(yyvsp[-1].R)); VerDecl((yyvsp[0].S),0); VerTaskToFunc((yyvsp[-1].R)); }
#line 3815 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 262:
#line 714 "vgrammar.y" /* yacc.c:1646  */
    { VerEndTask((yyvsp[-1].SD)); }
#line 3821 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 263:
#line 727 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginTask((yyvsp[0].S),(yyvsp[-2].I)); }
#line 3827 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 264:
#line 727 "vgrammar.y" /* yacc.c:1646  */
    { VerEndTask((yyvsp[-1].SD)); }
#line 3833 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 265:
#line 728 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginTask((yyvsp[0].S),(yyvsp[-2].I)); }
#line 3839 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 266:
#line 729 "vgrammar.y" /* yacc.c:1646  */
    { VerEndTask((yyvsp[-1].SD)); }
#line 3845 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 269:
#line 736 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-1].I)|NT_P_REG,(yyvsp[0].R)); }
#line 3851 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 271:
#line 737 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-1].I),(yyvsp[0].R)); }
#line 3857 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 273:
#line 738 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-1].I),(yyvsp[0].R)); }
#line 3863 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 275:
#line 739 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[0].I),0); }
#line 3869 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 280:
#line 747 "vgrammar.y" /* yacc.c:1646  */
    { VerBeginDecls((yyvsp[-1].I)|NT_P_REG,(yyvsp[0].R)); }
#line 3875 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 282:
#line 750 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 1; }
#line 3881 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 283:
#line 751 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = 0; }
#line 3887 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 284:
#line 766 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDBlock(0,(yyvsp[-1].L)); }
#line 3893 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 285:
#line 767 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDBlock((yyvsp[-2].S),(yyvsp[-1].L)); }
#line 3899 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 287:
#line 769 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDAsgn((yyvsp[-4].E),(yyvsp[-1].E),0,1); }
#line 3905 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 288:
#line 770 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDAsgn((yyvsp[-3].E),(yyvsp[-1].E),0,0); }
#line 3911 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 289:
#line 771 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDAsgn((yyvsp[-4].E),(yyvsp[-1].E),(yyvsp[-2].E),0); }
#line 3917 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 300:
#line 782 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = 0; }
#line 3923 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 301:
#line 783 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = VerCondStat((yyvsp[-1].E),(yyvsp[0].SD)); }
#line 3929 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 302:
#line 784 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDNull(); }
#line 3935 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 303:
#line 787 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerEmptyList(); }
#line 3941 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 304:
#line 788 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend((yyvsp[-1].L),(yyvsp[0].SD)); }
#line 3947 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 305:
#line 791 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDAsgn((yyvsp[-2].E),(yyvsp[0].E),0,1); }
#line 3953 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 306:
#line 806 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDIf((yyvsp[-2].E),(yyvsp[0].SD),0); }
#line 3959 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 307:
#line 807 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDIf((yyvsp[-4].E),(yyvsp[-2].SD),(yyvsp[0].SD)); }
#line 3965 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 308:
#line 819 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDTask((yyvsp[-4].S),(yyvsp[-2].L)); }
#line 3971 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 309:
#line 820 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDTask((yyvsp[-4].S),(yyvsp[-2].L)); }
#line 3977 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 310:
#line 821 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDTask((yyvsp[-1].S),0); }
#line 3983 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 311:
#line 822 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDTask((yyvsp[-1].S),0); }
#line 3989 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 312:
#line 839 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDCase((yyvsp[-5].I),(yyvsp[-3].E),(yyvsp[-1].L)); }
#line 3995 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 313:
#line 842 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = CASE; }
#line 4001 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 314:
#line 843 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = CASEX; }
#line 4007 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 315:
#line 844 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.I) = CASEZ; }
#line 4013 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 316:
#line 847 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerEmptyList(); }
#line 4019 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 317:
#line 848 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend((yyvsp[-1].L),(yyvsp[0].CE)); }
#line 4025 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 318:
#line 851 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.CE) = new_SDCaseEnt((yyvsp[-2].E),(yyvsp[0].SD)); }
#line 4031 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 319:
#line 852 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.CE) = new_SDCaseEnt(0,(yyvsp[0].SD)); }
#line 4037 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 320:
#line 866 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDFor((yyvsp[-6].SD),(yyvsp[-4].E),(yyvsp[-2].SD),(yyvsp[0].SD)); }
#line 4043 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 321:
#line 883 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDWhile((yyvsp[-2].E),(yyvsp[0].SD)); }
#line 4049 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 322:
#line 896 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDForever((yyvsp[0].SD)); }
#line 4055 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 323:
#line 910 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDWait((yyvsp[-2].E),(yyvsp[0].SD)); }
#line 4061 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 324:
#line 922 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDRaise(new_Expr_lit((yyvsp[-1].S))); }
#line 4067 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 325:
#line 923 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDRaise(new_Expr_lit((yyvsp[-1].S))); }
#line 4073 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 326:
#line 936 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDRepeat((yyvsp[-2].E),(yyvsp[0].SD)); }
#line 4079 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 327:
#line 952 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.SD) = new_SDFork((yyvsp[-1].L)); }
#line 4085 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 328:
#line 969 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 4091 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 329:
#line 970 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[-1].E); }
#line 4097 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 330:
#line 973 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 4103 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 331:
#line 974 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_CONCAT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4109 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 332:
#line 977 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_lit((yyvsp[0].S)); }
#line 4115 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 333:
#line 978 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_lit((yyvsp[0].S)); }
#line 4121 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 334:
#line 979 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op3(E_VECTORP,(yyvsp[-3].E),(yyvsp[-1].E),0); }
#line 4127 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 335:
#line 980 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op3(E_VECTORP,(yyvsp[-6].E),(yyvsp[-4].E),(yyvsp[-1].E)); }
#line 4133 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 336:
#line 981 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op3(E_VECTORN,(yyvsp[-6].E),(yyvsp[-4].E),(yyvsp[-1].E)); }
#line 4139 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 337:
#line 982 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op3(E_RANGE,(yyvsp[-5].E),(yyvsp[-3].E),(yyvsp[-1].E)); }
#line 4145 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 338:
#line 985 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_ADD,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4151 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 339:
#line 986 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_SUB,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4157 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 340:
#line 987 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_MUL,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4163 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 341:
#line 988 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_DIV,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4169 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 342:
#line 989 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_AND,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4175 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 343:
#line 990 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_OR,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4181 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 344:
#line 991 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_GT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4187 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 345:
#line 992 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_LT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4193 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 346:
#line 993 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_GE,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4199 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 347:
#line 994 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_LE,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4205 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 348:
#line 995 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_EQ,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4211 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 349:
#line 996 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_NE,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4217 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 350:
#line 997 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_EQZ,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4223 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 351:
#line 998 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_NEZ,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4229 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 352:
#line 999 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_RSHIFT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4235 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1000 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_LSHIFT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4241 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1001 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_ARSHIFT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4247 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1002 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_ALSHIFT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4253 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1003 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_MOD,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4259 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1004 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_BAND,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4265 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1005 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_BOR,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4271 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1006 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_BXOR,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4277 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1007 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_BNAND,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4283 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1008 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_BNOR,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4289 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1009 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_BNXOR,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4295 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1010 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op3(E_QUEST,(yyvsp[-4].E),(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4301 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1011 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_NOT,(yyvsp[0].E)); }
#line 4307 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1012 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UINV,(yyvsp[0].E)); }
#line 4313 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1014 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UAND,(yyvsp[0].E)); }
#line 4319 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1015 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UOR,(yyvsp[0].E)); }
#line 4325 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1016 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UXOR,(yyvsp[0].E)); }
#line 4331 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1017 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UNAND,(yyvsp[0].E)); }
#line 4337 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1018 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UNOR,(yyvsp[0].E)); }
#line 4343 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1019 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UNXOR,(yyvsp[0].E)); }
#line 4349 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1021 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op1(E_UNEG,(yyvsp[0].E)); }
#line 4355 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1022 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 4361 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1023 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[-1].E); }
#line 4367 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1024 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 4373 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1025 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_realnum((yyvsp[0].F)); }
#line 4379 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1026 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_num((yyvsp[0].I)); }
#line 4385 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1027 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_hex((yyvsp[0].S)); }
#line 4391 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1028 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_str((yyvsp[0].S)); }
#line 4397 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1029 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[-1].E); }
#line 4403 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1030 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_task((yyvsp[0].S),0); }
#line 4409 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1031 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_task((yyvsp[-3].S),(yyvsp[-1].L)); }
#line 4415 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1032 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_task((yyvsp[-3].S),(yyvsp[-1].L)); }
#line 4421 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1035 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 4427 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1036 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_op(E_CONCAT,(yyvsp[-2].E),(yyvsp[0].E)); }
#line 4433 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1039 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = (yyvsp[0].E); }
#line 4439 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1040 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.E) = new_Expr_repcat((yyvsp[-3].E),(yyvsp[-1].E)); }
#line 4445 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1043 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend(0,(yyvsp[0].E)); }
#line 4451 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1044 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = VerListAppend((yyvsp[-2].L),(yyvsp[0].E)); }
#line 4457 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1047 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = 0; }
#line 4463 "vgrammar.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1048 "vgrammar.y" /* yacc.c:1646  */
    { (yyval.L) = (yyvsp[0].L); }
#line 4469 "vgrammar.c" /* yacc.c:1646  */
    break;


#line 4473 "vgrammar.c" /* yacc.c:1646  */
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
#line 1051 "vgrammar.y" /* yacc.c:1906  */

