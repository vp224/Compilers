%{
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

%}

%union {
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
}

%token SINGLE_COMMENT;
%token MULTI_COMMENT;
%token AUTO_KEYWORD;
%token ENUM_KEYWORD;
%token RESTRICT_KEYWORD;
%token UNSIGNED_KEYWORD;
%token BREAK_KEYWORD;
%token EXTERN_KEYWORD;
%token RETURN_KEYWORD;
%token VOID_KEYWORD;
%token CASE_KEYWORD;
%token FLOAT_KEYWORD;
%token SHORT_KEYWORD;
%token VOLATILE_KEYWORD;
%token CHAR_KEYWORD;
%token FOR_KEYWORD;
%token SIGNED_KEYWORD;
%token WHILE_KEYWORD;
%token CONST_KEYWORD;
%token GOTO_KEYWORD;
%token SIZEOF_KEYWORD;
%token BOOL_KEYWORD;
%token CONTINUE_KEYWORD;
%token IF_KEYWORD;
%token STATIC_KEYWORD;
%token COMPLEX_KEYWORD;
%token DEFAULT_KEYWORD;
%token INLINE_KEYWORD;
%token STRUCT_KEYWORD;
%token IMAGINARY_KEYWORD;
%token DO_KEYWORD;
%token INT_KEYWORD;
%token SWITCH_KEYWORD;
%token DOUBLE_KEYWORD;
%token LONG_KEYWORD;
%token TYPEDEF_KEYWORD;
%token ELSE_KEYWORD;
%token REGISTER_KEYWORD;
%token UNION_KEYWORD;
%token <intval>  INTEGER_CONSTANT;
%token <doubleval> FLOAT_CONSTANT;
%token <intval> ENUMERATION;
%token <charval> CHAR_CONSTANT;
%token LEFT_SHIFT_EQUAL;
%token RIGHT_SHIFT_EQUAL;
%token ELLIPSES;
%token VAL_AT;
%token PLUS_PLUS;
%token MINUS_MINUS;
%token LEFT_SHIFT;
%token RIGHT_SHIFT;
%token LESS_EQUAL;
%token GREATER_EQUAL;
%token EQUAL_EQUAL;
%token NOT_EQUAL;
%token LOGICAL_AND;
%token LOGICAL_OR;
%token STAR_EQUAL;
%token BY_EQUAL;
%token PERCENT_EQUAL;
%token PLUS_EQUAL;
%token MINUS_EQUAL;
%token AND_EQUAL;
%token BITWISENOT_EQUAL;
%token OR_EQUAL;
%token<strval> STRING_LITERAL IDENTIFIER
%type<exp_info> primary_expression
%type<exp_info> expression expression_opt
%type<exp_info> postfix_expression assignment_expression unary_expression
%type<exp_info> additive_expression multiplicative_expression shift_expression cast_expression
%type<exp_info> relational_expression equality_expression M N conditional_expression
%type<exp_info> logical_OR_expression logical_AND_expression AND_expression exclusive_OR_expression inclusive_OR_expression selection_statement statement iteration_statement compound_statement expression_statement jump_statement assignment_expression_opt
%type<charval> unary_operator
%type<exp_info> block_item block_item_list
%type<dgn_type> type_specifier declaration_specifiers
%type<intval> pointer
%type<exp_info> initializer
%type<declarationi> direct_declarator initializer_list declarator init_declarator function_end
%type<param> parameter_declaration
%type<decvec> init_declarator_list
%type<parameter_list> parameter_list parameter_type_list parameter_type_list_opt argument_expression_list

%expect 3
%start translation_unit;
%%

N:
	{
		$$=new expression;
		$$->nextlist=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
	;

M:
	{
		$$=new expression;
		$$->instr=Quad.nextinstr;
	}
	;

function_end:
	declaration_specifiers declarator
	{
		degen_typ type_now=$1;
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
		d_node *my_dec=$2;
		Symbdata *var	=glbST.lookup(my_dec->name);
		if(my_dec->dgn_type==fntyp){
			Symbdata *retval=var->nest_symtab->lookup("retVal",type_now,my_dec->dt);
			var->offset=mainSymTab->offset;
			var->size=0;
			var->initial_value=NULL;
		}
		$$=$2;
	}

primary_expression:
	IDENTIFIER
	{
		$$=new expression;
		string temp1=(*($1));
		mainSymTab->lookup(temp1);
		$$->loc=temp1;		
	}
	| INTEGER_CONSTANT
	{
		$$=new expression;
		$$->loc=mainSymTab->gentemp(inttyp);
		Quad.emit($$->loc,$1,ASSIGN);
		symbolvalue *temp=new symbolvalue;
		temp->setval($1);			
		mainSymTab->lookup($$->loc)->initial_value=temp;
	}
	| FLOAT_CONSTANT
	{
		$$=new expression;
		$$->loc=mainSymTab->gentemp(doubletyp);
		Quad.emit($$->loc,$1,ASSIGN);
		symbolvalue *temp=new symbolvalue;
		temp->setval($1);
		mainSymTab->lookup($$->loc)->initial_value=temp;
	}
	| ENUMERATION
	{
	}
	| CHAR_CONSTANT
	{
		$$=new expression;
		$$->loc=mainSymTab->gentemp(chartyp);
		Quad.emit($$->loc,$1,ASSIGN);
		symbolvalue *temp=new symbolvalue;
		temp->setval($1);
		mainSymTab->lookup($$->loc)->initial_value=temp;
	}
	| STRING_LITERAL
	{
		$$=new expression;
		stringstream temp1;
		temp1<<".LC"<<stringcount;
		temp1>>$$->loc;
		stringcount++;
		stringConstant.push_back(*$1);
	}
	| '(' expression ')'
	{
		$$=$2;
	}
	;

postfix_expression:
	primary_expression
	| postfix_expression '[' expression ']'
	{
		SymbType temp1=mainSymTab->lookup($1->loc)->type;
		string temp2;
		if($1->cont==0){ 
			temp2=mainSymTab->gentemp(inttyp);
			Quad.emit(temp2,0,ASSIGN);
			$1->container=new string(temp2);
		}
		temp2=*($1->container);
		int mult_size=temp1.listl[$1->cont];
		$1->cont++;
		stringstream temp3;
		temp3<<mult_size;
		string temp4;
		temp3>>temp4;
		Quad.emit(temp2,temp2,MULT,temp4);
		Quad.emit(temp2,temp2,PLUS,$3->loc);
		Quad.emit(temp2,temp2,MULT,"4");
		$$=$1;
	}
	| postfix_expression '('  ')'
	| postfix_expression '(' argument_expression_list ')'
	{
		string function_name=$1->loc;
		symboltable *functionsymbol=glbST.lookup(function_name)->nest_symtab;
		vector<parameter*> arglist=*($3);
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
			$$=new expression;
			$$->loc=retval;
		}
	}
	| postfix_expression '.' IDENTIFIER
	| postfix_expression VAL_AT IDENTIFIER
	| postfix_expression PLUS_PLUS
	{
		$$=new expression;
		SymbType temp1=mainSymTab->lookup($1->loc)->type;
		if(temp1.dgn_type==arrtyp){
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($1->loc)->type.dgn_t);
			string t1=mainSymTab->gentemp(temp1.dgn_t);
			Quad.emit(t1,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			Quad.emit($$->loc,t1,ASSIGN,"");
			Quad.emit(t1,t1,PLUS,"1");
			Quad.emit($1->loc,t1,ARRAY_INDEX_TO,*($1->container));
		}
		else{
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($1->loc)->type.dgn_type);
			Quad.emit($$->loc,$1->loc,ASSIGN,"");
			Quad.emit($1->loc,$1->loc,PLUS,"1");
		}
	}
	| postfix_expression MINUS_MINUS
	{
		$$=new expression;
		SymbType temp1=mainSymTab->lookup($1->loc)->type;
		if(temp1.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(temp1.dgn_t);
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($1->loc)->type.dgn_t);
			Quad.emit(t1,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			Quad.emit($$->loc,t1,ASSIGN,"");
			Quad.emit(t1,t1,MINUS,"1");
			Quad.emit($1->loc,t1,ARRAY_INDEX_TO,*($1->container));
		}
		else{
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($1->loc)->type.dgn_type);
			Quad.emit($$->loc,$1->loc,ASSIGN,"");
			Quad.emit($1->loc,$1->loc,MINUS,"1");
		}
	}
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list:
	assignment_expression
	{
		parameter *temp=new parameter;
		temp->name=$1->loc;
		if(temp->name[0]!='.'){
			temp->type=mainSymTab->lookup(temp->name)->type;
		}
		$$=new vector<parameter*>;
		$$->push_back(temp);	
	}
	| argument_expression_list ',' assignment_expression
	{
		parameter *temp=new parameter;
		temp->name=$3->loc;
		if(temp->name[0]!='.'){
			temp->type=mainSymTab->lookup(temp->name)->type;
		}
		$$=$1;
		$$->push_back(temp);
	}
	;

unary_expression:
	postfix_expression
	{
		$$=$1;
	}
	| PLUS_PLUS unary_expression
	{
		SymbType type1=mainSymTab->lookup($2->loc)->type;
		if(type1.dgn_type==arrtyp){
			string temp1=mainSymTab->gentemp(type1.dgn_t);
			Quad.emit(temp1,$2->loc,ARRAY_INDEX_FROM,*($2->container));
			Quad.emit(temp1,temp1,PLUS,"1");
			Quad.emit($2->loc,temp1,ARRAY_INDEX_TO,*($2->container));
			$$=new expression;
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($2->loc)->type.dgn_t);
			Quad.emit($$->loc,$2->loc,ASSIGN,"");
		}
		else{
			Quad.emit($2->loc,$2->loc,PLUS,"1");
			$$=new expression;
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($2->loc)->type.dgn_type);
			Quad.emit($$->loc,$2->loc,ASSIGN,"");
		}
		
	}
	| MINUS_MINUS unary_expression
	{
		SymbType type1=mainSymTab->lookup($2->loc)->type;
		if(type1.dgn_type==arrtyp){
			string temp1=mainSymTab->gentemp(type1.dgn_t);
			Quad.emit(temp1,$2->loc,ARRAY_INDEX_FROM,*($2->container));
			Quad.emit(temp1,temp1,MINUS,"1");
			Quad.emit($2->loc,temp1,ARRAY_INDEX_TO,*($2->container));
			$$=new expression;
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($2->loc)->type.dgn_t);
			Quad.emit($$->loc,$2->loc,ASSIGN,"");
		}
		else{
			Quad.emit($2->loc,$2->loc,MINUS,"1");
			$$=new expression;
			$$->loc=mainSymTab->gentemp(mainSymTab->lookup($2->loc)->type.dgn_type);
			Quad.emit($$->loc,$2->loc,ASSIGN,"");
		}
	}
	| unary_operator cast_expression
	{
		if($1=='&'){
			$$=new expression;
			$$->loc=mainSymTab->gentemp();
			Quad.emit($$->loc,$2->loc,REFERENCE,"");
		}
		else if($1=='*'){
			$$=new expression;
			$$->loc=mainSymTab->gentemp();
			Quad.emit($$->loc,$2->loc,UNARY_MINUS,"");
		}
		else{
		$$=$2;
		}
		
		
	}
	| SIZEOF_KEYWORD unary_expression
	| SIZEOF_KEYWORD '(' type_name ')'
	{
	}
	;

unary_operator:
	'&'	{$$='&';}
	| '*'	{$$='*';}
	| '+'	{$$='+';}
	| '-'	{$$='-';}
	| '~'	{$$='~';}
	| '!'	{$$='!';}
	;

cast_expression:
	unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression:
	cast_expression
	{
		SymbType typ1=mainSymTab->lookup($1->loc)->type;
		if(typ1.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(typ1.dgn_t);
			Quad.emit(t1,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t1;
			$1->dgn_type=typ1.dgn_t;
		}
		else{
			$$=$1;
		}
	}
	| multiplicative_expression '*' cast_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		degen_typ final_type=max(mainSymTab->lookup($1->loc)->type.dgn_type,mainSymTab->lookup($3->loc)->type.dgn_type);
		$$->loc=mainSymTab->gentemp(final_type);
		Quad.emit($$->loc,$1->loc,MULT,$3->loc);
	}
	| multiplicative_expression '/' cast_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		degen_typ final_type=max(mainSymTab->lookup($1->loc)->type.dgn_type,mainSymTab->lookup($3->loc)->type.dgn_type);
		$$->loc=mainSymTab->gentemp(final_type);
		Quad.emit($$->loc,$1->loc,DIVIDE,$3->loc);
	}
	| multiplicative_expression '%' cast_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		degen_typ final_type=max(mainSymTab->lookup($1->loc)->type.dgn_type,mainSymTab->lookup($3->loc)->type.dgn_type);
		$$->loc=mainSymTab->gentemp(final_type);
		Quad.emit($$->loc,$1->loc,MODULO,$3->loc);
	}
	;

additive_expression:
	multiplicative_expression
	| additive_expression '+' multiplicative_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		degen_typ final_type=max(mainSymTab->lookup($1->loc)->type.dgn_type,mainSymTab->lookup($3->loc)->type.dgn_type);
		$$->loc=mainSymTab->gentemp(final_type);
		Quad.emit($$->loc,$1->loc,PLUS,$3->loc);
	}
	| additive_expression '-' multiplicative_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		degen_typ final_type=max(mainSymTab->lookup($1->loc)->type.dgn_type,mainSymTab->lookup($3->loc)->type.dgn_type);
		$$->loc=mainSymTab->gentemp(final_type);
		Quad.emit($$->loc,$1->loc,MINUS,$3->loc);
	}
	;

shift_expression:
	additive_expression
	| shift_expression LEFT_SHIFT additive_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		degen_typ final_type=max(mainSymTab->lookup($1->loc)->type.dgn_type,mainSymTab->lookup($3->loc)->type.dgn_type);
		$$->loc=mainSymTab->gentemp(final_type);
		Quad.emit($$->loc,$1->loc,SHIFT_LEFT,$3->loc);
	}
	| shift_expression RIGHT_SHIFT additive_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		degen_typ final_type=max(mainSymTab->lookup($1->loc)->type.dgn_type,mainSymTab->lookup($3->loc)->type.dgn_type);
		$$->loc=mainSymTab->gentemp(final_type);
		Quad.emit($$->loc,$1->loc,SHIFT_RIGHT,$3->loc);
	}
	;

relational_expression:
	shift_expression
	| relational_expression '<' shift_expression
	{	
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		$$->dgn_type=booltyp;
		Quad.emit($$->loc,"1",ASSIGN,"");
		$$->true_l=genList(Quad.nextinstr);
		Quad.emit("",$1->loc,IF_LESS,$3->loc);
		Quad.emit($$->loc,"0",ASSIGN,"");
		$$->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
	| relational_expression '>' shift_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		$$->dgn_type=booltyp;
		Quad.emit($$->loc,"1",ASSIGN,"");
		$$->true_l=genList(Quad.nextinstr);
		Quad.emit("",$1->loc,IF_GREATER,$3->loc);
		Quad.emit($$->loc,"0",ASSIGN,"");
		$$->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
	| relational_expression LESS_EQUAL shift_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		$$->dgn_type=booltyp;
		Quad.emit($$->loc,"1",ASSIGN,"");
		$$->true_l=genList(Quad.nextinstr);
		Quad.emit("",$1->loc,IF_LESS_OR_EQUAL,$3->loc);
		Quad.emit($$->loc,"0",ASSIGN,"");
		$$->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
	| relational_expression GREATER_EQUAL shift_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		$$->dgn_type=booltyp;
		Quad.emit($$->loc,"1",ASSIGN,"");
		$$->true_l=genList(Quad.nextinstr);
		Quad.emit("",$1->loc,IF_GREATER_OR_EQUAL,$3->loc);
		Quad.emit($$->loc,"0",ASSIGN,"");
		$$->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
	;

equality_expression:
	relational_expression
	| equality_expression NOT_EQUAL relational_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		$$->dgn_type=booltyp;
		Quad.emit($$->loc,"1",ASSIGN,"");
		$$->true_l=genList(Quad.nextinstr);
		Quad.emit("",$1->loc,IF_NOT_EQUAL,$3->loc);
		Quad.emit($$->loc,"0",ASSIGN,"");
		$$->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
	| equality_expression EQUAL_EQUAL relational_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		$$->dgn_type=booltyp;
		Quad.emit($$->loc,"1",ASSIGN,"");
		$$->true_l=genList(Quad.nextinstr);
		Quad.emit("",$1->loc,IF_EQUAL,$3->loc);
		Quad.emit($$->loc,"0",ASSIGN,"");
		$$->false_l=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
	}
	;

AND_expression:
	equality_expression
	| AND_expression '&' equality_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		Quad.emit($$->loc,$1->loc,AND,$3->loc);
	}
	;

exclusive_OR_expression:
	AND_expression
	| exclusive_OR_expression '^' AND_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		Quad.emit($$->loc,$1->loc,XOR,$3->loc);
	}
	;

inclusive_OR_expression:
	exclusive_OR_expression
	| inclusive_OR_expression '|' exclusive_OR_expression
	{
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp();
		Quad.emit($$->loc,$1->loc,OR,$3->loc);
	}
	;

logical_AND_expression:
	inclusive_OR_expression
	| logical_AND_expression N LOGICAL_AND M inclusive_OR_expression N
	{	
		SymbType t5=mainSymTab->lookup($5->loc)->type;
		if(t5.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t5.dgn_t);
			Quad.emit(t1,$5->loc,ARRAY_INDEX_FROM,*($5->container));
			$5->loc=t1;
			$5->dgn_type=t5.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		Quad.backpatch($2->nextlist,Quad.nextinstr); 
		Quad.convInt2Bool($1);	
		Quad.backpatch($6->nextlist,Quad.nextinstr);
		Quad.convInt2Bool($5);
		Quad.backpatch($1->true_l,$4->instr);	
		$$=new expression;
		$$->false_l=merge($1->false_l,$5->false_l);
		$$->true_l=$5->true_l; 
	}
	;

logical_OR_expression:
	logical_AND_expression
	| logical_OR_expression N LOGICAL_OR M logical_AND_expression N
	{
		SymbType t5=mainSymTab->lookup($5->loc)->type;
		if(t5.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t5.dgn_t);
			Quad.emit(t1,$5->loc,ARRAY_INDEX_FROM,*($5->container));
			$5->loc=t1;
			$5->dgn_type=t5.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		Quad.backpatch($2->nextlist,Quad.nextinstr);
		Quad.convInt2Bool($1);
		Quad.convInt2Bool($5);
		Quad.backpatch($6->nextlist,Quad.nextinstr);
		$$=new expression;
		$$->dgn_type=booltyp;
		Quad.backpatch($1->false_l,$4->instr);
		$$->true_l=merge($1->true_l,$5->true_l);
		$$->false_l=$5->false_l;
	}
	;

conditional_expression:
	logical_OR_expression
	| logical_OR_expression N '?' M expression N ':' M conditional_expression
	{
		SymbType t9=mainSymTab->lookup($9->loc)->type;
		if(t9.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t9.dgn_t);
			Quad.emit(t1,$9->loc,ARRAY_INDEX_FROM,*($9->container));
			$9->loc=t1;
			$9->dgn_type=t9.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			string t=mainSymTab->gentemp(t1.dgn_t);
			Quad.emit(t,$1->loc,ARRAY_INDEX_FROM,*($1->container));
			$1->loc=t;
			$1->dgn_type=t1.dgn_t;
		}
		$$=new expression;
		$$->loc=mainSymTab->gentemp(mainSymTab->lookup($5->loc)->type.dgn_type);
		Quad.emit($$->loc,$9->loc,ASSIGN);
		list<int> temp1=genList(Quad.nextinstr);
		Quad.emit("","",GOTO,"");
        Quad.backpatch($6->nextlist,Quad.nextinstr);
        Quad.emit($$->loc,$5->loc,ASSIGN);
        temp1=merge(temp1,genList(Quad.nextinstr));
        Quad.emit("","",GOTO,"");
		Quad.backpatch($2->nextlist,Quad.nextinstr);
		Quad.convInt2Bool($1);
		Quad.backpatch($1->true_l,$4->instr);
		Quad.backpatch($1->false_l,$8->instr);
		Quad.backpatch(temp1,Quad.nextinstr);
	}
	;

assignment_expression:
	conditional_expression
	| unary_expression assignment_operator assignment_expression
    {
		SymbType t3=mainSymTab->lookup($3->loc)->type;
		if(t3.dgn_type==arrtyp){
			string t1=mainSymTab->gentemp(t3.dgn_t);
			Quad.emit(t1,$3->loc,ARRAY_INDEX_FROM,*($3->container));
			$3->loc=t1;
			$3->dgn_type=t3.dgn_t;
		}
		SymbType t1=mainSymTab->lookup($1->loc)->type;
		if(t1.dgn_type==arrtyp){
			Quad.emit($1->loc,$3->loc,ARRAY_INDEX_TO,*($1->container));
		}
		else{
			Quad.emit($1->loc,$3->loc,ASSIGN,"");
		}
		$$=$1;
    }
	;

assignment_operator:
	'='
	| OR_EQUAL
	| BITWISENOT_EQUAL
	| AND_EQUAL
	| PLUS_EQUAL
	| STAR_EQUAL
	| BY_EQUAL
	| PERCENT_EQUAL
	| LEFT_SHIFT_EQUAL
	| RIGHT_SHIFT_EQUAL
	;

expression:
	assignment_expression
	| expression ',' assignment_expression
	;

constant_expression:
	conditional_expression
	;

declaration:
	declaration_specifiers init_declarator_list ';'
	{
        degen_typ type_now=$1;
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
        vector<d_node*> lst=*($2);
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
	| declaration_specifiers ';'
	;

declaration_specifiers:
	storage_class_specifier declaration_specifiers
	| storage_class_specifier 
	| type_specifier declaration_specifiers
	| type_specifier 
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier
	| function_specifier declaration_specifiers
	;

init_declarator_list:
	init_declarator
	{
		$$=new vector<d_node*>;
		$$->push_back($1);
	}
	| init_declarator_list ',' init_declarator
	{
		$1->push_back($3);
		$$=$1;
	}
	;

init_declarator:
	declarator
	{
		$$=$1;
		$$->initial_value=NULL;
	}
	| declarator '=' initializer
	{
		$$=$1;
		$$->initial_value=$3;
	}
	;

storage_class_specifier:
	EXTERN_KEYWORD
	| STATIC_KEYWORD
	| AUTO_KEYWORD
	| REGISTER_KEYWORD
	;

type_specifier:
	VOID_KEYWORD
	{
		$$=voidtyp;
	}
	| CHAR_KEYWORD
	{
		$$=chartyp;
	}
	| SHORT_KEYWORD
	| INT_KEYWORD
	{
		$$=inttyp;
	}
	| LONG_KEYWORD
	| FLOAT_KEYWORD
	| DOUBLE_KEYWORD
	{
		$$=doubletyp;
	}
	| SIGNED_KEYWORD
	| UNSIGNED_KEYWORD
	| BOOL_KEYWORD
	| COMPLEX_KEYWORD
	| IMAGINARY_KEYWORD
	| enum_specifier
	;

specifier_qualifier_list:
	type_specifier specifier_qualifier_list
	| type_specifier 
	| type_qualifier specifier_qualifier_list 
	| type_qualifier
	;

enum_specifier:
	ENUM_KEYWORD IDENTIFIER '{' enumerator_list '}'
	| ENUM_KEYWORD '{' enumerator_list '}'
	| ENUM_KEYWORD '{' enumerator_list ',' '}'
	| ENUM_KEYWORD IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM_KEYWORD IDENTIFIER
	;

enumerator_list:
	enumerator
	| enumerator_list ',' enumerator
	;

enumerator:
	ENUMERATION
	| ENUMERATION '=' constant_expression
	;

type_qualifier:
	CONST_KEYWORD
	| RESTRICT_KEYWORD
	| VOLATILE_KEYWORD
	;

function_specifier:
	INLINE_KEYWORD
	;

declarator:
	pointer direct_declarator
	{
		$$=$2;
		$$->dt=$1;
	}
	| direct_declarator
	{
		$$=$1;
		$$->dt=0;
	}
	;

direct_declarator:
	IDENTIFIER
	{
		$$=new d_node;
		$$->name=*($1);
	}
	| '(' declarator ')' 
	| direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'
	{
		$$=$1;
		int index=mainSymTab->lookup($4->loc)->initial_value->intval;
		$$->listl.push_back(index);
	}
	| direct_declarator '[' STATIC_KEYWORD type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC_KEYWORD assignment_expression ']'
	| direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '(' parameter_type_list_opt ')'
	{
		$$=$1;
		$$->dgn_type=fntyp;
		Symbdata *funcdata=mainSymTab->lookup($$->name,$$->dgn_type);
		symboltable *funcsymb=new symboltable;
		funcdata->nest_symtab=funcsymb;
		vector<parameter*> paramlist=*($3);
		for(int i=0;i<(int)paramlist.size();i++){
			parameter *my_parameter=paramlist[i];
			funcsymb->lookup(my_parameter->name,my_parameter->type.dgn_type);
		}
		mainSymTab=funcsymb;
		Quad.emit($$->name,"",FUNCTION_BEG,"");
	}
	| direct_declarator '(' identifier_list ')'
	;

pointer:
	'*' type_qualifier_list
	| '*'
	{
		$$=1;
	}
	| '*' pointer
	{
		$$=1+$2;
	}
	| '*' type_qualifier_list pointer
	;

type_qualifier_list_opt
    : type_qualifier_list
    |
    ;

assignment_expression_opt
    : assignment_expression
    |
    ;

type_qualifier_list:
	type_qualifier
	| type_qualifier_list type_qualifier

parameter_type_list_opt:
	parameter_type_list
	| 
	{
		$$=new vector<parameter*>;
	} 
	;

parameter_type_list:
	parameter_list
	| parameter_list ',' ELLIPSES
	;

parameter_list:
	parameter_declaration
	{
		$$=new vector<parameter *>;
		$$->push_back($1);
	}
	|parameter_list ',' parameter_declaration
	{
		$1->push_back($3);
		$$=$1;
	}
	;

parameter_declaration:
	declaration_specifiers declarator
	{
		$$=new parameter;
		$$->name=$2->name;
		$$->type.dgn_type=$1;
	}
	| declaration_specifiers
	;

identifier_list:
	IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name:
	specifier_qualifier_list
	;

initializer:
	assignment_expression
	{
		$$=$1;
	}
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}' 
	;

initializer_list:
	designation initializer
	| initializer_list ',' designation initializer
	| initializer
	| initializer_list ',' initializer
	;

designation:
	designator_list '='
	;

designator_list:
	designator
	;

designator:
	'[' constant_expression ']'
	| '.' IDENTIFIER
	;

statement:
	labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement:
	IDENTIFIER ':' statement
	| CASE_KEYWORD constant_expression ':' statement
	| DEFAULT_KEYWORD ':' statement
	;

compound_statement:
	'{' block_item_list '}'
	{
		$$=$2;
	}
	| '{' '}' 
	;

block_item_list:
	block_item
	{
		$$=$1;
		Quad.backpatch($1->nextlist,Quad.nextinstr);
	}
	| block_item_list M block_item
	{
		$$=new expression;
		Quad.backpatch($1->nextlist,$2->instr);
		$$->nextlist=$3->nextlist;
	}
	;

block_item:
	declaration
	{
		$$=new expression;
	}
	| statement
	;

expression_statement:
	expression ';'
	| ';'
	{
		$$=new expression;
	}
	;

expression_opt:
	expression
	|
	{
		$$=new expression;
	}
	;

selection_statement:
	IF_KEYWORD '(' expression N ')' M statement N
	{
		Quad.backpatch($4->nextlist,Quad.nextinstr);
		Quad.convInt2Bool($3);
		Quad.backpatch($3->true_l,$6->instr);
		$$=new expression;
		$$->nextlist=merge($7->nextlist,$8->nextlist);
		$$->nextlist=merge($$->nextlist,$3->false_l);
	}
	|IF_KEYWORD '(' expression N ')' M statement N ELSE_KEYWORD M statement N
	{	
        Quad.backpatch($4->nextlist,Quad.nextinstr);
        Quad.convInt2Bool($3);
        Quad.backpatch($3->true_l,$6->instr);
        Quad.backpatch($3->false_l,$10->instr);
        $$=new expression;
        $$->nextlist=merge($7->nextlist,$8->nextlist);        
        $$->nextlist=merge($$->nextlist,$11->nextlist);   
        $$->nextlist=merge($$->nextlist,$12->nextlist);
	}
	|SWITCH_KEYWORD '(' expression ')' statement
	;

iteration_statement:
	WHILE_KEYWORD M '(' expression N ')' M statement
    {
        Quad.emit("","",GOTO,"");
        Quad.backpatch(genList(Quad.nextinstr-1),$2->instr);    
        Quad.backpatch($5->nextlist,Quad.nextinstr);
        Quad.convInt2Bool($4);
        Quad.backpatch($4->true_l,$7->instr);
        Quad.backpatch($8->nextlist,$2->instr);    
        $$=new expression;
        $$->nextlist=$4->false_l;
    }
	| DO_KEYWORD M statement M WHILE_KEYWORD '(' expression ')' ';'
	{
        Quad.convInt2Bool($7);
        Quad.backpatch($7->true_l,$2->instr);
        Quad.backpatch($3->nextlist,$4->instr);
        $$=new expression;
        $$->nextlist=$7->false_l;
	}
	| FOR_KEYWORD '(' expression_opt ';' M expression_opt N ';' M expression_opt N ')' M statement
    {
        Quad.emit("","",GOTO,"");
        Quad.backpatch(genList(Quad.nextinstr-1), $9->instr );
        Quad.backpatch($7->nextlist,Quad.nextinstr);
        Quad.convInt2Bool($6);
        Quad.backpatch($6->true_l,$13->instr);
        Quad.backpatch($14->nextlist,$9->instr);
        Quad.backpatch($11->nextlist,$5->instr);
        $$ = new expression;
        $$->nextlist = $6->false_l;
    }
	;


jump_statement:
	GOTO_KEYWORD IDENTIFIER ';'
	| CONTINUE_KEYWORD ';'
	| BREAK_KEYWORD ';'
	| RETURN_KEYWORD expression ';' 
	{
		if(mainSymTab->lookup("retVal")->type.dgn_type==mainSymTab->lookup($2->loc)->type.dgn_type){
			Quad.emit($2->loc,"",RETURN,"");
		}
		else{
			degen_typ target_type=mainSymTab->lookup("retVal")->type.dgn_type;
			string temp1=mainSymTab->gentemp(target_type);
			Quad.conv2type(temp1,target_type,$2->loc,mainSymTab->lookup($2->loc)->type.dgn_type);
			Quad.emit(temp1,"",RETURN,"");
		}
		$$=new expression;
	}
	| RETURN_KEYWORD ';'
	{
		if(mainSymTab->lookup("retVal")->type.dgn_type==voidtyp){
			Quad.emit("","",RETURN,"");
		}
		$$=new expression;
	}
	;

translation_unit:
	external_declaration
	| translation_unit external_declaration
	;

external_declaration:
	function_definition
	| declaration
	;

function_definition:
	declaration_specifiers declarator declaration_list compound_statement
	| function_end compound_statement
	{
		mainSymTab=&(glbST);
		Quad.emit($1->name,"",FUNCTION_END,"");
	}
	;

declaration_list:
	declaration
	| declaration_list declaration
	;
%%

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
