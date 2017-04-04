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
#line 17 "ass6_14CS30031.y" /* yacc.c:1909  */

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

#line 209 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
