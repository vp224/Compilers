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
#line 1 "ass6_14CS30031.y" /* yacc.c:339  */

#include <bits/stdc++.h>
#include "ass6_14CS30031_target_translator.h"
using namespace std;


extern int yylex();
void yyerror(const char* s);
extern int yydebug; QuadArr Quad;
symboltable glbST;
symboltable *mainSymTab=&(glbST);
vector<string> stringConstant;
int stringcount=0;


#line 82 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SINGLE_COMMENT = 258,
    MULTI_COMMENT = 259,
    AUTO_KEYWORD = 260,
    ENUM_KEYWORD = 261,
    RESTRICT_KEYWORD = 262,
    UNSIGNED_KEYWORD = 263,
    BREAK_KEYWORD = 264,
    EXTERN_KEYWORD = 265,
    RETURN_KEYWORD = 266,
    VOID_KEYWORD = 267,
    CASE_KEYWORD = 268,
    FLOAT_KEYWORD = 269,
    SHORT_KEYWORD = 270,
    VOLATILE_KEYWORD = 271,
    CHAR_KEYWORD = 272,
    FOR_KEYWORD = 273,
    SIGNED_KEYWORD = 274,
    WHILE_KEYWORD = 275,
    CONST_KEYWORD = 276,
    GOTO_KEYWORD = 277,
    SIZEOF_KEYWORD = 278,
    BOOL_KEYWORD = 279,
    CONTINUE_KEYWORD = 280,
    IF_KEYWORD = 281,
    STATIC_KEYWORD = 282,
    COMPLEX_KEYWORD = 283,
    DEFAULT_KEYWORD = 284,
    INLINE_KEYWORD = 285,
    STRUCT_KEYWORD = 286,
    IMAGINARY_KEYWORD = 287,
    DO_KEYWORD = 288,
    INT_KEYWORD = 289,
    SWITCH_KEYWORD = 290,
    DOUBLE_KEYWORD = 291,
    LONG_KEYWORD = 292,
    TYPEDEF_KEYWORD = 293,
    ELSE_KEYWORD = 294,
    REGISTER_KEYWORD = 295,
    UNION_KEYWORD = 296,
    INTEGER_CONSTANT = 297,
    FLOAT_CONSTANT = 298,
    ENUMERATION = 299,
    CHAR_CONSTANT = 300,
    LEFT_SHIFT_EQUAL = 301,
    RIGHT_SHIFT_EQUAL = 302,
    ELLIPSES = 303,
    VAL_AT = 304,
    PLUS_PLUS = 305,
    MINUS_MINUS = 306,
    LEFT_SHIFT = 307,
    RIGHT_SHIFT = 308,
    LESS_EQUAL = 309,
    GREATER_EQUAL = 310,
    EQUAL_EQUAL = 311,
    NOT_EQUAL = 312,
    LOGICAL_AND = 313,
    LOGICAL_OR = 314,
    STAR_EQUAL = 315,
    BY_EQUAL = 316,
    PERCENT_EQUAL = 317,
    PLUS_EQUAL = 318,
    MINUS_EQUAL = 319,
    AND_EQUAL = 320,
    BITWISENOT_EQUAL = 321,
    OR_EQUAL = 322,
    STRING_LITERAL = 323,
    IDENTIFIER = 324
  };
#endif
/* Tokens.  */
#define SINGLE_COMMENT 258
#define MULTI_COMMENT 259
#define AUTO_KEYWORD 260
#define ENUM_KEYWORD 261
#define RESTRICT_KEYWORD 262
#define UNSIGNED_KEYWORD 263
#define BREAK_KEYWORD 264
#define EXTERN_KEYWORD 265
#define RETURN_KEYWORD 266
#define VOID_KEYWORD 267
#define CASE_KEYWORD 268
#define FLOAT_KEYWORD 269
#define SHORT_KEYWORD 270
#define VOLATILE_KEYWORD 271
#define CHAR_KEYWORD 272
#define FOR_KEYWORD 273
#define SIGNED_KEYWORD 274
#define WHILE_KEYWORD 275
#define CONST_KEYWORD 276
#define GOTO_KEYWORD 277
#define SIZEOF_KEYWORD 278
#define BOOL_KEYWORD 279
#define CONTINUE_KEYWORD 280
#define IF_KEYWORD 281
#define STATIC_KEYWORD 282
#define COMPLEX_KEYWORD 283
#define DEFAULT_KEYWORD 284
#define INLINE_KEYWORD 285
#define STRUCT_KEYWORD 286
#define IMAGINARY_KEYWORD 287
#define DO_KEYWORD 288
#define INT_KEYWORD 289
#define SWITCH_KEYWORD 290
#define DOUBLE_KEYWORD 291
#define LONG_KEYWORD 292
#define TYPEDEF_KEYWORD 293
#define ELSE_KEYWORD 294
#define REGISTER_KEYWORD 295
#define UNION_KEYWORD 296
#define INTEGER_CONSTANT 297
#define FLOAT_CONSTANT 298
#define ENUMERATION 299
#define CHAR_CONSTANT 300
#define LEFT_SHIFT_EQUAL 301
#define RIGHT_SHIFT_EQUAL 302
#define ELLIPSES 303
#define VAL_AT 304
#define PLUS_PLUS 305
#define MINUS_MINUS 306
#define LEFT_SHIFT 307
#define RIGHT_SHIFT 308
#define LESS_EQUAL 309
#define GREATER_EQUAL 310
#define EQUAL_EQUAL 311
#define NOT_EQUAL 312
#define LOGICAL_AND 313
#define LOGICAL_OR 314
#define STAR_EQUAL 315
#define BY_EQUAL 316
#define PERCENT_EQUAL 317
#define PLUS_EQUAL 318
#define MINUS_EQUAL 319
#define AND_EQUAL 320
#define BITWISENOT_EQUAL 321
#define OR_EQUAL 322
#define STRING_LITERAL 323
#define IDENTIFIER 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "ass6_14CS30031.y" /* yacc.c:355  */

  int intval;
  double doubleval;
  char charval;
  void *pointer;
  degen_typ dgn_type;
  string *strval;
  Symbdata *symboldat;
  SymbType *SymbTypei;
  quadEnum op;
  expression *exp_info;
  d_node *declarationi;
  vector<d_node*> *decvec;
  parameter *param;
  vector<parameter*> *parameter_list;

#line 277 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 294 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  366

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,     2,     2,    85,    78,     2,
      70,    71,    79,    80,    77,    81,    74,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    93,
      86,    92,    87,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    89,    76,    82,     2,     2,     2,
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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   129,   136,   161,   168,   177,   186,   189,
     198,   207,   214,   215,   236,   237,   271,   272,   273,   291,
     309,   310,   314,   324,   337,   341,   361,   380,   398,   399,
     405,   406,   407,   408,   409,   410,   414,   415,   419,   432,
     453,   474,   498,   499,   520,   544,   545,   566,   590,   591,
     617,   643,   669,   698,   699,   725,   754,   755,   778,   779,
     802,   803,   826,   827,   855,   856,   885,   886,   920,   921,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     955,   956,   960,   964,  1039,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1054,  1059,  1067,  1072,  1080,  1081,  1082,
    1083,  1087,  1091,  1095,  1096,  1100,  1101,  1102,  1106,  1107,
    1108,  1109,  1110,  1111,  1115,  1116,  1117,  1118,  1122,  1123,
    1124,  1125,  1126,  1130,  1131,  1135,  1136,  1140,  1141,  1142,
    1146,  1150,  1155,  1163,  1168,  1169,  1175,  1176,  1177,  1178,
    1179,  1180,  1195,  1199,  1200,  1204,  1208,  1212,  1213,  1217,
    1218,  1222,  1223,  1226,  1228,  1234,  1235,  1239,  1244,  1252,
    1258,  1262,  1263,  1267,  1271,  1275,  1276,  1280,  1281,  1282,
    1283,  1287,  1291,  1295,  1296,  1300,  1301,  1302,  1303,  1304,
    1305,  1309,  1310,  1311,  1315,  1319,  1323,  1328,  1337,  1341,
    1345,  1346,  1353,  1355,  1361,  1370,  1381,  1385,  1396,  1404,
    1420,  1421,  1422,  1423,  1436,  1446,  1447,  1451,  1452,  1456,
    1457,  1465,  1466
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SINGLE_COMMENT", "MULTI_COMMENT",
  "AUTO_KEYWORD", "ENUM_KEYWORD", "RESTRICT_KEYWORD", "UNSIGNED_KEYWORD",
  "BREAK_KEYWORD", "EXTERN_KEYWORD", "RETURN_KEYWORD", "VOID_KEYWORD",
  "CASE_KEYWORD", "FLOAT_KEYWORD", "SHORT_KEYWORD", "VOLATILE_KEYWORD",
  "CHAR_KEYWORD", "FOR_KEYWORD", "SIGNED_KEYWORD", "WHILE_KEYWORD",
  "CONST_KEYWORD", "GOTO_KEYWORD", "SIZEOF_KEYWORD", "BOOL_KEYWORD",
  "CONTINUE_KEYWORD", "IF_KEYWORD", "STATIC_KEYWORD", "COMPLEX_KEYWORD",
  "DEFAULT_KEYWORD", "INLINE_KEYWORD", "STRUCT_KEYWORD",
  "IMAGINARY_KEYWORD", "DO_KEYWORD", "INT_KEYWORD", "SWITCH_KEYWORD",
  "DOUBLE_KEYWORD", "LONG_KEYWORD", "TYPEDEF_KEYWORD", "ELSE_KEYWORD",
  "REGISTER_KEYWORD", "UNION_KEYWORD", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "ENUMERATION", "CHAR_CONSTANT", "LEFT_SHIFT_EQUAL",
  "RIGHT_SHIFT_EQUAL", "ELLIPSES", "VAL_AT", "PLUS_PLUS", "MINUS_MINUS",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUAL", "GREATER_EQUAL",
  "EQUAL_EQUAL", "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR", "STAR_EQUAL",
  "BY_EQUAL", "PERCENT_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL", "AND_EQUAL",
  "BITWISENOT_EQUAL", "OR_EQUAL", "STRING_LITERAL", "IDENTIFIER", "'('",
  "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "':'", "'='", "';'", "$accept", "N", "M", "function_end",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "type_qualifier_list", "parameter_type_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
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
      40,    41,    91,    93,    46,   123,   125,    44,    38,    42,
      43,    45,   126,    33,    47,    37,    60,    62,    94,   124,
      63,    58,    61,    59
};
# endif

#define YYPACT_NINF -300

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-300)))

#define YYTABLE_NINF -5

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1272,  -300,    -4,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,   -49,  -300,   113,  1272,  1272,  -300,  1272,  1272,
    1236,  -300,  -300,   -38,   -21,   297,  -300,  -300,   115,    18,
    -300,   -63,  -300,   466,   135,    29,  -300,  -300,  -300,  -300,
    -300,  -300,   -21,   -42,    38,  -300,   -19,   700,  1034,    12,
    -300,    72,  1076,    53,    83,    65,  -300,    91,  -300,  -300,
    -300,  -300,  1118,  1118,  -300,    82,   580,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,   100,    97,  1034,  -300,
      -7,   129,   143,    -2,   172,    90,    93,    89,   130,   -24,
    -300,  -300,   -17,  -300,   113,  -300,  -300,  -300,   141,  -300,
    -300,  -300,  -300,  -300,   155,  -300,  -300,    18,   115,  -300,
     908,  -300,   701,   780,    41,   135,   154,  1034,  -300,   -20,
    -300,  -300,  -300,     2,  -300,  -300,   145,  1034,   162,   150,
     580,  -300,  -300,  1034,   500,   500,  1034,   580,  -300,  -300,
     500,    36,  1307,  -300,  1307,   181,   190,  -300,  -300,   950,
    1034,   192,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  1034,  -300,  1034,  1034,  1034,  1034,  1034,  1034,
    1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,
     204,    11,  1034,  -300,   171,  -300,   386,  -300,  -300,  -300,
    -300,   866,  -300,  -300,  -300,  -300,  -300,   115,   193,  -300,
     188,  -300,    68,   622,   194,  1034,    42,  -300,   -15,  -300,
    -300,  -300,  -300,   500,   189,   175,  1034,  -300,   198,   189,
    -300,  -300,    77,   201,  -300,  -300,  -300,  -300,   992,  -300,
    -300,    94,  -300,   131,  -300,  -300,  -300,  -300,  -300,    -7,
      -7,   129,   129,   143,   143,   143,   143,    -2,    -2,   172,
      90,    93,  -300,  -300,  -300,  -300,  -300,  1034,   206,  -300,
     158,   908,   184,  -300,  -300,  -300,  1197,  -300,   208,   200,
     622,  -300,  -300,   205,  1034,   207,  -300,  -300,  -300,   189,
     211,   210,   262,   500,   211,   866,  -300,  -300,  1034,  -300,
    1034,  1034,  1034,   214,  -300,  -300,   782,  -300,  -300,  -300,
    -300,  -300,  -300,   215,  -300,   216,  -300,  1034,   212,  -300,
     220,  -300,   164,  -300,    89,  -300,   189,  -300,  -300,  -300,
     908,  -300,  -300,  -300,  -300,   500,  1034,  -300,   824,  -300,
     204,   203,  -300,   199,   500,  -300,   126,  -300,  -300,  -300,
    -300,   256,   235,  1034,  1034,  -300,  -300,  -300,  -300,   500,
     225,  -300,  -300,  -300,   500,  -300
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,     0,   128,   109,    97,   101,   106,   103,   129,
     102,   108,   127,   110,    98,   111,   130,   112,   104,   107,
     105,   100,     0,   208,     0,    86,    88,   113,    90,    91,
       0,   205,   207,   122,     0,     0,   210,   133,     0,   144,
      84,     0,    93,    95,   132,     0,    85,    87,    89,    92,
       1,   206,     0,   125,     0,   123,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     3,     0,     6,     7,
       8,     9,     0,     0,    10,     5,     0,   185,    30,    31,
      32,    33,    34,    35,   191,    12,    24,    36,     0,    38,
      42,    45,    48,    53,    56,    58,    60,    62,    64,    66,
      68,    80,     0,   188,     0,   189,   175,   176,     3,   186,
     177,   178,   179,   180,     0,   151,   145,   143,     0,    83,
       0,   211,     0,   154,   148,   131,     0,     0,   119,     0,
     202,     5,   204,     0,    36,    82,     0,   193,     0,     0,
       0,    28,   201,     0,     0,     0,     0,     0,    25,    26,
       0,     0,   115,   163,   117,     0,     0,    18,    19,     0,
       0,     0,    78,    79,    75,    76,    77,    74,    73,    72,
      71,    70,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,    95,   184,     0,   134,   152,   146,
      94,     0,   164,    96,   212,   209,   161,   160,     0,   153,
     155,   157,     0,     0,     0,   150,   147,   118,     0,   126,
     120,   124,   203,     0,   192,     0,     0,   200,     0,     2,
     183,     3,     0,     0,   181,    11,   114,   116,     0,    17,
      14,     0,    22,     0,    16,    69,    39,    40,    41,    43,
      44,    46,    47,    51,    52,    49,    50,    55,    54,    57,
      59,    61,     3,     3,     3,    81,   187,     0,     0,   169,
       0,     0,     0,   172,   159,   141,     0,   142,     0,     0,
       0,   140,   149,     0,     0,     0,   121,   182,     3,     2,
      29,     0,     0,     0,     0,     0,    37,    15,     0,    13,
       0,     0,     0,     0,   174,   165,     0,   167,   171,   156,
     158,   162,   137,     0,   135,     0,   139,   193,     0,     3,
       0,   196,     0,    23,     2,     2,     2,   173,   166,   170,
       0,   136,   138,     2,     3,     0,     0,    20,     0,    63,
      65,     0,   168,     0,     0,     2,     0,    21,     3,     3,
     197,   194,     0,     0,   193,     3,   198,    67,     2,     0,
       0,     2,     3,   195,     0,   199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,   -87,   -64,  -300,  -300,  -300,  -300,   -52,  -300,   -83,
      73,    74,    39,    71,   148,   112,   147,    43,    37,  -300,
     -54,  -105,  -300,   -57,  -120,    16,    17,  -300,   226,  -300,
     -35,    62,  -300,   293,  -118,   -36,  -300,   -16,   301,   -23,
    -300,  -300,  -111,  -300,  -300,  -300,    75,  -300,  -109,  -119,
      54,  -274,  -300,  -300,  -117,  -300,   -13,  -300,   156,  -300,
    -299,  -300,  -300,  -300,  -300,   320,  -300,  -300
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   138,    22,    85,    86,   241,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   172,   102,   136,    23,   104,    41,    42,    25,
      26,   153,    27,    54,    55,    28,    29,   194,    44,    45,
     215,   283,   117,   208,   209,   210,   211,   212,   155,   269,
     270,   271,   272,   273,   105,   106,   107,   108,   109,   110,
     225,   111,   112,   113,    30,    31,    32,   122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     133,   203,   145,   115,   135,   173,   134,   219,    43,    36,
     141,   221,   191,   216,   118,   202,   116,    24,   333,   151,
     148,   149,   114,    53,    53,     3,    35,   230,   231,    53,
     119,   228,   330,   234,     9,    -2,   134,    52,   233,    12,
     154,   152,    46,    47,   196,    48,    49,    24,     3,     3,
     127,   103,   181,   182,   242,   358,   220,     9,     9,   121,
     192,   286,    12,    12,   330,    33,    -2,   245,   213,   284,
     263,    34,   174,   135,   130,   134,   193,   175,   176,   192,
     224,   198,   137,   151,   183,   184,   229,   265,   115,   232,
     151,   246,   247,   248,   199,   222,   202,    39,    37,    38,
     221,   264,   280,   243,   154,   152,   287,   235,   279,   205,
     282,   154,   152,   192,   128,   129,   154,   152,   154,   152,
     214,   285,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   204,   277,
     207,   139,   291,   162,   163,   278,   142,   303,   293,   156,
     157,   158,   307,   143,   192,   296,   144,   164,   165,   166,
     167,   146,   168,   169,   170,   297,   202,   292,   187,   289,
     159,   298,   160,   150,   161,   313,   321,   115,   189,   315,
     198,   188,    37,    38,    37,    38,   134,   329,    -2,   171,
     202,   274,    39,   323,    39,   179,   180,   352,   300,   301,
     302,   202,   318,   192,   299,   123,    40,   124,   192,   177,
     178,   342,   103,   135,   236,   134,   237,   195,   345,   329,
     253,   254,   255,   256,   317,   202,   197,   350,   185,   186,
     217,   218,   226,   202,   305,   306,   223,   339,   340,   341,
     337,   338,   361,   227,   198,   326,   343,   365,   134,   134,
     249,   250,   238,   251,   252,   335,   257,   258,   351,   239,
     224,   244,   262,   120,   275,   276,   192,   281,   288,   290,
     344,   360,   294,   312,   363,   304,   308,   311,   314,   346,
     316,   319,   320,   334,   353,   354,   295,   327,   331,   332,
     336,   359,   349,   207,   348,   355,   362,   224,   364,   357,
     260,   134,     1,     2,     3,     4,    56,     5,    57,     6,
      58,     7,     8,     9,    10,    59,    11,    60,    12,    61,
      62,    13,    63,    64,    14,    15,    65,    16,   356,    17,
      66,    18,    67,    19,    20,   259,   261,    21,   325,    68,
      69,    70,    71,   324,   200,   126,   125,    72,    73,   322,
      51,   310,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,     0,     0,
       0,     0,    35,    77,     0,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     1,     2,     3,     4,    56,     5,    57,     6,    58,
       7,     8,     9,    10,    59,    11,    60,    12,    61,    62,
      13,    63,    64,    14,    15,    65,    16,     0,    17,    66,
      18,    67,    19,    20,     0,     0,    21,     0,    68,    69,
      70,    71,     0,     0,     0,     0,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,     0,     0,     0,
       0,    35,     0,     0,    78,    79,    80,    81,    82,    83,
       0,     1,     2,     3,     4,     0,     5,     0,     6,    84,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     0,     0,    56,
       0,    57,     0,    58,     0,     0,     0,     0,    59,     0,
      60,     0,    61,    62,     0,    63,    64,     0,     0,    65,
       0,     0,     0,    66,     0,    67,     0,     0,     0,     0,
       0,    -4,    68,    69,    70,    71,     0,     0,     0,     0,
      72,    73,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,     0,     0,     0,     0,    35,     0,     0,    78,    79,
      80,    81,    82,    83,     0,     0,     2,     3,     4,     0,
       0,     0,     6,    84,     7,     8,     9,    10,     0,    11,
       0,    12,     0,    62,    13,     0,     0,     0,    15,     0,
       0,     0,    17,     0,    18,     0,    19,    20,     0,     0,
       0,     0,    68,    69,    70,    71,     0,     0,     0,     3,
      72,    73,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    12,     0,    62,     0,     0,    74,   131,
      76,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    68,    69,    70,    71,     0,     0,
       0,     0,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,   131,    76,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     1,     2,     3,     4,
       0,     5,     0,     6,     0,     7,     8,     9,    10,     0,
      11,     0,    12,    62,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,     0,
       0,    21,    68,    69,    70,    71,     0,     0,     0,     0,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,   131,
      76,     0,     0,     0,     0,     0,    35,     0,    78,    79,
      80,    81,    82,    83,     0,     1,     2,     3,     4,     0,
       5,     0,     6,   132,     7,     8,     9,    10,     0,    11,
       0,    12,     0,     0,    13,    62,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,     0,     0,
      21,     0,     0,     0,    68,    69,    70,    71,     0,     0,
       0,     0,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,   206,
      74,   131,    76,     0,   267,     0,   268,   201,   328,     0,
      78,    79,    80,    81,    82,    83,    68,    69,    70,    71,
       0,     0,     0,     0,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,    74,   131,    76,     0,   267,     0,   268,   201,
     347,     0,    78,    79,    80,    81,    82,    83,    68,    69,
      70,    71,     0,     0,     0,     0,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,     0,    74,   131,    76,     0,   267,     0,
     268,   201,     0,     0,    78,    79,    80,    81,    82,    83,
      68,    69,    70,    71,     0,     0,     0,     0,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,     0,     0,    74,   131,    76,     0,
       0,     0,     0,   201,     0,     0,    78,    79,    80,    81,
      82,    83,    68,    69,    70,    71,     0,     0,     0,     0,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,    74,   131,
      76,   240,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    68,    69,    70,    71,     0,     0,
       0,     0,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
      74,   131,    76,     0,     0,     0,     0,   295,     0,     0,
      78,    79,    80,    81,    82,    83,    68,    69,    70,    71,
       0,     0,     0,     0,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,    74,   131,    76,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    68,    69,
      70,    71,     0,     0,     0,     0,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,     0,    74,   131,   140,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      68,    69,    70,    71,     0,     0,     0,     0,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,   131,   147,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,     0,    50,    21,     0,     0,
       0,     1,     2,     3,     4,   309,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
       0,     0,    21,     2,     3,     4,     0,     0,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,     0,    15,     0,     0,     0,    17,
       0,    18,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
      57,   120,    66,    39,    58,    88,    58,   127,    24,    22,
      62,   129,    99,   124,    77,   120,    39,     0,   317,    76,
      72,    73,    38,    44,    44,     7,    75,   144,   145,    44,
      93,   140,   306,   150,    16,    59,    88,    75,   147,    21,
      76,    76,    25,    26,   108,    28,    29,    30,     7,     7,
      92,    35,    54,    55,   159,   354,    76,    16,    16,    43,
      77,    76,    21,    21,   338,    69,    90,   172,    27,    27,
      59,    75,    79,   127,    93,   127,    93,    84,    85,    77,
     137,   117,    70,   140,    86,    87,   143,   192,   124,   146,
     147,   174,   175,   176,   117,    93,   201,    79,    69,    70,
     218,    90,   213,   160,   140,   140,   223,    71,   213,   122,
     215,   147,   147,    77,    76,    77,   152,   152,   154,   154,
      79,    79,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   122,    71,
     123,    69,   229,    46,    47,    77,    93,   267,    71,    49,
      50,    51,   271,    70,    77,   238,    91,    60,    61,    62,
      63,    70,    65,    66,    67,    71,   271,   231,    78,   226,
      70,    77,    72,    91,    74,   280,   293,   213,    89,   284,
     216,    88,    69,    70,    69,    70,   238,   306,    58,    92,
     295,   207,    79,   298,    79,    52,    53,    71,   262,   263,
     264,   306,   289,    77,    73,    70,    93,    72,    77,    80,
      81,   330,   196,   267,   152,   267,   154,    76,   335,   338,
     181,   182,   183,   184,   288,   330,    71,   344,    56,    57,
      76,    77,    70,   338,    76,    77,    91,   324,   325,   326,
      76,    77,   359,    93,   280,   302,   333,   364,   300,   301,
     177,   178,    71,   179,   180,   319,   185,   186,   345,    69,
     317,    69,    58,    92,    71,    77,    77,    73,    93,    71,
     334,   358,    71,    73,   361,    69,    92,    69,    73,   336,
      73,    71,    20,    71,   348,   349,    75,    73,    73,    73,
      70,   355,    93,   276,    91,    39,    71,   354,   362,   353,
     188,   353,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    93,    32,
      33,    34,    35,    36,    37,   187,   189,    40,   301,    42,
      43,    44,    45,   300,   118,    52,    45,    50,    51,   295,
      30,   276,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    -1,    78,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    80,    81,    82,    83,
      -1,     5,     6,     7,     8,    -1,    10,    -1,    12,    93,
      14,    15,    16,    17,    -1,    19,    -1,    21,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    40,    -1,    -1,     9,
      -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    18,    -1,
      20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    75,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,
      80,    81,    82,    83,    -1,    -1,     6,     7,     8,    -1,
      -1,    -1,    12,    93,    14,    15,    16,    17,    -1,    19,
      -1,    21,    -1,    23,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    -1,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,     7,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      19,    -1,    21,    23,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    37,    -1,
      -1,    40,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    75,    -1,    78,    79,
      80,    81,    82,    83,    -1,     5,     6,     7,     8,    -1,
      10,    -1,    12,    93,    14,    15,    16,    17,    -1,    19,
      -1,    21,    -1,    -1,    24,    23,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    -1,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    69,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    83,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    -1,    78,    79,    80,    81,    82,    83,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    68,    69,    70,    -1,    72,    -1,
      74,    75,    -1,    -1,    78,    79,    80,    81,    82,    83,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    80,    81,
      82,    83,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    80,    81,    82,    83,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    19,    -1,    21,    -1,
      -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    -1,     0,    40,    -1,    -1,
      -1,     5,     6,     7,     8,    48,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    19,    -1,    21,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    40,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    -1,    36,    37,
      -1,    -1,    40,     6,     7,     8,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    19,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      -1,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,    10,    12,    14,    15,    16,
      17,    19,    21,    24,    27,    28,    30,    32,    34,    36,
      37,    40,    97,   119,   120,   123,   124,   126,   129,   130,
     158,   159,   160,    69,    75,    75,   150,    69,    70,    79,
      93,   121,   122,   131,   132,   133,   120,   120,   120,   120,
       0,   159,    75,    44,   127,   128,     9,    11,    13,    18,
      20,    22,    23,    25,    26,    29,    33,    35,    42,    43,
      44,    45,    50,    51,    68,    69,    70,    76,    78,    79,
      80,    81,    82,    83,    93,    98,    99,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   117,   119,   120,   148,   149,   150,   151,   152,
     153,   155,   156,   157,   131,   129,   133,   136,    77,    93,
      92,   119,   161,    70,    72,   132,   127,    92,    76,    77,
      93,    69,    93,   117,   101,   114,   118,    70,    96,    69,
      70,   101,    93,    70,    91,    96,    70,    70,   101,   101,
      91,   117,   124,   125,   129,   142,    49,    50,    51,    70,
      72,    74,    46,    47,    60,    61,    62,    63,    65,    66,
      67,    92,   116,   103,    79,    84,    85,    80,    81,    52,
      53,    54,    55,    86,    87,    56,    57,    78,    88,    89,
      95,    95,    77,    93,   131,    76,    96,    71,   129,   133,
     122,    75,   115,   143,   119,   150,    69,   120,   137,   138,
     139,   140,   141,    27,    79,   134,   136,    76,    77,   118,
      76,   128,    93,    91,   117,   154,    70,    93,   142,   117,
     148,   148,   117,   142,   148,    71,   125,   125,    71,    69,
      71,   100,   115,   117,    69,   115,   103,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   107,   107,   108,
     109,   110,    58,    59,    90,   115,   152,    72,    74,   143,
     144,   145,   146,   147,   131,    71,    77,    71,    77,   115,
     136,    73,   115,   135,    27,    79,    76,   148,    93,   117,
      71,    95,    96,    71,    71,    75,   103,    71,    77,    73,
      96,    96,    96,   118,    69,    76,    77,   143,    92,    48,
     140,    69,    73,   115,    73,   115,    73,    96,    95,    71,
      20,   148,   144,   115,   111,   112,   117,    73,    76,   143,
     145,    73,    73,   154,    71,    96,    70,    76,    77,    95,
      95,    95,   143,    95,    96,   148,   117,    76,    91,    93,
     148,    95,    71,    96,    96,    39,    93,   114,   154,    96,
      95,   148,    71,    95,    96,   148
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    98,    98,    98,    98,    98,
      98,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   103,   104,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   107,   107,
     107,   107,   107,   108,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   125,   125,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   131,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   143,   143,   143,   144,   144,   144,
     144,   145,   146,   147,   147,   148,   148,   148,   148,   148,
     148,   149,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   156,   156,   156,
     157,   157,   157,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     2,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     6,     1,     6,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     1,     2,     1,     2,
       1,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     5,     4,
       5,     6,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     6,     5,     6,     5,
       4,     4,     4,     2,     1,     2,     3,     1,     0,     1,
       0,     1,     2,     1,     0,     1,     3,     1,     3,     2,
       1,     1,     3,     1,     1,     3,     4,     2,     4,     1,
       3,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     3,     2,     1,     3,     1,     1,
       2,     1,     1,     0,     8,    12,     5,     8,     9,    14,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     4,
       2,     1,     2
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
#line 121 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->nextlist=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 129 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->instr=Quad.nextinstr;
	}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 137 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		degen_typ type_now=(yyvsp[-1].dgn_type);
		int size_now=-1;
		if(type_now==chartyp){
			size_now=CHARSIZE;
		}
		else if(type_now==inttyp){
			size_now=INTSIZE;
		}
		else if(type_now==doubletyp){
			size_now=DOUBLE_SIZE;
		}
		d_node *my_dec=(yyvsp[0].declarationi);
		Symbdata *var	=glbST.lookup(my_dec->name);
		if(my_dec->dgn_type==fntyp){
			Symbdata *retval=var->nest_symtab->lookup("retVal",type_now,my_dec->dt);
			var->offset=mainSymTab->offset;
			var->size=0;
			var->initial_value=NULL;
		}
		(yyval.declarationi)=(yyvsp[0].declarationi);
	}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 162 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		string temp1=(*((yyvsp[0].strval)));
		mainSymTab->lookup(temp1);
		(yyval.exp_info)->loc=temp1;		
	}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 169 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp(inttyp);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].intval),ASSIGN);
		symbolvalue *temp=new symbolvalue;
		temp->setval((yyvsp[0].intval));			
		mainSymTab->lookup((yyval.exp_info)->loc)->initial_value=temp;
	}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 178 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp(doubletyp);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].doubleval),ASSIGN);
		symbolvalue *temp=new symbolvalue;
		temp->setval((yyvsp[0].doubleval));
		mainSymTab->lookup((yyval.exp_info)->loc)->initial_value=temp;
	}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 187 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
	}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 190 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp(chartyp);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].charval),ASSIGN);
		symbolvalue *temp=new symbolvalue;
		temp->setval((yyvsp[0].charval));
		mainSymTab->lookup((yyval.exp_info)->loc)->initial_value=temp;
	}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 199 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		stringstream temp1;
		temp1<<".LC"<<stringcount;
		temp1>>(yyval.exp_info)->loc;
		stringcount++;
		stringConstant.push_back(*(yyvsp[0].strval));
	}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 208 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 216 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType temp1=mainSymTab->lookup((yyvsp[-3].exp_info)->loc)->type;
		string temp2;
		if((yyvsp[-3].exp_info)->cont==0){ 
			temp2=mainSymTab->gentemp(inttyp);
			Quad.emit(temp2,0,ASSIGN);
			(yyvsp[-3].exp_info)->container=new string(temp2);
		}
		temp2=*((yyvsp[-3].exp_info)->container);
		int mult_size=temp1.listl[(yyvsp[-3].exp_info)->cont];
		(yyvsp[-3].exp_info)->cont++;
		stringstream temp3;
		temp3<<mult_size;
		string temp4;
		temp3>>temp4;
		Quad.emit(temp2,temp2,MULT,temp4);
		Quad.emit(temp2,temp2,PLUS,(yyvsp[-1].exp_info)->loc);
		Quad.emit(temp2,temp2,MULT,"4");
		(yyval.exp_info)=(yyvsp[-3].exp_info);
	}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 238 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		string function_name=(yyvsp[-3].exp_info)->loc;
		symboltable *functionsymbol=glbST.lookup(function_name)->nest_symtab;
		vector<parameter*> arglist=*((yyvsp[-1].parameter_list));
		vector<Symbdata*> parameterlist=functionsymbol->symbvec;
		bool many=false;
		for(int i=0;i<arglist.size();i++)
		{
			if(parameterlist[i]->name=="retVal"){
				many=true;
			}
			if(arglist[i]->type.dgn_type!=parameterlist[i]->type.dgn_type && arglist[i]->name[0]!='.'){
				string temp=mainSymTab->gentemp(parameterlist[i]->type.dgn_type);
				Quad.conv2type(temp,parameterlist[i]->type.dgn_type,arglist[i]->name,arglist[i]->type.dgn_type);
				arglist[i]->name=temp;
			}
			Quad.emit(arglist[i]->name,"",PARAM,"");
		}
		degen_typ return_type=functionsymbol->lookup("retVal")->type.dgn_type;
		if(return_type==voidtyp){
			Quad.emit(function_name,(int)arglist.size(),CALL);
		}
		else{
			string retval=mainSymTab->gentemp(return_type);
			string size1;
			stringstream temp1;
			temp1<<arglist.size();
			temp1>>size1;
			Quad.emit(function_name,size1,CALL,retval);
			(yyval.exp_info)=new expression;
			(yyval.exp_info)->loc=retval;
		}
	}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 274 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		SymbType temp1=mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type;
		if(temp1.dgn_type==arrtyp){
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type.dgn_t);
			string t1=mainSymTab->gentemp(temp1.dgn_t);
			Quad.emit(t1,(yyvsp[-1].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-1].exp_info)->container));
			Quad.emit((yyval.exp_info)->loc,t1,ASSIGN,"");
			Quad.emit(t1,t1,PLUS,"1");
			Quad.emit((yyvsp[-1].exp_info)->loc,t1,ARRAY_INDEX_TO,*((yyvsp[-1].exp_info)->container));
		}
		else{
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type.dgn_type);
			Quad.emit((yyval.exp_info)->loc,(yyvsp[-1].exp_info)->loc,ASSIGN,"");
			Quad.emit((yyvsp[-1].exp_info)->loc,(yyvsp[-1].exp_info)->loc,PLUS,"1");
		}
	}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 292 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		SymbType temp1=mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type;
		if(temp1.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(temp1.dgn_t);
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type.dgn_t);
			Quad.emit(t1,(yyvsp[-1].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-1].exp_info)->container));
			Quad.emit((yyval.exp_info)->loc,t1,ASSIGN,"");
			Quad.emit(t1,t1,MINUS,"1");
			Quad.emit((yyvsp[-1].exp_info)->loc,t1,ARRAY_INDEX_TO,*((yyvsp[-1].exp_info)->container));
		}
		else{
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type.dgn_type);
			Quad.emit((yyval.exp_info)->loc,(yyvsp[-1].exp_info)->loc,ASSIGN,"");
			Quad.emit((yyvsp[-1].exp_info)->loc,(yyvsp[-1].exp_info)->loc,MINUS,"1");
		}
	}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 315 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		parameter *temp=new parameter;
		temp->name=(yyvsp[0].exp_info)->loc;
		if(temp->name[0]!='.'){
			temp->type=mainSymTab->lookup(temp->name)->type;
		}
		(yyval.parameter_list)=new vector<parameter*>;
		(yyval.parameter_list)->push_back(temp);	
	}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 325 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		parameter *temp=new parameter;
		temp->name=(yyvsp[0].exp_info)->loc;
		if(temp->name[0]!='.'){
			temp->type=mainSymTab->lookup(temp->name)->type;
		}
		(yyval.parameter_list)=(yyvsp[-2].parameter_list);
		(yyval.parameter_list)->push_back(temp);
	}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 338 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 342 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType type1=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(type1.dgn_type==arrtyp){
			string temp1=mainSymTab->gentemp(type1.dgn_t);
			Quad.emit(temp1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			Quad.emit(temp1,temp1,PLUS,"1");
			Quad.emit((yyvsp[0].exp_info)->loc,temp1,ARRAY_INDEX_TO,*((yyvsp[0].exp_info)->container));
			(yyval.exp_info)=new expression;
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_t);
			Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,ASSIGN,"");
		}
		else{
			Quad.emit((yyvsp[0].exp_info)->loc,(yyvsp[0].exp_info)->loc,PLUS,"1");
			(yyval.exp_info)=new expression;
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
			Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,ASSIGN,"");
		}
		
	}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 362 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType type1=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(type1.dgn_type==arrtyp){
			string temp1=mainSymTab->gentemp(type1.dgn_t);
			Quad.emit(temp1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			Quad.emit(temp1,temp1,MINUS,"1");
			Quad.emit((yyvsp[0].exp_info)->loc,temp1,ARRAY_INDEX_TO,*((yyvsp[0].exp_info)->container));
			(yyval.exp_info)=new expression;
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_t);
			Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,ASSIGN,"");
		}
		else{
			Quad.emit((yyvsp[0].exp_info)->loc,(yyvsp[0].exp_info)->loc,MINUS,"1");
			(yyval.exp_info)=new expression;
			(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
			Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,ASSIGN,"");
		}
	}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 381 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].charval)=='&'){
			(yyval.exp_info)=new expression;
			(yyval.exp_info)->loc=mainSymTab->gentemp();
			Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,REFERENCE,"");
		}
		else if((yyvsp[-1].charval)=='*'){
			(yyval.exp_info)=new expression;
			(yyval.exp_info)->loc=mainSymTab->gentemp();
			Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,UNARY_MINUS,"");
		}
		else{
		(yyval.exp_info)=(yyvsp[0].exp_info);
		}
		
		
	}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 400 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
	}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 405 "ass6_14CS30031.y" /* yacc.c:1646  */
    {(yyval.charval)='&';}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 406 "ass6_14CS30031.y" /* yacc.c:1646  */
    {(yyval.charval)='*';}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 407 "ass6_14CS30031.y" /* yacc.c:1646  */
    {(yyval.charval)='+';}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 408 "ass6_14CS30031.y" /* yacc.c:1646  */
    {(yyval.charval)='-';}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 409 "ass6_14CS30031.y" /* yacc.c:1646  */
    {(yyval.charval)='~';}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 410 "ass6_14CS30031.y" /* yacc.c:1646  */
    {(yyval.charval)='!';}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 420 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType typ1=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(typ1.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(typ1.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=typ1.dgn_t;
		}
		else{
			(yyval.exp_info)=(yyvsp[0].exp_info);
		}
	}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 433 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		degen_typ final_type=max(mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type.dgn_type,mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
		(yyval.exp_info)->loc=mainSymTab->gentemp(final_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,MULT,(yyvsp[0].exp_info)->loc);
	}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 454 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		degen_typ final_type=max(mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type.dgn_type,mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
		(yyval.exp_info)->loc=mainSymTab->gentemp(final_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,DIVIDE,(yyvsp[0].exp_info)->loc);
	}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 475 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		degen_typ final_type=max(mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type.dgn_type,mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
		(yyval.exp_info)->loc=mainSymTab->gentemp(final_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,MODULO,(yyvsp[0].exp_info)->loc);
	}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 500 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		degen_typ final_type=max(mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type.dgn_type,mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
		(yyval.exp_info)->loc=mainSymTab->gentemp(final_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,PLUS,(yyvsp[0].exp_info)->loc);
	}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 521 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		degen_typ final_type=max(mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type.dgn_type,mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
		(yyval.exp_info)->loc=mainSymTab->gentemp(final_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,MINUS,(yyvsp[0].exp_info)->loc);
	}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 546 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		degen_typ final_type=max(mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type.dgn_type,mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
		(yyval.exp_info)->loc=mainSymTab->gentemp(final_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,SHIFT_LEFT,(yyvsp[0].exp_info)->loc);
	}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 567 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		degen_typ final_type=max(mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type.dgn_type,mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type.dgn_type);
		(yyval.exp_info)->loc=mainSymTab->gentemp(final_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,SHIFT_RIGHT,(yyvsp[0].exp_info)->loc);
	}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 592 "ass6_14CS30031.y" /* yacc.c:1646  */
    {	
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		(yyval.exp_info)->dgn_type=booltyp;
		Quad.emit((yyval.exp_info)->loc,"1",ASSIGN,"");
		(yyval.exp_info)->true_l=genList(Quad.nextinstr);
		Quad.emit("",(yyvsp[-2].exp_info)->loc,IF_LESS,(yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc,"0",ASSIGN,"");
		(yyval.exp_info)->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 618 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		(yyval.exp_info)->dgn_type=booltyp;
		Quad.emit((yyval.exp_info)->loc,"1",ASSIGN,"");
		(yyval.exp_info)->true_l=genList(Quad.nextinstr);
		Quad.emit("",(yyvsp[-2].exp_info)->loc,IF_GREATER,(yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc,"0",ASSIGN,"");
		(yyval.exp_info)->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 644 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		(yyval.exp_info)->dgn_type=booltyp;
		Quad.emit((yyval.exp_info)->loc,"1",ASSIGN,"");
		(yyval.exp_info)->true_l=genList(Quad.nextinstr);
		Quad.emit("",(yyvsp[-2].exp_info)->loc,IF_LESS_OR_EQUAL,(yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc,"0",ASSIGN,"");
		(yyval.exp_info)->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 670 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		(yyval.exp_info)->dgn_type=booltyp;
		Quad.emit((yyval.exp_info)->loc,"1",ASSIGN,"");
		(yyval.exp_info)->true_l=genList(Quad.nextinstr);
		Quad.emit("",(yyvsp[-2].exp_info)->loc,IF_GREATER_OR_EQUAL,(yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc,"0",ASSIGN,"");
		(yyval.exp_info)->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 700 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		(yyval.exp_info)->dgn_type=booltyp;
		Quad.emit((yyval.exp_info)->loc,"1",ASSIGN,"");
		(yyval.exp_info)->true_l=genList(Quad.nextinstr);
		Quad.emit("",(yyvsp[-2].exp_info)->loc,IF_NOT_EQUAL,(yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc,"0",ASSIGN,"");
		(yyval.exp_info)->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 726 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		(yyval.exp_info)->dgn_type=booltyp;
		Quad.emit((yyval.exp_info)->loc,"1",ASSIGN,"");
		(yyval.exp_info)->true_l=genList(Quad.nextinstr);
		Quad.emit("",(yyvsp[-2].exp_info)->loc,IF_EQUAL,(yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc,"0",ASSIGN,"");
		(yyval.exp_info)->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 756 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,AND,(yyvsp[0].exp_info)->loc);
	}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 780 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,XOR,(yyvsp[0].exp_info)->loc);
	}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 804 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-2].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-2].exp_info)->container));
			(yyvsp[-2].exp_info)->loc=t;
			(yyvsp[-2].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp();
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-2].exp_info)->loc,OR,(yyvsp[0].exp_info)->loc);
	}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 828 "ass6_14CS30031.y" /* yacc.c:1646  */
    {	
		SymbType t5=mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type;
		if(t5.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t5.dgn_t);
			Quad.emit(t1,(yyvsp[-1].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-1].exp_info)->container));
			(yyvsp[-1].exp_info)->loc=t1;
			(yyvsp[-1].exp_info)->dgn_type=t5.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-5].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-5].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-5].exp_info)->container));
			(yyvsp[-5].exp_info)->loc=t;
			(yyvsp[-5].exp_info)->dgn_type=t1.dgn_t;
		}
		Quad.backpatch((yyvsp[-4].exp_info)->nextlist,Quad.nextinstr); 
		Quad.convInt2Bool((yyvsp[-5].exp_info));	
		Quad.backpatch((yyvsp[0].exp_info)->nextlist,Quad.nextinstr);
		Quad.convInt2Bool((yyvsp[-1].exp_info));
		Quad.backpatch((yyvsp[-5].exp_info)->true_l,(yyvsp[-2].exp_info)->instr);	
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->false_l=merge((yyvsp[-5].exp_info)->false_l,(yyvsp[-1].exp_info)->false_l);
		(yyval.exp_info)->true_l=(yyvsp[-1].exp_info)->true_l; 
	}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 857 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t5=mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type;
		if(t5.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t5.dgn_t);
			Quad.emit(t1,(yyvsp[-1].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-1].exp_info)->container));
			(yyvsp[-1].exp_info)->loc=t1;
			(yyvsp[-1].exp_info)->dgn_type=t5.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-5].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-5].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-5].exp_info)->container));
			(yyvsp[-5].exp_info)->loc=t;
			(yyvsp[-5].exp_info)->dgn_type=t1.dgn_t;
		}
		Quad.backpatch((yyvsp[-4].exp_info)->nextlist,Quad.nextinstr);
		Quad.convInt2Bool((yyvsp[-5].exp_info));
		Quad.convInt2Bool((yyvsp[-1].exp_info));
		Quad.backpatch((yyvsp[0].exp_info)->nextlist,Quad.nextinstr);
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->dgn_type=booltyp;
		Quad.backpatch((yyvsp[-5].exp_info)->false_l,(yyvsp[-2].exp_info)->instr);
		(yyval.exp_info)->true_l=merge((yyvsp[-5].exp_info)->true_l,(yyvsp[-1].exp_info)->true_l);
		(yyval.exp_info)->false_l=(yyvsp[-1].exp_info)->false_l;
	}
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 887 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t9=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t9.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t9.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t9.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-8].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,(yyvsp[-8].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[-8].exp_info)->container));
			(yyvsp[-8].exp_info)->loc=t;
			(yyvsp[-8].exp_info)->dgn_type=t1.dgn_t;
		}
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=mainSymTab->gentemp(mainSymTab->lookup((yyvsp[-4].exp_info)->loc)->type.dgn_type);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,ASSIGN);
		list<int> temp1=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
        Quad.backpatch((yyvsp[-3].exp_info)->nextlist,Quad.nextinstr);
        Quad.emit((yyval.exp_info)->loc,(yyvsp[-4].exp_info)->loc,ASSIGN);
        temp1=merge(temp1,genList(Quad.nextinstr));
        Quad.emit("","",GOTO,"");
		Quad.backpatch((yyvsp[-7].exp_info)->nextlist,Quad.nextinstr);
		Quad.convInt2Bool((yyvsp[-8].exp_info));
		Quad.backpatch((yyvsp[-8].exp_info)->true_l,(yyvsp[-5].exp_info)->instr);
		Quad.backpatch((yyvsp[-8].exp_info)->false_l,(yyvsp[-1].exp_info)->instr);
		Quad.backpatch(temp1,Quad.nextinstr);
	}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 922 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		SymbType t3=mainSymTab->lookup((yyvsp[0].exp_info)->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_FROM,*((yyvsp[0].exp_info)->container));
			(yyvsp[0].exp_info)->loc=t1;
			(yyvsp[0].exp_info)->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup((yyvsp[-2].exp_info)->loc)->type;
		if(t1.dgn_type==arrtyp){
			Quad.emit((yyvsp[-2].exp_info)->loc,(yyvsp[0].exp_info)->loc,ARRAY_INDEX_TO,*((yyvsp[-2].exp_info)->container));
		}
		else{
			Quad.emit((yyvsp[-2].exp_info)->loc,(yyvsp[0].exp_info)->loc,ASSIGN,"");
		}
		(yyval.exp_info)=(yyvsp[-2].exp_info);
    }
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 965 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
        degen_typ type_now=(yyvsp[-2].dgn_type);
        int size_now=-1;
        if(type_now==chartyp){ 
        	size_now=CHARSIZE;
        }
        if(type_now==inttyp){
        	size_now=INTSIZE;
        }
        if(type_now==doubletyp){
        	size_now=DOUBLE_SIZE;
        }
        vector<d_node*> lst=*((yyvsp[-1].decvec));
        for(vector<d_node*>::iterator it=lst.begin();it!=lst.end();it++)
        {
            d_node *my_dec = *it;
            if(my_dec->dgn_type==fntyp){
                mainSymTab=&(glbST);
                Quad.emit(my_dec->name,"",FUNCTION_END,"");
            }            
            if(my_dec->dgn_type==fntyp)
            {
                Symbdata *var=mainSymTab->lookup(my_dec->name);
                Symbdata *retval=var->nest_symtab->lookup("retVal",type_now,my_dec->dt);
                var->offset=mainSymTab->offset;
                var->size= 0;
                var->initial_value=NULL;
                continue;
            }
            Symbdata *var=mainSymTab->lookup(my_dec->name,type_now);
            
            var->nest_symtab=NULL;
            if(my_dec->listl==vector<int>() && my_dec->dt==0)
            {
                var->type.dgn_type=type_now;
                var->offset=mainSymTab->offset;
                var->offset+=size_now;
                var->size=size_now;
                if(my_dec->initial_value!=NULL){
                    string rval = my_dec->initial_value->loc;
                    Quad.emit(var->name,rval,ASSIGN,"");
                    var->initial_value=mainSymTab->lookup(rval)->initial_value;
                }
                else{
                    var->initial_value=NULL;
                }
            }
            else if(my_dec->listl!=vector<int>())
            {
                var->type.dgn_type=arrtyp;
                var->type.dgn_t=type_now;
                var->type.listl=my_dec->listl;
                var->offset = mainSymTab->offset;
                int sz=size_now;
                vi tmp=var->type.listl;
                int tsz = tmp.size();
                for(int i=0;i<tsz;i++){
                	sz *= tmp[i];
                }
                mainSymTab->offset+=sz;
                var->size=sz;
            }
            else if(my_dec->dt!=0)
            {
                var->type.dgn_type=ptrtyp;
                var->type.dgn_t=type_now;
                var->type.dt=my_dec->dt;
                var->offset=mainSymTab->offset; 
                size_now=PTRSIZE;
                mainSymTab->offset+=size_now;
                var->size=size_now;
            }
        } 
	}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1055 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.decvec)=new vector<d_node*>;
		(yyval.decvec)->push_back((yyvsp[0].declarationi));
	}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1060 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].decvec)->push_back((yyvsp[0].declarationi));
		(yyval.decvec)=(yyvsp[-2].decvec);
	}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1068 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[0].declarationi);
		(yyval.declarationi)->initial_value=NULL;
	}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1073 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[-2].declarationi);
		(yyval.declarationi)->initial_value=(yyvsp[0].exp_info);
	}
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1088 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.dgn_type)=voidtyp;
	}
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1092 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.dgn_type)=chartyp;
	}
#line 2929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1097 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.dgn_type)=inttyp;
	}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1103 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.dgn_type)=doubletyp;
	}
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1151 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[0].declarationi);
		(yyval.declarationi)->dt=(yyvsp[-1].intval);
	}
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1156 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[0].declarationi);
		(yyval.declarationi)->dt=0;
	}
#line 2963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1164 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=new d_node;
		(yyval.declarationi)->name=*((yyvsp[0].strval));
	}
#line 2972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1170 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[-4].declarationi);
		int index=mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->initial_value->intval;
		(yyval.declarationi)->listl.push_back(index);
	}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1181 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[-3].declarationi);
		(yyval.declarationi)->dgn_type=fntyp;
		Symbdata *funcdata=mainSymTab->lookup((yyval.declarationi)->name,(yyval.declarationi)->dgn_type);
		symboltable *funcsymb=new symboltable;
		funcdata->nest_symtab=funcsymb;
		vector<parameter*> paramlist=*((yyvsp[-1].parameter_list));
		for(int i=0;i<(int)paramlist.size();i++){
			parameter *my_parameter=paramlist[i];
			funcsymb->lookup(my_parameter->name,my_parameter->type.dgn_type);
		}
		mainSymTab=funcsymb;
		Quad.emit((yyval.declarationi)->name,"",FUNCTION_BEG,"");
	}
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1201 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1;
	}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1205 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1+(yyvsp[0].intval);
	}
#line 3017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1228 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.parameter_list)=new vector<parameter*>;
	}
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1240 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.parameter_list)=new vector<parameter *>;
		(yyval.parameter_list)->push_back((yyvsp[0].param));
	}
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1245 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].parameter_list)->push_back((yyvsp[0].param));
		(yyval.parameter_list)=(yyvsp[-2].parameter_list);
	}
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1253 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.param)=new parameter;
		(yyval.param)->name=(yyvsp[0].declarationi)->name;
		(yyval.param)->type.dgn_type=(yyvsp[-1].dgn_type);
	}
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1272 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1316 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1324 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
		Quad.backpatch((yyvsp[0].exp_info)->nextlist,Quad.nextinstr);
	}
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1329 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		Quad.backpatch((yyvsp[-2].exp_info)->nextlist,(yyvsp[-1].exp_info)->instr);
		(yyval.exp_info)->nextlist=(yyvsp[0].exp_info)->nextlist;
	}
#line 3088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1338 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1347 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1355 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1362 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		Quad.backpatch((yyvsp[-4].exp_info)->nextlist,Quad.nextinstr);
		Quad.convInt2Bool((yyvsp[-5].exp_info));
		Quad.backpatch((yyvsp[-5].exp_info)->true_l,(yyvsp[-2].exp_info)->instr);
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->nextlist=merge((yyvsp[-1].exp_info)->nextlist,(yyvsp[0].exp_info)->nextlist);
		(yyval.exp_info)->nextlist=merge((yyval.exp_info)->nextlist,(yyvsp[-5].exp_info)->false_l);
	}
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1371 "ass6_14CS30031.y" /* yacc.c:1646  */
    {	
        Quad.backpatch((yyvsp[-8].exp_info)->nextlist,Quad.nextinstr);
        Quad.convInt2Bool((yyvsp[-9].exp_info));
        Quad.backpatch((yyvsp[-9].exp_info)->true_l,(yyvsp[-6].exp_info)->instr);
        Quad.backpatch((yyvsp[-9].exp_info)->false_l,(yyvsp[-2].exp_info)->instr);
        (yyval.exp_info)=new expression;
        (yyval.exp_info)->nextlist=merge((yyvsp[-5].exp_info)->nextlist,(yyvsp[-4].exp_info)->nextlist);        
        (yyval.exp_info)->nextlist=merge((yyval.exp_info)->nextlist,(yyvsp[-1].exp_info)->nextlist);   
        (yyval.exp_info)->nextlist=merge((yyval.exp_info)->nextlist,(yyvsp[0].exp_info)->nextlist);
	}
#line 3140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1386 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
        Quad.emit("","",GOTO,"");
        Quad.backpatch(genList(Quad.nextinstr-1),(yyvsp[-6].exp_info)->instr);    
        Quad.backpatch((yyvsp[-3].exp_info)->nextlist,Quad.nextinstr);
        Quad.convInt2Bool((yyvsp[-4].exp_info));
        Quad.backpatch((yyvsp[-4].exp_info)->true_l,(yyvsp[-1].exp_info)->instr);
        Quad.backpatch((yyvsp[0].exp_info)->nextlist,(yyvsp[-6].exp_info)->instr);    
        (yyval.exp_info)=new expression;
        (yyval.exp_info)->nextlist=(yyvsp[-4].exp_info)->false_l;
    }
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1397 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
        Quad.convInt2Bool((yyvsp[-2].exp_info));
        Quad.backpatch((yyvsp[-2].exp_info)->true_l,(yyvsp[-7].exp_info)->instr);
        Quad.backpatch((yyvsp[-6].exp_info)->nextlist,(yyvsp[-5].exp_info)->instr);
        (yyval.exp_info)=new expression;
        (yyval.exp_info)->nextlist=(yyvsp[-2].exp_info)->false_l;
	}
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1405 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
        Quad.emit("","",GOTO,"");
        Quad.backpatch(genList(Quad.nextinstr-1), (yyvsp[-5].exp_info)->instr );
        Quad.backpatch((yyvsp[-7].exp_info)->nextlist,Quad.nextinstr);
        Quad.convInt2Bool((yyvsp[-8].exp_info));
        Quad.backpatch((yyvsp[-8].exp_info)->true_l,(yyvsp[-1].exp_info)->instr);
        Quad.backpatch((yyvsp[0].exp_info)->nextlist,(yyvsp[-5].exp_info)->instr);
        Quad.backpatch((yyvsp[-3].exp_info)->nextlist,(yyvsp[-9].exp_info)->instr);
        (yyval.exp_info) = new expression;
        (yyval.exp_info)->nextlist = (yyvsp[-8].exp_info)->false_l;
    }
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1424 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		if(mainSymTab->lookup("retVal")->type.dgn_type==mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type.dgn_type){
			Quad.emit((yyvsp[-1].exp_info)->loc,"",RETURN,"");
		}
		else{
			degen_typ target_type=mainSymTab->lookup("retVal")->type.dgn_type;
			string temp1=mainSymTab->gentemp(target_type);
			Quad.conv2type(temp1,target_type,(yyvsp[-1].exp_info)->loc,mainSymTab->lookup((yyvsp[-1].exp_info)->loc)->type.dgn_type);
			Quad.emit(temp1,"",RETURN,"");
		}
		(yyval.exp_info)=new expression;
	}
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1437 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		if(mainSymTab->lookup("retVal")->type.dgn_type==voidtyp){
			Quad.emit("","",RETURN,"");
		}
		(yyval.exp_info)=new expression;
	}
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1458 "ass6_14CS30031.y" /* yacc.c:1646  */
    {
		mainSymTab=&(glbST);
		Quad.emit((yyvsp[-1].declarationi)->name,"",FUNCTION_END,"");
	}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3224 "y.tab.c" /* yacc.c:1646  */
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
#line 1468 "ass6_14CS30031.y" /* yacc.c:1906  */


void yyerror(const char* s) {
	printf("%s", s);
}

int main(int argc,char *argv[])
{
    bool fail= yyparse();  
    int sz = Quad.a1.size();
    for(int i=0;i<sz;i++)
    {
        cout<<i<<": "; Quad.a1[i].printquad();
    }
    cout<<"##############################SymbolTABLE(mainSymTab)##############################"<<'\n';
    mainSymTab->printSymTab();
    cout<<"##################################################"<<'\n';
    for(map<string,Symbdata*> :: iterator it =mainSymTab->Symboltable.begin(); it !=mainSymTab->Symboltable.end(); ++it)
    {
        Symbdata *tmp = it->second;
        if(tmp->nest_symtab != NULL)
        {
            cout<<"##############################NestedSymbolTABLE("<<tmp->name<<")##############################"<<'\n';
            tmp->nest_symtab->printSymTab();
            cout<<"###########################################"<<'\n';
        }
    }
    string output="a.out";
    if(argc==2){
    	output=string(argv[1]);
    }
    string temp=output+".s";
    ofstream outf(temp.c_str());
    streambuf *coutbuf=cout.rdbuf();
    cout.rdbuf(outf.rdbuf());
    mainSymTab=&glbST;
    gencode();
    cout.rdbuf(coutbuf);
    if(fail)
        printf("FAIL\n");
    else
        printf("YESSSSSS\n");
       string command="gcc "+temp+" -L. -lmyl -o "+output;
       system(command.c_str());
      return 0;
}
