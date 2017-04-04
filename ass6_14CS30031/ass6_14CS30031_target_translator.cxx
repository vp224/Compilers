#include "ass6_14CS30031_target_translator.h"
using namespace std;

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
void get(string x){
	cout<<"--"<<x<<'\n';
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
		symbvec.push_back(Symboltable[var]);
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
	a1.push_back(temp);
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
	a1.push_back(temp);
	nextinstr++;
}

void  QuadArr::emit(string str,char nvar,quadEnum unary_op,int errflag){
	stringstream str1;
	quad temp;
	temp.op=unary_op;
	temp.target=str;
	str1<<nvar;
	str1>>temp.arg1;
	a1.push_back(temp);
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



string currfn="";
extern QuadArr Quad;
extern symboltable glbST;
extern symboltable* mainSymTab;
symboltable mainSymTab_temp=glbST;
int blckindex=64;
extern vector<string> stringConstant;
svs parameters;

void quad_codeprint(quad q);

void String_print()
{
	cout<<".section\t.rodata\n";
	int n1=0;
	for(int i=0;i<stringConstant.size();i++)
	{
		cout<<".LC"<<n1<<" : "<<'\n';
		cout<<".string\t"<<stringConstant[i]<<'\n';
		n1++;
	}
}

void prologue(int temp)
{

	/*
		.cfi_startproc
	pushq	%rbp                             	
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp                       
	.cfi_def_cfa_register 6
	subq	$4816, %rsp
	*/
	int temp1=(1+temp/16)*16;
	cout<<"\t.global\t"<<currfn;
	cout<<'\n';
	cout<<"\t.type\t";
	cout<<currfn;
	cout<<", @function";
	cout<<'\n';
	cout<<currfn;
	cout<<":";
	cout<<'\n';
	cout<<"\tpushq\t%rbp";
	cout<<'\n';
	cout<<"\tmovq\t%rsp, %rbp";
	cout<<'\n';
	cout<<"\tsubq\t$";
	cout<<temp1;
	cout<<",\t%rsp";
	cout<<'\n';
}

void global_print()
{
    vector<Symbdata *>::iterator it;
    for(it=(glbST.symbvec).begin();it!=(glbST.symbvec).end();it++)
    {
        if(((*it)->type.dgn_type==inttyp )&&(*it)->name[0]!='t')
        {              
            if(((*it)->initial_value)!=NULL)
            {
                cout<<"\t.globl\t";
                cout<<(*it)->name;
                cout<<'\n';
                cout<<"\t.data";
                cout<<'\n';
                cout<<"\t.align 4";
                cout<<'\n';
                cout<<"\t.type\t";
                cout<<(*it)->name;
                cout<<", @object";
                cout<<'\n';
                cout<<"\t.size\t";
                cout<<(*it)->name;
                cout<<", 4";
                cout<<'\n';
                cout<<(*it)->name;
                cout<<":";
                cout<< '\n';
                cout<<"\t.long\t";
                cout<<(*it)->initial_value->intval;
                cout << '\n';
			}
            else
            {
               cout << "\t.comm\t";
               cout<<(*it)->name;
               cout<<",4,4";
               cout<<'\n';
            }
        }
        if((*it)->name[0]!='t' && (*it)->type.dgn_type==chartyp )
        {   
            if((*it)->initial_value==NULL)
            {                
                cout << "\t.comm\t";
                cout<<(*it)->name;
                cout<<",1,1";
                cout<<'\n';
            }
            else
            {
                cout<<"\t.globl\t";
                cout<<(*it)->name;
                cout<<'\n';
                cout<<"\t.data";
                cout<<'\n';
                cout<<"\t.type\t";
                cout<<(*it)->name;
                cout<<", @object";
                cout<<'\n';
                cout<<"\t.size\t";
                cout<<(*it)->name;
                cout<<", 1";
                cout<<'\n';
                cout<<(*it)->name;
                cout<< ":" ;
                cout<< '\n';
                cout<<"\t.byte\t";
                cout<< (*it)->initial_value->charval;
                cout << '\n';
            }
        }    
    }
}

void gencode()
{
	Symbdata *function=NULL;
	symboltable *fsymtab=NULL;
	
	int memfold;
	global_print();String_print();

	cout<<"\t.text";
	cout<<'\n';
	map<int,string> lgoto;
	int n1=0,pfc=0;
	for(vector<quad>::iterator it=Quad.a1.begin();it!=Quad.a1.end();it++)
	{
		if( (it->op)<=IF_NOT_EXPRESSION && (it->op)>=GOTO )
		{
			stringstream str1;
			int gotoout;
			cerr<<"quad is-->";
			cerr<<it->arg1;
			cerr<<"--";
			cerr<<it->arg2;
			cerr<<"--";
			cerr<<it->target;
			cerr<<"--";
			cerr<<'\n';
			str1<<it->target;
			str1>>gotoout;
			if(lgoto.count(gotoout)==0)
			{

				string temp;
				stringstream str2;
				str2<<".L"<<n1;
				n1++;
				str2>>temp;
				lgoto[gotoout]=temp;
			}
			it->target=lgoto[gotoout];
		}
	}
	for(vector<quad>::iterator it=Quad.a1.begin();it!=Quad.a1.end();it++,pfc++){
		cout<<"  # ";
		it->printquad();
		if(lgoto.count(pfc)){
			cout<<lgoto[pfc]<<":"<<'\n';
		}
		switch(it->op)
		{		
		case FUNCTION_BEG:
		{
			it++;
			pfc++;
			if(it->op!=FUNCTION_END)
				{it--;pfc--;}
			else
				continue;
			int memfold=8;
			bool isparam=true;
			function=glbST.global_lu(it->target);
			fsymtab=function->nest_symtab;
			mainSymTab=fsymtab;
			for(vector<Symbdata*>::iterator it1=fsymtab->symbvec.begin();it1!=fsymtab->symbvec.end();it1++)
			{
				if((*it1)->name=="retVal")
				{
					isparam=false;
					memfold=0;
				}
				else
				{
					if(isparam)
					{
						(*it1)->offset=memfold;
						memfold=memfold+4;
					}
					else
					{
						memfold-=(*it1)->size;
						(*it1)->offset=memfold;
					}
				}
			}
			if(memfold>=0)
			{
				memfold=0;
				
			}
			else{
				memfold=-memfold;
			}
			currfn=it->target;
			prologue(memfold);
			continue;
		}
		break;
		case FUNCTION_END:
		{
			mainSymTab=&(glbST);
			currfn="";
			cout<<"\tleave";
			cout<<'\n';
			cout<<"\tret";
			cout<<'\n';
			cout<<"\t.size";
			cout<<"\t";
			cout<<it->target;
			cout<<",\t.-";
			cout<<it->target;
			cout<<'\n';
			continue;
		}
		break;
	}
		if(currfn!="")
		{
			quad_codeprint(*it);
		}
	}
}

void initial_name(){
	//print the file name
}

void quad_codeprint(quad q)
{
	int offset_a1=0;
	int offset_a2=0;
	int offset_target=0;
	string sa1="";
	string sa2="";
	string sop="";
	if(q.op==FUNCTION_BEG)
	{
		cout<<"\t";
		cout<<q.target;
		cout<<":";
		cout<<'\n';
	}
	Symbdata *symb1=mainSymTab->lookup(q.arg1);
	Symbdata *symb2=mainSymTab->lookup(q.arg2);
	Symbdata *symb3=mainSymTab->lookup(q.target);
	Symbdata *fsymb1=mainSymTab_temp.global_lu(q.arg1);
	Symbdata *fsymb2=mainSymTab_temp.global_lu(q.arg2);
	Symbdata *fsymb3=mainSymTab_temp.global_lu(q.target);


	if(fsymb1==NULL)
	{
		offset_a1=symb1->offset;
	}
	if(fsymb2==NULL)
	{
		offset_a2=symb2->offset;
	}
	if(fsymb3==NULL)
	{
		offset_target=symb3->offset;
	}
	if(mainSymTab==&glbST)
	{
		sa1=q.arg1;sa2=q.arg2;
		sop=q.target;
	}
	if((q.arg1[0]<'0'||q.arg1[0]>'9' ))
	{
		if(fsymb1!=NULL)
		{
			sa1=q.arg1;
		}
		else
		{
			int var=abs(offset_a1);
			if(var==0)
				sa1.append(1u,'0');
			while(var!=0)
			{
				sa1.append(1u,(char)('0'+var%10));
				var/=10;
			} 
			if(offset_a1<0)
			sa1.append(1u,'-');
			reverse(sa1.begin(),sa1.end());
			sa1=sa1+"(%rbp)";
		}
	}
	if((  q.arg2[0]<'0'||q.arg2[0]>'9'))
	{
		if(fsymb2!=NULL)
		{
			sa2=q.arg2;
			
		}
		else
		{
			int var=abs(offset_a2);
			if(var==0){
				sa2.append(1u,'0');
			}
			while(var!=0){
				sa2.append(1u,(char)('0'+var%10));
				var/=10;
			} 
			if(offset_a2<0)
			sa2.append(1u,'-');
			reverse(sa2.begin(),sa2.end());
			sa2=sa2+"(%rbp)";
		}
	}
	if((q.target[0]<'0'||q.target[0]>'9' ))
	{
		if(fsymb3!=NULL)
		{
			sop=q.target;
		}
		else
		{
			int var=abs(offset_target);
			if(var==0){
				sop.append(1u,'0');
			}
			while(var!=0){
				sop.append(1u,(char)('0'+var%10));
				var/=10;
			}
			if(offset_target<0)
			    sop.append(1u,'-');
			reverse(sop.begin(),sop.end());
			sop=sop+"(%rbp)";
			
		}
	}

	if(q.op==ASSIGN){
		if(q.arg1[0]>='0' && q.arg1[0]<='9')
		{
			//movl	$value,	-4(%rbp)
			cout<<"\t"<<"movl";
			cout<<"\t$";
			cout<<q.arg1;
			cout<<",";
			cout<<"\t";
			cout<<sop;
			cout<<'\n';
		}
		else
		{
			//movl -8(%rbp),%eax;
			//movl %eax,-4(%rbp);
			cout<<"\tmovl\t";
			cout<<sa1;
			cout<<",\t%eax";
			cout<<'\n';
			cout<<"\tmovl\t%eax,\t";
			cout<<sop;
			cout<<'\n';
		}
	}
	else if(q.op==UNARY_MINUS)
	{
		//a=-b;
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tnegl\t%eax";
		cout<<'\n';
		cout<<"\tmovl\t%eax,\t";
		cout<<sop;
		cout<<"\t";
		cout<<'\n';
	}
	else if(q.op==PLUS){
		//a=b+c;
		if(q.arg2[0]>='0' && q.arg2[0]<='9'){
            cout<<"\t";
            cout<<"movl";
            cout<<"\t";
            cout<<sa1;
            cout<<",";
            cout<<"\t%edx";
            cout<<'\n';
            cout<<"\t";
            cout<<"addl\t $";
            cout<<q.arg2;
            cout<<",\t %edx";
            cout<<'\n';
            cout<<"\t";
            cout<<"movl\t %edx,\t %eax";
            cout<<'\n';
            cout<<"\tmovl\t%eax,\t";
            cout<<sop<<'\n';
		}
		else{
			cout<<"\tmovl\t";
			cout<<sa1;
			cout<<",\t%edx"<<'\n';
			cout<<"\tmovl\t";
			cout<<sa2;
			cout<<",\t%eax";
			cout<<'\n';
			cout<<"\taddl\t%edx,\t%eax";
			cout<<'\n';
			cout<<"\tmovl\t%eax,\t";
			cout<<sop<<'\n';
		}
	}
	else if(q.op==MINUS){
		//a=b-c;
		if(q.arg2[0]>='0' && q.arg2[0]<='9')
		{
            cout<<"\t";
            cout<<"movl";
            cout<<"\t"<<sa1;
            cout<<",";
            cout<<"\t%edx";
            cout<<'\n';
            cout<<"\t";
            cout<<"subl\t $";
            cout<<q.arg2;
            cout<<",\t %edx";
            cout<<'\n';
            cout<<"\t";
            cout<<"movl\t %edx,\t %eax";
            cout<<'\n';
            cout<<"\tmovl\t%eax,\t";
            cout<<sop<<'\n';
		}
		else
		{
			cout<<"\tmovl\t";
			cout<<sa1;
			cout<<",\t%edx";
			cout<<'\n';
			cout<<"\tmovl\t";
			cout<<sa2;
			cout<<",\t%eax";
			cout<<'\n';
			cout<<"\tsubl\t%edx,\t%eax";
			cout<<'\n';
			cout<<"\tmovl\t%eax,\t";
			cout<<sop;
			cout<<'\n';
		}
	}
	else if(q.op==MULT){
		//a=b-c;
		if(q.arg2[0]>='0' && q.arg2[0]<='9'){
            cout<<"\t"<<"movl";
            cout<<"\t";
            cout<<sa1;
            cout<<",";
            cout<<"\t%edx";
            cout<<'\n';
            cout<<"\t";
            cout<<"imull\t $";
            cout<<q.arg2;
            cout<<",\t %edx";
            cout<<'\n';
            cout<<"\t";
            cout<<"movl\t %edx,\t %eax";
            cout<<'\n';
            cout<<"\tmovl\t%eax,\t";
            cout<<sop;
            cout<<'\n';
		}
		else{
			cout<<"\tmovl\t";
			cout<<sa1;
			cout<<",\t%edx";
			cout<<'\n';
			cout<<"\tmovl\t";
			cout<<sa2;
			cout<<",\t%eax";
			cout<<'\n';
			cout<<"\timull\t%edx,\t%eax";
			cout<<'\n';
			cout<<"\tmovl\t%eax,\t";
			cout<<sop;
			cout<<'\n';
		}
	}
	else if(q.op==DIVIDE){
		//a=b/c;
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%edx";
		cout<<'\n';
		cout<<"cltd";
		cout<<'\n';
		cout<<"\tidivl\t";
		cout<<sa2;
		cout<<'\n';
		cout<<"\tmovl\t%eax,\t";
		cout<<sop<<'\n';
	}
	else if(q.op==MODULO)
	{
		//a=b%c;
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%edx";
		cout<<'\n';
		cout<<"cltd"<<'\n';
		cout<<"\tidivl\t";
		cout<<sa2;
		cout<<'\n';
		cout<<"\tmovl\t%eax,\t";
		cout<<sop<<'\n';
	}
	else if(q.op==GOTO)
	{
		cout<<"\t";
		cout<<"jmp\t";
		cout<<q.target;
		cout<<'\n';
	}
	else if(q.op==IF_LESS)
	{
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tcmpl\t";
		cout<<sa2;
		cout<<",\t%eax"<<'\n';
		cout<<"\tjge\t.L";
		cout<<blckindex;
		cout<<'\n';
		cout<<"\tjmp\t";
		cout<<q.target;
		cout<<'\n';
		cout<<".L";
		cout<<blckindex;
		cout<<":"<<'\n';
		blckindex++;
	}
	else if(q.op==IF_GREATER){
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tcmpl\t";
		cout<<sa2<<",\t%eax"<<'\n';
		cout<<"\tjle\t.L";
		cout<<blckindex<<'\n';
		cout<<"\tjmp\t";
		cout<<q.target<<'\n';
		cout<<".L";
		cout<<blckindex<<":"<<'\n';
		blckindex++;	
	}
	else if(q.op==IF_EQUAL)
	{
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tcmpl\t";
		cout<<sa2;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tjne\t.L";
		cout<<blckindex<<'\n';
		cout<<"\tjmp\t";
		cout<<q.target;
		cout<<'\n';
		cout<<".L";
		cout<<blckindex;
		cout<<":";
		cout<<'\n';
		blckindex++;
	}
	else if(q.op==IF_NOT_EQUAL)
	{
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tcmpl\t";
		cout<<sa2;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tje\t.L";
		cout<<blckindex;
		cout<<'\n';
		cout<<"\tjmp\t";
		cout<<q.target;
		cout<<'\n';
		cout<<".L";
		cout<<blckindex;
		cout<<":";
		cout<<'\n';
		blckindex++;
	}
	else if(q.op==IF_EXPRESSION)
	{
		cout<<"\tcmpl\t$0,\t";
		cout<<sa1;
		cout<<'\n';
		cout<<"\tje\t.L";
		cout<<blckindex;
		cout<<'\n';
		cout<<"\tjmp\t";
		cout<<q.target;
		cout<<'\n';
		cout<<".L";
		cout<<blckindex;
		cout<<":";
		cout<<'\n';
		blckindex++;
	}
	else if(q.op==IF_NOT_EXPRESSION)
	{
		cout<<"\tcmpl\t$0,\t";
		cout<<sa1;
		cout<<'\n';
		cout<<"\tjne\t.L";
		cout<<blckindex;
		cout<<'\n';
		cout<<"\tjmp\t";
		cout<<q.target;
		cout<<'\n';
		cout<<".L";
		cout<<blckindex;
		cout<<":";
		cout<<'\n';
		blckindex++;
	}
	else if(q.op==PARAM)
	{
		stringstream s1,s2;
		if(q.target[0]>='0' && q.target[0]<='9')
		{
			s1<<"\tmovl\t"<<q.target<<",\t%esi"<<'\n';
		}
		else{
			s1<<"\tmovl\t"<<sop<<",\t%esi"<<'\n';
		}
		s2<<"\tpushq\t%rsi\t"<<'\n';
		vector<string> temp1;
		temp1.push_back(s1.str());
		temp1.push_back(s2.str());
		parameters.push(temp1);
	}
	else if(q.op==CALL){
		while(!parameters.empty()){
			vector<string>temp1=parameters.top();
			parameters.pop();
			cout<<temp1[0];
			cout<<temp1[1];
		}
		int size1;
		stringstream ss;
		ss<<q.arg1;
		ss>>size1;
		size1*=4;
		cout<<"\tcall\t"<<q.target<<'\n';
		cout<<"\taddq\t$"<<size1<<",\t%rsp"<<'\n';
		if(q.arg2!=""){
			cout<<"\tmovl\t%eax,\t"<<sa2<<'\n';
		}
	}
	else if(q.op==RETURN){
		if(q.target.compare("")!=0){
			cout<<"\tmovl\t"<<sop<<",\t%eax"<<'\n';
		}
	}
	else if(q.op==ARRAY_INDEX_FROM){
		//qwe
		cout<<"\tmovl\t";
		cout<<sa2;
		cout<<",\t%edx";
		cout<<'\n';
		cout<<"\tmovl\t";
		cout<<offset_a1;
		cout<<"(%ebp,%edx,1),\t%eax";
		cout<<'\n';
		cout<<"\tmovl\t%eax,\t";
		cout<<sop;
		cout<<'\n';
	}
	else if(q.op==ARRAY_INDEX_TO){
		//qwe
		cout<<"\tmovl\t";
		cout<<sa2;
		cout<<",\t%edx"<<'\n';
		cout<<"\tmovl\t";
		cout<<sa1;
		cout<<",\t%eax";
		cout<<'\n';
		cout<<"\tmovl\t%eax,\t";
		cout<<offset_target;
		cout<<"(%ebp,%edx,1)";
		cout<<'\n';
	}
}
