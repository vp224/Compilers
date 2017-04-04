%{
#include "ass6_14CS30031_target_translator.h"
#include "y.tab.h"
#include <stdio.h>
%}

AUTO 				"auto"
BREAK 				"break"
CASE 				"case"
CHAR 				"char"
CONTINUE 			"continue"
DO 					"do"
DEFAULT 			"default"
DOUBLE 				"double"
ELSE 				"else"
ENUM 				"enum"
EXTERN 				"extern"
FLOAT 				"float"
FOR 				"for"
GOTO 				"goto"
IF 					"if"
INLINE 				"inline"
INT 				"int"
LONG 				"long"
REGISTER 			"register"
RESTRICT 			"restrict"
RETURN 				"return"
SHORT 				"short"
SIGNED 				"signed"
SIZEOF 				"sizeof"
STATIC 				"static"
STRUCT 				"struct"
SWITCH 				"switch"
TYPEDEF 			"typedef"
UNION 				"union"
UNSIGNED 			"unsigned"
VOID 				"void"
VOLATILE 			"volatile"
WHILE 				"while"
_BOOL 				"_Bool"
_COMPLEX			"_Complex"
_IMAGINARY 			"_Imaginary"

NZDIG [1-9]
DIG [0-9]
ID_ND [a-zA-Z_]

ID ({ID_ND}({ID_ND}|{DIG})*)

WS [ \n\t]
SIGN [+-]
DIG_SEQ {DIG}+
EXP_PART ([eE]{SIGN}?{DIG_SEQ})
FRACT_CONST 	(({DIG_SEQ}?{DOT}{DIG_SEQ})|({DIG_SEQ}{DOT}))
FLOAT_CONST 	(({FRACT_CONST}{EXP_PART}?)|({DIG_SEQ}{EXP_PART}))
ENUM_CONST 		{ID}
ESC_SEQ         ([\\][\'\"\?\\abfnrtv])
ZERO "0"
INT_CONST (({NZDIG}({DIG}*))|{ZERO}+)
DOT "."




C_CHAR 					([^\'\\\n]|{ESC_SEQ})
C_CHAR_SEQ       		{C_CHAR}+
C_CHAR_CONST 				"'"{C_CHAR_SEQ}"'"
S_CHAR 					([^\"\\\n]|{ESC_SEQ})
S_CHAR_SEQ 		        {S_CHAR}+
STRING_LITERAL					\"{S_CHAR_SEQ}?\"
MULTI_COMMENT 			 "/"\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/"
SINGLE_COMMENT			"//".*
COMMENT {SINGLE_COMMENT}|{MULTI_COMMENT}

%%
{AUTO}			{return AUTO_KEYWORD;}
{FOR}			{return FOR_KEYWORD;}
{SIGNED}		{return SIGNED_KEYWORD;}
{WHILE}			{return WHILE_KEYWORD;}
{GOTO}			{return GOTO_KEYWORD;}
{_IMAGINARY}    {return IMAGINARY_KEYWORD;}
{DO}			{return DO_KEYWORD;}
{INT}			{return INT_KEYWORD;}
{SWITCH}		{return SWITCH_KEYWORD;}
{DOUBLE}		{return DOUBLE_KEYWORD;}
{SIZEOF}		{return SIZEOF_KEYWORD;}
{_BOOL}			{return BOOL_KEYWORD;}
{CONTINUE}		{return CONTINUE_KEYWORD;}
{IF}			{return IF_KEYWORD;}
{DEFAULT}		{return DEFAULT_KEYWORD;}
{INLINE}		{return INLINE_KEYWORD;}
{STRUCT}		{return STRUCT_KEYWORD;}
{LONG}			{return LONG_KEYWORD;}
{TYPEDEF}		{return TYPEDEF_KEYWORD;}
{ELSE}			{return ELSE_KEYWORD;}
{REGISTER}		{return REGISTER_KEYWORD;}
{UNION}			{return UNION_KEYWORD;}
{ENUM}			{return ENUM_KEYWORD;}
{RESTRICT}		{return RESTRICT_KEYWORD;}
{UNSIGNED}		{return UNSIGNED_KEYWORD;}
{BREAK}			{return BREAK_KEYWORD;}
{EXTERN}		{return EXTERN_KEYWORD;}
{RETURN}		{return RETURN_KEYWORD;}
{VOID}			{return VOID_KEYWORD;}
{CASE}			{return CASE_KEYWORD;}
{FLOAT}			{return FLOAT_KEYWORD;}
{SHORT}			{return SHORT_KEYWORD;}
{VOLATILE}		{return VOLATILE_KEYWORD;}
{CHAR}			{return CHAR_KEYWORD;}
{STATIC}		{return STATIC_KEYWORD;}
{_COMPLEX}		{return COMPLEX_KEYWORD;}




[ \t\n\v];		/* Ignore blank spaces */
"<<="			{return LEFT_SHIFT_EQUAL;}
"..."			{return ELLIPSES;}
">>="			{return RIGHT_SHIFT_EQUAL;}
"->"			{return VAL_AT;}
"++"			{return PLUS_PLUS;}
"--"			{return MINUS_MINUS;}
"<<"			{return LEFT_SHIFT;}
">>"			{return RIGHT_SHIFT;}
"<="			{return LESS_EQUAL;}
">="			{return GREATER_EQUAL;}
"=="			{return EQUAL_EQUAL;}
"!="			{return NOT_EQUAL;}
"&&"			{return LOGICAL_AND;}
"||"			{return LOGICAL_OR;}
"*="			{return STAR_EQUAL;}
"/="			{return BY_EQUAL;}
"%="			{return PERCENT_EQUAL;}
"+="			{return PLUS_EQUAL;}
"-="			{return MINUS_EQUAL;}
"&="			{return AND_EQUAL;}
"^="			{return BITWISENOT_EQUAL;}
"|="			{return OR_EQUAL;}
"["				{return yytext[0];}
"]"				{return yytext[0];}
"("				{return yytext[0];}
")"				{return yytext[0];}
"{"				{return yytext[0];}
"}"				{return yytext[0];}
"."				{return yytext[0];}
"&"				{return yytext[0];}
"*"				{return yytext[0];}
"+"				{return yytext[0];}
"-"				{return yytext[0];}
"~"				{return yytext[0];}
"!"				{return yytext[0];}
"/"				{return yytext[0];}
"%"				{return yytext[0];}
"<"				{return yytext[0];}
">"				{return yytext[0];}
"^"				{return yytext[0];}
"|"				{return yytext[0];}
"?"				{return yytext[0];}
":"				{return yytext[0];}
";"				{return yytext[0];}
"="				{return yytext[0];}
","				{return yytext[0];}
"#"				{return yytext[0];}
{COMMENT}               {;}
{ID}                    { yylval.strval = new string(yytext); return IDENTIFIER;}
{INT_CONST}             { yylval.intval = atoi(yytext); return INTEGER_CONSTANT;}
{FLOAT_CONST}           { yylval.doubleval = atof(yytext); return FLOAT_CONSTANT;}
{C_CHAR_CONST}          { yylval.charval = yytext[1]; return CHAR_CONSTANT;}
{STRING_LITERAL}        { yylval.strval = new string(yytext); return STRING_LITERAL;}
{WS}        {;}

%%




