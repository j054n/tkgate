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
#line 39 "grammar.y" /* yacc.c:339  */

#include "parser.h"
#include "grammar.h"

#line 71 "grammar.c" /* yacc.c:339  */

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

/* Copy the second part of user declarations.  */

#line 199 "grammar.c" /* yacc.c:358  */

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  232

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    47,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    64,    65,    71,    74,    75,    78,    79,
      80,    80,    83,    86,    87,    90,    96,    99,   100,   103,
     108,   109,   108,   112,   113,   116,   116,   117,   117,   121,
     122,   125,   126,   127,   128,   129,   132,   133,   136,   137,
     138,   139,   142,   143,   149,   149,   149,   152,   153,   156,
     157,   158,   159,   160,   161,   160,   167,   167,   170,   171,
     174,   175,   175,   176,   179,   180,   183,   184,   192,   192,
     196,   197,   198,   201,   202,   202,   203,   204,   205,   208,
     208,   209,   210,   210,   211,   212,   215,   216,   217,   220,
     221,   224,   225,   226,   229,   230,   233,   234,   235,   236,
     237,   240,   241,   242,   243,   249,   250,   253,   254,   257,
     258,   259,   262,   265,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MICROCODE", "MACROCODE", "MAP", "BANK",
  "FIELD", "REGISTERS", "OPERANDS", "OP", "KWBEGIN", "KWEND", "NL", "SEMI",
  "COLON", "COMMA", "ASGN", "HASH", "TILDE", "PERCENT", "PLUS", "AT",
  "BOGOCHAR", "MINUS", "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACK",
  "RBRACK", "DSHORT", "DLONG", "DBYTE", "DSYMBOL", "DBSS", "DPROC", "DEND",
  "NUMBER", "LITERAL", "REGISTER", "STRING", "$accept", "prog", "top_item",
  "bank_decl", "field_decl", "fitems", "fitem", "$@1", "enumset", "eitems",
  "eitem", "reg_decl", "regs", "reg", "operand_decl", "$@2", "$@3",
  "operdefs", "operdef", "$@4", "$@5", "oprlhss", "oprlhs", "opasgns",
  "opasgn", "offset", "op_decl", "$@6", "$@7", "opditems", "opditem",
  "$@8", "$@9", "ucode", "$@10", "uops", "uop", "$@11", "uspecs", "uspec",
  "mcode", "$@12", "mops", "lmop", "$@13", "mop", "$@14", "$@15", "dtype",
  "bsl_items", "bsl_item", "operands", "operand", "number", "brange",
  "obrange", "what", "label", "register", YY_NULLPTR
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
     295,   296
};
# endif

#define YYPACT_NINF -182

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-182)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     116,    43,  -182,  -182,  -182,    12,   -30,   -13,    42,    14,
     105,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,    83,
    -182,  -182,    79,    93,    74,  -182,   112,   124,  -182,   109,
     123,   120,   128,  -182,  -182,    93,    93,   118,   137,  -182,
      12,   119,  -182,   -30,  -182,  -182,   121,   122,   127,  -182,
     -11,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,    -2,
     129,  -182,   130,   117,    82,  -182,   145,  -182,   147,   133,
     131,  -182,   136,  -182,   110,   140,    40,    24,   134,   151,
     142,  -182,     4,     2,  -182,  -182,   152,    66,  -182,   157,
     135,   138,   126,    84,  -182,   158,   114,  -182,  -182,   159,
    -182,   163,    93,  -182,   164,   165,  -182,   166,  -182,     7,
    -182,   167,  -182,   169,    36,   148,   131,  -182,  -182,   153,
    -182,   149,   150,   110,   160,   168,  -182,  -182,    59,  -182,
    -182,  -182,   172,  -182,  -182,  -182,  -182,  -182,    40,    40,
    -182,  -182,  -182,  -182,  -182,   154,   144,  -182,   132,   177,
    -182,  -182,   161,  -182,  -182,   171,   170,   173,  -182,  -182,
    -182,   180,   182,   125,   -10,  -182,    22,  -182,  -182,    56,
    -182,    15,   162,   100,   174,  -182,  -182,    78,    81,  -182,
    -182,   176,   175,   178,    93,  -182,   179,    46,  -182,   181,
    -182,   183,  -182,  -182,  -182,  -182,   187,  -182,  -182,   186,
    -182,   189,   190,   191,   192,   193,    -9,    93,  -182,  -182,
     194,   195,    56,    30,    15,  -182,  -182,  -182,  -182,  -182,
     188,    93,  -182,  -182,  -182,  -182,  -182,   196,  -182,  -182,
    -182,  -182
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   119,   120,   121,     0,     0,     0,     0,     0,
       0,     2,     4,     5,     6,     7,     8,     9,    10,     0,
      12,    11,     0,     0,     0,    16,     0,     0,    27,     0,
       0,     0,     0,     1,     3,     0,     0,     0,    19,    15,
       0,     0,    26,     0,    30,    54,     0,     0,     0,    18,
       0,    20,    17,    29,    28,    33,    57,    66,    78,     0,
       0,   116,     0,    35,    55,    68,     0,    13,     0,     0,
       0,    21,     0,    34,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,    14,   115,     0,     0,    23,     0,
       0,     0,     0,     0,    39,     0,     0,   112,   114,     0,
      63,     0,   117,    61,     0,     0,    67,   114,    69,     0,
      74,    76,    71,     0,    95,     0,     0,    22,    32,    42,
      41,     0,     0,     0,     0,     0,   111,   113,     0,    33,
      62,   118,     0,    56,    73,   122,    70,    75,     0,     0,
      82,    79,    97,    98,    96,     0,     0,    88,    89,     0,
      83,    92,    84,    25,    24,     0,     0,     0,    40,    46,
      46,     0,     0,    35,     0,    77,     0,    94,    87,     0,
      81,     0,     0,    95,     0,    45,    43,     0,     0,    60,
      59,     0,     0,     0,   117,    72,     0,     0,   123,    90,
     104,   106,   107,   101,   102,   103,    93,    99,    86,    89,
      85,     0,     0,     0,     0,     0,   117,   117,    48,   124,
       0,     0,     0,     0,     0,    44,    36,    47,    38,    65,
      53,   117,    50,    51,   110,   108,   105,     0,   100,    52,
      49,   109
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,   198,  -182,  -182,  -182,   185,  -182,  -182,  -182,
      95,  -182,  -182,   184,  -182,  -182,  -182,    80,  -182,  -182,
    -182,  -182,    91,    55,   -63,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,    89,  -107,
    -182,  -182,  -182,  -182,  -182,    45,  -182,  -182,  -182,  -182,
       6,  -182,     9,   -76,   -12,  -177,  -182,   115,  -181
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    24,    25,    62,    71,    87,
      88,    14,    27,    28,    15,    55,    72,    63,    73,    74,
      75,    93,    94,   177,   203,   221,    16,    56,    80,    64,
      81,   129,   181,    17,    65,    82,   108,   139,   109,   110,
      18,    66,   114,   149,   173,   150,   169,   171,   151,   196,
     197,   189,   190,   111,   131,   132,    19,   112,   192
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,    79,   137,   113,    60,   105,   211,   208,   182,    26,
     183,    38,    67,   220,   -80,   -80,   106,    31,    32,    61,
      37,   136,    96,    48,    49,    96,    29,    37,   184,   222,
     223,    22,   227,   -80,   -80,   -80,   185,   -80,   -80,   -80,
      96,   -80,    97,   107,   230,    97,    98,    68,   141,   100,
     186,    23,   162,   193,   194,    20,   195,    21,    96,   137,
      97,    98,   165,   101,    96,   161,   186,   142,   143,   144,
     188,   145,   146,   147,    96,   148,   186,    96,    97,    98,
      78,    30,   116,   187,    97,    98,   188,    76,    39,    35,
      40,    77,   117,   191,    97,    98,   188,    97,    98,    78,
     123,   124,    78,    78,   202,    33,     1,   204,     2,     3,
       4,   210,     5,     6,     7,     8,     9,     1,    36,     2,
       3,     4,    37,     5,     6,     7,     8,     9,    90,    41,
      91,   142,   143,   144,    44,   145,   191,    92,    42,   199,
      43,   -37,    46,   -31,   121,   -91,   122,   135,    45,   -37,
      47,   -64,   126,   127,    51,    70,    50,    53,    83,    57,
      58,    84,    89,    85,    95,   103,    59,    69,   104,   115,
      86,   118,   102,   119,   128,   125,   120,   130,   133,   134,
     155,   135,   140,   168,   138,   159,   153,   156,   157,   164,
     170,   174,   167,   160,   179,   172,   180,   212,   175,   -91,
     198,   176,   205,   214,   216,   217,   218,   219,    34,   163,
     213,   154,   201,   206,   158,   178,   207,   215,   200,   209,
     228,   226,   224,   225,   231,    52,   229,    54,   166,   152
};

static const yytype_uint8 yycheck[] =
{
      76,    64,   109,     1,    15,     1,   187,   184,    18,    39,
      20,    23,    14,    22,    12,    13,    12,     3,     4,    30,
      29,    14,    18,    35,    36,    18,    39,    29,    38,   206,
     207,    19,   213,    31,    32,    33,    14,    35,    36,    37,
      18,    39,    38,    39,   221,    38,    39,    59,    12,    25,
      20,    39,   128,    38,    39,    12,    41,    14,    18,   166,
      38,    39,   138,    39,    18,   128,    20,    31,    32,    33,
      40,    35,    36,    37,    18,    39,    20,    18,    38,    39,
      21,    39,    16,    27,    38,    39,    40,     5,    14,     6,
      16,     9,    26,   169,    38,    39,    40,    38,    39,    21,
      16,    17,    21,    21,    26,     0,     1,    26,     3,     4,
       5,   187,     7,     8,     9,    10,    11,     1,    39,     3,
       4,     5,    29,     7,     8,     9,    10,    11,    18,    17,
      20,    31,    32,    33,    25,    35,   212,    27,    14,    39,
      16,    24,    22,    26,    18,    13,    20,    15,    25,    24,
      22,    26,    38,    39,    17,    25,    38,    38,    13,    38,
      38,    14,    26,    30,    24,    14,    39,    38,    26,    17,
      39,    14,    38,    38,    15,    17,    38,    14,    14,    14,
      27,    15,    13,    39,    17,    25,    38,    38,    38,    17,
      13,    20,    38,    25,    14,    34,    14,    16,    28,    13,
      38,    28,    26,    16,    14,    14,    14,    14,    10,   129,
      27,   116,    38,    38,   123,   160,    38,    28,   173,    40,
     214,   212,    28,    28,    28,    40,    38,    43,   139,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     7,     8,     9,    10,    11,
      43,    44,    45,    46,    53,    56,    68,    75,    82,    98,
      12,    14,    19,    39,    47,    48,    39,    54,    55,    39,
      39,     3,     4,     0,    44,     6,    39,    29,    96,    14,
      16,    17,    14,    16,    25,    25,    22,    22,    96,    96,
      38,    17,    48,    38,    55,    57,    69,    38,    38,    39,
      15,    30,    49,    59,    71,    76,    83,    14,    96,    38,
      25,    50,    58,    60,    61,    62,     5,     9,    21,    66,
      70,    72,    77,    13,    14,    30,    39,    51,    52,    26,
      18,    20,    27,    63,    64,    24,    18,    38,    39,    95,
      25,    39,    38,    14,    26,     1,    12,    39,    78,    80,
      81,    95,    99,     1,    84,    17,    16,    26,    14,    38,
      38,    18,    20,    16,    17,    17,    38,    39,    15,    73,
      14,    96,    97,    14,    14,    15,    14,    81,    17,    79,
      13,    12,    31,    32,    33,    35,    36,    37,    39,    85,
      87,    90,    99,    38,    52,    27,    38,    38,    64,    25,
      25,    66,    95,    59,    17,    95,    80,    38,    39,    88,
      13,    89,    34,    86,    20,    28,    28,    65,    65,    14,
      14,    74,    18,    20,    38,    14,    20,    27,    40,    93,
      94,    95,   100,    38,    39,    41,    91,    92,    38,    39,
      87,    38,    26,    66,    26,    26,    38,    38,    97,    40,
      95,   100,    16,    27,    16,    28,    14,    14,    14,    14,
      22,    67,    97,    97,    28,    28,    94,   100,    92,    38,
      97,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    45,    45,    46,    47,    47,    48,    48,
      49,    48,    50,    51,    51,    52,    53,    54,    54,    55,
      57,    58,    56,    59,    59,    61,    60,    62,    60,    63,
      63,    64,    64,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    67,    67,    69,    70,    68,    71,    71,    72,
      72,    72,    72,    73,    74,    72,    76,    75,    77,    77,
      78,    79,    78,    78,    80,    80,    81,    81,    83,    82,
      84,    84,    84,    85,    86,    85,    85,    85,    85,    88,
      87,    87,    89,    87,    87,    87,    90,    90,    90,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    96,    96,    97,    97,    98,
      98,    98,    99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     5,     6,     3,     1,     3,     3,     2,
       0,     5,     3,     1,     3,     3,     3,     1,     3,     3,
       0,     0,     8,     0,     2,     0,     7,     0,     7,     1,
       3,     2,     2,     4,     6,     4,     0,     3,     6,     8,
       7,     7,     2,     1,     0,     0,     8,     0,     2,     5,
       5,     2,     3,     0,     0,     7,     0,     7,     0,     2,
       2,     0,     4,     2,     1,     2,     1,     3,     0,     8,
       0,     3,     2,     1,     0,     3,     3,     2,     1,     0,
       3,     1,     0,     3,     2,     0,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     3,     4,
       3,     2,     1,     2,     1,     5,     3,     0,     1,     1,
       1,     1,     2,     1,     2
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
        case 11:
#line 57 "grammar.y" /* yacc.c:1646  */
    { yyerrok; }
#line 1443 "grammar.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "grammar.y" /* yacc.c:1646  */
    { yyerrok; }
#line 1449 "grammar.c" /* yacc.c:1646  */
    break;

  case 13:
#line 64 "grammar.y" /* yacc.c:1646  */
    { ycBank((yyvsp[-4].I),&(yyvsp[-2].R),(yyvsp[-1].S),0); }
#line 1455 "grammar.c" /* yacc.c:1646  */
    break;

  case 14:
#line 65 "grammar.y" /* yacc.c:1646  */
    { ycBank((yyvsp[-5].I),&(yyvsp[-3].R),(yyvsp[-2].S),&(yyvsp[-1].R)); }
#line 1461 "grammar.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "grammar.y" /* yacc.c:1646  */
    { ycField((yyvsp[-1].S),&(yyvsp[0].R),1); }
#line 1467 "grammar.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "grammar.y" /* yacc.c:1646  */
    { ycField((yyvsp[-1].S),&(yyvsp[0].R),0); }
#line 1473 "grammar.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "grammar.y" /* yacc.c:1646  */
    { ycField((yyvsp[-2].S),&(yyvsp[-1].R),0); }
#line 1479 "grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "grammar.y" /* yacc.c:1646  */
    { ycEnum((yyvsp[-2].S),(yyvsp[0].I)); }
#line 1485 "grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 103 "grammar.y" /* yacc.c:1646  */
    { ycRegRecord((yyvsp[-2].S),(yyvsp[0].I)); }
#line 1491 "grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 108 "grammar.y" /* yacc.c:1646  */
    { ycBeginOprGroup((yyvsp[-1].S)); }
#line 1497 "grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 109 "grammar.y" /* yacc.c:1646  */
    { ycEndOprGroup(); }
#line 1503 "grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 116 "grammar.y" /* yacc.c:1646  */
    {ycBeginOperand();}
#line 1509 "grammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 116 "grammar.y" /* yacc.c:1646  */
    {ycEndOperand();}
#line 1515 "grammar.c" /* yacc.c:1646  */
    break;

  case 37:
#line 117 "grammar.y" /* yacc.c:1646  */
    {ycBeginOperand();}
#line 1521 "grammar.c" /* yacc.c:1646  */
    break;

  case 38:
#line 117 "grammar.y" /* yacc.c:1646  */
    {ycEndOperand();}
#line 1527 "grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 125 "grammar.y" /* yacc.c:1646  */
    { ycOLHS(AM_DIRECT,(yyvsp[0].I),0); }
#line 1533 "grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 126 "grammar.y" /* yacc.c:1646  */
    { ycOLHS(AM_IMMEDIATE,0,(yyvsp[0].I)); }
#line 1539 "grammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "grammar.y" /* yacc.c:1646  */
    { ycOLHS(AM_INDIRECT,(yyvsp[-1].I),0); }
#line 1545 "grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "grammar.y" /* yacc.c:1646  */
    { ycOLHS(AM_INDEXED,(yyvsp[-1].I),(yyvsp[-4].I)); }
#line 1551 "grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "grammar.y" /* yacc.c:1646  */
    { ycOLHS(AM_IMMIND,0,(yyvsp[-1].I)); }
#line 1557 "grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 136 "grammar.y" /* yacc.c:1646  */
    { ycORHS(OI_DATA,(yyvsp[-4].I),&(yyvsp[-3].R),(yyvsp[-1].I),&(yyvsp[0].R),0); (yyval.I) = (yyvsp[-1].I); }
#line 1563 "grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "grammar.y" /* yacc.c:1646  */
    { ycORHS(OI_RELNUMOP,(yyvsp[-6].I),&(yyvsp[-5].R),(yyvsp[-2].I),&(yyvsp[0].R),(yyvsp[-1].I)); (yyval.I) = 0; }
#line 1569 "grammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "grammar.y" /* yacc.c:1646  */
    { ycORHS(OI_NUMOP,(yyvsp[-5].I),&(yyvsp[-4].R),(yyvsp[-1].I),&(yyvsp[0].R),0); (yyval.I) = 0; }
#line 1575 "grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 139 "grammar.y" /* yacc.c:1646  */
    { ycORHS(OI_REGOP,(yyvsp[-5].I),&(yyvsp[-4].R),(yyvsp[-1].I),&(yyvsp[0].R),0); (yyval.I) = 0; }
#line 1581 "grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1587 "grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 143 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = 0; }
#line 1593 "grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 149 "grammar.y" /* yacc.c:1646  */
    { ycBeginOp((yyvsp[-1].S)); }
#line 1599 "grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 149 "grammar.y" /* yacc.c:1646  */
    { ycEndOp(); }
#line 1605 "grammar.c" /* yacc.c:1646  */
    break;

  case 59:
#line 156 "grammar.y" /* yacc.c:1646  */
    { ycMap(&(yyvsp[-3].N),&(yyvsp[-1].N)); }
#line 1611 "grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 157 "grammar.y" /* yacc.c:1646  */
    { Number N; N.v.d = (yyvsp[-1].I); N.ntype = NT_VALUE; ycMap(&(yyvsp[-3].N),&N); }
#line 1617 "grammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 158 "grammar.y" /* yacc.c:1646  */
    { }
#line 1623 "grammar.c" /* yacc.c:1646  */
    break;

  case 62:
#line 159 "grammar.y" /* yacc.c:1646  */
    { ycAddOprGroup((yyvsp[-1].S)); }
#line 1629 "grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 160 "grammar.y" /* yacc.c:1646  */
    { ycBeginOprGroup(0); }
#line 1635 "grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 161 "grammar.y" /* yacc.c:1646  */
    { ycEndOprGroup(); }
#line 1641 "grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 167 "grammar.y" /* yacc.c:1646  */
    { ycBeginUCode((yyvsp[0].I)); }
#line 1647 "grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "grammar.y" /* yacc.c:1646  */
    { ycEndUCode(); }
#line 1653 "grammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 171 "grammar.y" /* yacc.c:1646  */
    { ycUNext(); }
#line 1659 "grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 175 "grammar.y" /* yacc.c:1646  */
    { ycULabel((yyvsp[0].S)); }
#line 1665 "grammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 176 "grammar.y" /* yacc.c:1646  */
    { yyerrok; }
#line 1671 "grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 183 "grammar.y" /* yacc.c:1646  */
    { ycUSpec(&(yyvsp[0].N),0); }
#line 1677 "grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 184 "grammar.y" /* yacc.c:1646  */
    { ycUSpec(&(yyvsp[-2].N),&(yyvsp[0].N)); }
#line 1683 "grammar.c" /* yacc.c:1646  */
    break;

  case 78:
#line 192 "grammar.y" /* yacc.c:1646  */
    { BeginMA(); ycBeginMCode((yyvsp[0].I)); }
#line 1689 "grammar.c" /* yacc.c:1646  */
    break;

  case 79:
#line 193 "grammar.y" /* yacc.c:1646  */
    { ycEndMCode(); BeginBA(); }
#line 1695 "grammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 197 "grammar.y" /* yacc.c:1646  */
    { ycMNext(); }
#line 1701 "grammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 198 "grammar.y" /* yacc.c:1646  */
    { yyerrok; }
#line 1707 "grammar.c" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "grammar.y" /* yacc.c:1646  */
    { ycMLabel((yyvsp[0].S)); }
#line 1713 "grammar.c" /* yacc.c:1646  */
    break;

  case 86:
#line 203 "grammar.y" /* yacc.c:1646  */
    { ycMSymbol((yyvsp[-2].S),(yyvsp[0].I)); }
#line 1719 "grammar.c" /* yacc.c:1646  */
    break;

  case 87:
#line 204 "grammar.y" /* yacc.c:1646  */
    { ycBeginProc((yyvsp[0].S)); }
#line 1725 "grammar.c" /* yacc.c:1646  */
    break;

  case 88:
#line 205 "grammar.y" /* yacc.c:1646  */
    { ycEndProc(); }
#line 1731 "grammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 208 "grammar.y" /* yacc.c:1646  */
    { ycMOp((yyvsp[0].S)); }
#line 1737 "grammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 209 "grammar.y" /* yacc.c:1646  */
    { ycMOp((yyvsp[0].S)); }
#line 1743 "grammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 210 "grammar.y" /* yacc.c:1646  */
    { ycData((yyvsp[0].I)); }
#line 1749 "grammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 211 "grammar.y" /* yacc.c:1646  */
    { ycBss((yyvsp[0].I)); }
#line 1755 "grammar.c" /* yacc.c:1646  */
    break;

  case 96:
#line 215 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1761 "grammar.c" /* yacc.c:1646  */
    break;

  case 97:
#line 216 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1767 "grammar.c" /* yacc.c:1646  */
    break;

  case 98:
#line 217 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1773 "grammar.c" /* yacc.c:1646  */
    break;

  case 101:
#line 224 "grammar.y" /* yacc.c:1646  */
    { ycDataNum((yyvsp[0].I)); }
#line 1779 "grammar.c" /* yacc.c:1646  */
    break;

  case 102:
#line 225 "grammar.y" /* yacc.c:1646  */
    { ycDataLit((yyvsp[0].S)); }
#line 1785 "grammar.c" /* yacc.c:1646  */
    break;

  case 103:
#line 226 "grammar.y" /* yacc.c:1646  */
    { ycDataStr((yyvsp[0].S)); }
#line 1791 "grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 233 "grammar.y" /* yacc.c:1646  */
    { ycMOperand(AM_IMMEDIATE,Number_copy(&(yyvsp[0].N)),0); }
#line 1797 "grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 234 "grammar.y" /* yacc.c:1646  */
    { ycMOperand(AM_DIRECT,0,(yyvsp[0].I)); }
#line 1803 "grammar.c" /* yacc.c:1646  */
    break;

  case 108:
#line 235 "grammar.y" /* yacc.c:1646  */
    { ycMOperand(AM_INDIRECT,0,(yyvsp[-1].I)); }
#line 1809 "grammar.c" /* yacc.c:1646  */
    break;

  case 109:
#line 236 "grammar.y" /* yacc.c:1646  */
    { ycMOperand(AM_INDEXED,Number_copy(&(yyvsp[-3].N)),(yyvsp[-1].I)); }
#line 1815 "grammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 237 "grammar.y" /* yacc.c:1646  */
    { ycMOperand(AM_IMMIND,Number_copy(&(yyvsp[-1].N)),0); }
#line 1821 "grammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 240 "grammar.y" /* yacc.c:1646  */
    { (yyval.N).ntype = NT_VALUE; (yyval.N).v.d = (yyvsp[0].I); }
#line 1827 "grammar.c" /* yacc.c:1646  */
    break;

  case 112:
#line 241 "grammar.y" /* yacc.c:1646  */
    { (yyval.N).ntype = NT_VALUE; (yyval.N).v.d = (yyvsp[0].I); }
#line 1833 "grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 242 "grammar.y" /* yacc.c:1646  */
    { (yyval.N).ntype = NT_SYMBOL; (yyval.N).v.s = (yyvsp[0].S); }
#line 1839 "grammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 243 "grammar.y" /* yacc.c:1646  */
    { (yyval.N).ntype = NT_SYMBOL; (yyval.N).v.s = (yyvsp[0].S); }
#line 1845 "grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 249 "grammar.y" /* yacc.c:1646  */
    { (yyval.R).msb = (yyvsp[-3].I); (yyval.R).lsb = (yyvsp[-1].I); }
#line 1851 "grammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 250 "grammar.y" /* yacc.c:1646  */
    { (yyval.R).msb = (yyval.R).lsb = (yyvsp[-1].I); }
#line 1857 "grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 253 "grammar.y" /* yacc.c:1646  */
    { (yyval.R).msb = (yyval.R).lsb = -1; }
#line 1863 "grammar.c" /* yacc.c:1646  */
    break;

  case 118:
#line 254 "grammar.y" /* yacc.c:1646  */
    { (yyval.R) = (yyvsp[0].R); }
#line 1869 "grammar.c" /* yacc.c:1646  */
    break;

  case 119:
#line 257 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1875 "grammar.c" /* yacc.c:1646  */
    break;

  case 120:
#line 258 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1881 "grammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 259 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1887 "grammar.c" /* yacc.c:1646  */
    break;

  case 122:
#line 262 "grammar.y" /* yacc.c:1646  */
    { (yyval.S) = (yyvsp[-1].S); }
#line 1893 "grammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 265 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1899 "grammar.c" /* yacc.c:1646  */
    break;

  case 124:
#line 266 "grammar.y" /* yacc.c:1646  */
    { (yyval.I) = (yyvsp[0].I); }
#line 1905 "grammar.c" /* yacc.c:1646  */
    break;


#line 1909 "grammar.c" /* yacc.c:1646  */
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
