#ifndef ASS6_14CS30031_TARGET_TRANSLATOR_H
#define ASS6_14CS30031_TARGET_TRANSLATOR_H

#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef stack<vector<string> >  svs;
//typedef vector<quad>::iterator vqi;
#define INTSIZE	4
#define DOUBLE_SIZE	8
#define CHARSIZE 1
#define PTRSIZE	4

typedef enum 
{
	UNARY_PLUS,UNARY_MINUS,COMPLEMENT,PLUS=1,MINUS,MULT,DIVIDE,MODULO,AND,OR,XOR,lOGICAL_AND,
	LESS,GREATER,EQUAL,nOT_EQUAL,LESS_OR_EQUAL,GREATER_OR_EQUAL,lOGICAL_OR,SHIFT_LEFT,SHIFT_RIGHT,
	NOT,ASSIGN,GOTO,IF_LESS,IF_GREATER,IF_LESS_OR_EQUAL,IF_GREATER_OR_EQUAL,IF_EQUAL,IF_NOT_EQUAL,
	IF_EXPRESSION,IF_NOT_EXPRESSION,CHAR2INTEGER,CHAR2DOUBLE,INTEGER2CHAR,DOUBLE2CHAR,INTEGER2DOUBLE,
	DOUBLE2INTEGER,PARAM,CALL,RETURN,ARRAY_INDEX_FROM,ARRAY_INDEX_TO,REFERENCE,DEREFRENCE,
	POINTER_ASSIGNMENT,FUNCTION_BEG,FUNCTION_END
}quadEnum;

class SymbType;
class exp;
class quad;
class symboltable;

class symbolvalue
{
public:
	int intval;
	double doubleval;
	char charval;
	void *ptrval;

	void setval(int res)
	{
		intval=res;
		doubleval=res;
		charval=res;
		ptrval=NULL;
	}
	void setval(double res)
	{
		intval=res;
		doubleval=res;
		charval=res;
		ptrval=NULL;
	}
	void setval(char res)
	{
		intval=res;
		doubleval=res;
		charval=res;
		ptrval=NULL;
	}
};

class expression;

typedef enum {
	voidtyp,
	booltyp,
	chartyp,
	inttyp,
	doubletyp,
	arrtyp,
	ptrtyp,
	fntyp
}degen_typ;

class quad
{
public:
	quadEnum op;
	string target;
	string arg1;
	string arg2;
	void printquad();
};

class d_node
{
public:
	degen_typ dgn_type;
	int dt;
	string name;
	vector<int> listl;
	expression *initial_value;
};

class expression
{
public:

	int instr;
	string loc;
	string *container;
	list<int> true_l;
	list<int> false_l;
	list<int> nextlist;
	degen_typ dgn_type;
	int cont;
	expression()
	{
		cont=0;
		container=NULL;
	}
};

class SymbType{
public:
	degen_typ dgn_type;
	vector<int> listl;
	int dt;
	degen_typ dgn_t;
};

class parameter
{
public:
	string name;
	SymbType type;
};


class Symbdata{
public:
	string name;
	SymbType type;
	symboltable *nest_symtab;
	symbolvalue *initial_value;
	int size,offset;
	Symbdata()
	{
		nest_symtab=NULL;
	}
};

class symboltable
{
public:
	vector<Symbdata*> symbvec;
	int offset;
	map<string,Symbdata*> Symboltable;
public:
	symboltable()
	{
		offset=0;
	}
	void printSymTab(bool ierr=0);
	string gentemp(degen_typ bt=inttyp,bool chck=false,bool ovrflw=false);
	Symbdata *lookup(string str,degen_typ bt=inttyp,int dt=0,bool isp=true);
	Symbdata *global_lu(string var);
};

class QuadArr
{
public:
	vector<quad> a1;
	int nextinstr;
public:
	QuadArr()
	{
		nextinstr=0;
	}
public:
	void convInt2Bool(expression *optarget);
	void conv2type(string s1,degen_typ dt,string s2,degen_typ dgens,bool isiden=false);
	void conv2type(expression *inp,expression *optarget,degen_typ dgn_type,bool isiden=false);
   	void backpatch(list<int> arglist,int index,bool errlist=false);
   	void emit(string res,string arg1,quadEnum op,string arg2="",int errv=0);
   	void emit(string res,int constres,quadEnum unary_op,int errv=0);
   	void emit(string res,double constres,quadEnum unary_op,int errv=0);
   	void emit(string res,char constres,quadEnum unary_op,int errv=0);
};


list<int> genList(int index);
list<int> merge(list<int> a,list<int> b);

void gencode();
//.y has been changed

#endif
