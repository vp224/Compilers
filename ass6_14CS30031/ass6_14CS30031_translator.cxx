#include "ass6_14CS30031_translator.h"
using namespace std;


void get(string x){
	cout<<"--"<<x<<'\n';
}
void quad::printquad(){
	if(PLUS<=op && op<=GREATER_OR_EQUAL){
		cout<<target<<" = "<<arg1<<" ";
		{
			switch(op)
			{
            case PLUS:
            {
            	cout<<"+";
            }
            break;
            case MINUS:
            {
            	cout<<"-";
            }
             break;
            

            case MULT:
            {
            	cout<<"*";
            }
             break;
            case DIVIDE:
            {
            	cout<<"/";
            }
             break;
            case MODULO:
            {
            	cout<<"%";
            }
             break;
            case AND:{
            	cout<<"&";
            }
             break;
            case OR:
            {
            	cout<<"|";
            }
             break;
            case XOR:{
            	cout<<"^";
            }
             break;
            case lOGICAL_AND:{
            	cout<<"&&";                      
            }
             break;
            case lOGICAL_OR:{
            	cout<<"||";
            }
             break;
            case SHIFT_LEFT:{
            	cout<<"<<";
            }
             break;
            case SHIFT_RIGHT:{
            	cout<<">>";
            }	   
             break;                   
            case GREATER:{
            	cout<<"<";
            }
             break;
            case EQUAL:{
            	cout<<"==";
            }
             break;
            case nOT_EQUAL:{
            	cout<<"!=";
            }
             break;
            case GREATER_OR_EQUAL:
            {
            	cout<<">=";
            }
             break;
            case LESS_OR_EQUAL:
            {
            	cout<<"<=";
            }
             break;
            }                      
		}
		cout<<" "<<arg2<<'\n';
	}
    else if(UNARY_PLUS<=op && op<=ASSIGN)
    {
        cout<<target<<" = ";
        {
        	switch(op)
        	{
        		case UNARY_PLUS:
            {
            	cout<<"+";
            }
            
             break;
            case COMPLEMENT:
            {
            	cout<<"~";
            }
             break;
            case NOT:
            {
            	cout<<"!";
            }
             break;
            case UNARY_MINUS:
            {
            	cout<<"-";
            }
            break;
            
            case ASSIGN:
            {
            	cout<<"";
            }
             break;
        }
        }
        cout<<arg1<<'\n';
    }
    else if(op==GOTO){cout<<"goto "<<target<<'\n';}
    else if(IF_LESS<=op && op<=IF_NOT_EXPRESSION)
    {
        cout<<"if "<<arg1<<" ";
        {
        	switch(op)
        	{
            case IF_LESS:
            {
            	cout<<"<";
            }
            break;
            case IF_GREATER:
            {
            	cout<<">";
            }
            break;
            case IF_LESS_OR_EQUAL:
            {
            	cout<<"<=";
            }
            break;
            case IF_GREATER_OR_EQUAL:{
            	cout<<">=";
            }
            break;
            case IF_EQUAL:{
            	cout<<"==";
            }
            break;
            case IF_NOT_EQUAL:{
            	cout<<"!=";
            }
            break;
            case IF_EXPRESSION:{
            	cout<<"!= 0";
            }
            break;
            case IF_NOT_EXPRESSION:{
            	cout<<"== 0";
            }
            break;
        }
        }
        cout<<arg2<<" goto "<<target<<'\n';            
    }
    else if(CHAR2INTEGER<=op && op<=DOUBLE2INTEGER)
    {
        cout<<target<<" = ";
        {
            if(op==CHAR2INTEGER)cout<<" CHAR2INT("<<arg1<<")"<<'\n';
            if(op==CHAR2DOUBLE)cout<<" CHAR2DOUBLE("<<arg1<<")"<<'\n';
            if(op==INTEGER2CHAR)cout<<" INT2CHAR("<<arg1<<")"<<'\n';
            if(op==DOUBLE2CHAR)cout<<" DOUBLET2CHAR("<<arg1<<")"<<'\n';
            if(op==INTEGER2DOUBLE)cout<<" INT2DOUBLE("<<arg1<<")"<<'\n';
            if(op==DOUBLE2INTEGER)cout<<" DOUBLE2INT("<<arg1<<")"<<'\n';
        }            
    }
    else if(op==PARAM)
    {
        cout<<"param "<<target<<'\n';
    }
    else if(op==RETURN)
    {
        cout<<"return "<<target<<'\n';
    }
    else if(op==ARRAY_INDEX_FROM)
    {
        cout<<target<<" = "<<arg1<<"["<<arg2<<"]"<<'\n';
    }
    else if(op==ARRAY_INDEX_TO)
    {
        cout<<target<<"["<<arg2<<"]"<<" = "<<arg1<<'\n';
    }
    else if(op == FUNCTION_BEG)
    {
        cout<<"func "<<target<<" starts"<<'\n';
    }
    else if(op == FUNCTION_END)
    {
        cout<<"func "<<target<<" ends"<<'\n';
    }
    else if(op == REFERENCE)
    {
        cout<<target<<" = &"<<arg1<<'\n';
    }
    else if(op ==DEREFRENCE)
    {
        cout<<target<<" = *"<<arg1<<'\n';
    }
    else if(op==CALL)
    {
    	if(arg2==""){
    		;
    	}
    	else{
        	cout<<"call "<<target<<" "<<arg1<<'\n';
    	}
    }
    
    else 
    {
        cout<<target<<" = "<<arg1<<"( op = "<<op<<" )"<<arg2<<'\n';
    }
}

void QuadArr::conv2type(string s1,degen_typ dt,string s2,degen_typ dgens,bool isiden){
	if(dgens!=dt)
	{
		
		isiden=false;
		if(dgens==doubletyp)
		{
			if(dt==chartyp){
				emit(s1,s2,DOUBLE2CHAR,"");
			}
			else
			{
				emit(s1,s2,DOUBLE2INTEGER,"");
			}
		}
		else if(dgens==chartyp){
			if(dt==inttyp){
				emit(s1,s2,CHAR2INTEGER,"");
			}
			else{
				emit(s1,s2,CHAR2DOUBLE,"");
			}
		}
		else if(dgens==inttyp){
			if(dt==chartyp){
				emit(s1,s2,INTEGER2CHAR,"");
			}
			else{
				emit(s1,s2,INTEGER2DOUBLE,"");
			}
		}


	}
	else
	{
		isiden=true;
		return;
	}
}

void QuadArr::conv2type(expression *inp,expression *optgt,degen_typ dt,bool isiden){
	if(optgt->dgn_type==dt){
		isiden=true;
		return ;
	}
	else if(optgt->dgn_type==inttyp){
		if(dt==chartyp){
			emit(inp->loc,optgt->loc,INTEGER2CHAR,"");
		}
		else{
			emit(inp->loc,optgt->loc,INTEGER2DOUBLE,"");
		}
	}
	else if(optgt->dgn_type==doubletyp){
		if(dt==chartyp){
			emit(inp->loc,optgt->loc,DOUBLE2CHAR,"");
		}
		else{
			emit(inp->loc,optgt->loc,DOUBLE2INTEGER);
		}
	}
	else if(optgt->dgn_type==chartyp){
		if(dt==doubletyp){
			emit(inp->loc,optgt->loc,CHAR2DOUBLE,"");
		}
		else{
			emit(inp->loc,optgt->loc,CHAR2INTEGER,"");
		}
	}
	isiden=false;
}



void QuadArr::backpatch(list<int> arglist,int index,bool errlist){
	list<int>::iterator it=arglist.begin();
	while(it!=arglist.end()){
		stringstream str1;
		//cout<<index<<'\n';
		str1<<index;
		str1>>a1[(*it)].target;
        //cout<<(*it)<<'\n';

		it++;
	}
}

void QuadArr::convInt2Bool(expression *optgt){
	if((optgt->dgn_type)!=booltyp)
	{
		backpatch(optgt->true_l,nextinstr);
		backpatch(optgt->false_l,nextinstr);
		(optgt->false_l)=genList(nextinstr);
		emit("",(optgt->loc),IF_NOT_EXPRESSION,"");
		emit((optgt->loc),"~1",ASSIGN,"");
		(optgt->true_l)=genList(nextinstr);
		emit("","",GOTO,"");
		optgt->dgn_type=booltyp;
	}
	return ;
}
Symbdata* symboltable::global_lu(string var)

{
	if(Symboltable.count(var)!=0)
	{
		return Symboltable[var];
	}
	else
	{
		return NULL;
	}
}

Symbdata* symboltable::lookup(string var,degen_typ dt,int st,bool flag){
	if(Symboltable.count(var)==0){
		
		int temp2=0;
		flag=false;
		Symboltable[var]=new Symbdata;
		symbvec.pb(Symboltable[var]);
		Symboltable[var]->name=var;
		Symboltable[var]->type.dgn_type=dt;
		Symboltable[var]->offset=offset;


		if(st!=0){
			temp2=PTRSIZE;
			Symboltable[var]->type.dgn_t=dt;
			Symboltable[var]->type.dt=st;
			Symboltable[var]->type.dgn_type=arrtyp;
		}
		else{
			if(dt==inttyp)
			{
				temp2=4;
			}
			else if(dt==fntyp 
		|| dt==voidtyp)
			{
				temp2=0;
			}
			else if(dt==doubletyp)
			{
				temp2=8;
			}
			else if(dt==chartyp)
			{
				temp2=1;
			}
			
		}
		Symboltable[var]->size=temp2;
		Symboltable[var]->initial_value=NULL;
		offset+=temp2;
	}
	return Symboltable[var];
}
string symboltable::gentemp(degen_typ dt,bool chck,bool ovrflw)
{
	stringstream str1;
	static int cnt1=0;
	str1<<"t"<<cnt1++;
	string temp;
	str1>>temp;
	int val=0;
	Symboltable[temp]=new Symbdata;
	symbvec.push_back(Symboltable[temp]);

	//symbtab[temp]
	Symboltable[temp]->name=temp;
	Symboltable[temp]->type.dgn_type=dt;
	Symboltable[temp]->offset=offset;
	if(dt==inttyp){
		val=4;
	}
	else if(dt==chartyp){
		val=1;
	}
	else if(dt==doubletyp){
		val=8;
	}
	else if(dt==fntyp || dt==voidtyp){
		val=0;
	}
	offset+=val;
	Symboltable[temp]->size=val;
	Symboltable[temp]->initial_value=NULL;
	chck=true;
	assert(chck);
	return temp;
}



void QuadArr::emit(string str,string arg1,quadEnum op,string arg2,int errflag)
{
	quad temp;
	temp.op=op;temp.arg1=arg1;temp.arg2=arg2;
	temp.target=str;
	a1.push_back(temp);
	nextinstr++;
}

void QuadArr::emit(string str,int nvar,quadEnum unary_op,int errflag)
{
	stringstream srt1;
	quad temp;
	temp.target=str;
	temp.op=unary_op;
	srt1<<nvar;
	srt1>>temp.arg1;
	a1.pb(temp);
	nextinstr++;
}

void  QuadArr::emit(string str,double nvar,quadEnum unary_op,int errflag)
{
	stringstream str1;
	quad temp;
	temp.op=unary_op;
	temp.target=str;
	str1<<nvar;
	str1>>temp.arg1;
	a1.pb(temp);
	nextinstr++;
}

void  QuadArr::emit(string str,char nvar,quadEnum unary_op,int errflag){
	stringstream str1;
	quad temp;
	temp.op=unary_op;
	temp.target=str;
	str1<<nvar;
	str1>>temp.arg1;
	a1.pb(temp);
	nextinstr++;
}

void symboltable::printSymTab(bool ierr)
{
	ierr=false;
	cout<<"Name\t";
	cout<<"Type\t";
	cout<<"\tSize\t";
	cout<<"Offset\t";
	cout<<"Initval\n";
	int i=0;
	while(i<symbvec.size())
	{
		Symbdata *t=symbvec[i];
		cout<<t->name;
		cout<<"\t";
		if((t->type.dgn_type)==inttyp)
		{
			cout<<"int\t";
		}
		else if((t->type.dgn_type)==doubletyp)
		{
			cout<<"double\t";
		}
		else if((t->type.dgn_type)==chartyp)
		{
			cout<<"char\t";
		}
		else if((t->type.dgn_type)==fntyp)
		{
			cout<<"function";
		}
		else
		{
			/*if(t->type.dgn_type==chartyp)
			{
				cout<<"char ";
			}
			else if(t->type.dgn_type==inttyp){
				cout<<"int ";
			}
			else if(t->type.dgn_type==doubletyp){
				cout<<"double ";
			}*/
		}

		if(t->type.dgn_type==ptrtyp)
		{
			for(int i=0;i<(t->type.dt);i++)
				cout<<"*";
			cout<<"\t";
		}

		if(t->type.dgn_type==arrtyp)
		{
			vi tmp=t->type.listl;
			for(int i=0;i<tmp.size();i++)
				cout<<"["<<tmp[i]<<"]";
		}
		cout<<"\t";
		cout<<t->size<<"\t";
		cout<<t->offset<<"\t";
		if(t->initial_value!=NULL)
		{
			if(t->type.dgn_type==chartyp)
			{
				cout<<t->initial_value->charval;
			}
			else if(t->type.dgn_type==inttyp)
			{
				cout<<t->initial_value->intval;
			}
			else if(t->type.dgn_type==doubletyp)
			{
				cout<<t->initial_value->doubleval;
			}
			else
			{
				cout<<"NA";
			}
		}
		else{
			cout<<"NULL";
		}
		cout<<'\n';
		i++;
	}
}

list<int> genList(int val)
{
	list<int> l1;
	l1.push_back(val);
	return l1;
}

list<int> merge(list<int> l1,list<int> l2)
{
	list<int> l3;
	l3.merge(l1);
	l3.merge(l2);
	return l3;
}
