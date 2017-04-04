int f(int a,int b);

int f1(int a,int b,int c,int d,int e){
    int temp1=0;
    temp1=a+b;
    return temp1;
}

int y1,y3,y4;

int f2(int a,int b){
    int temp1=0;
    temp1=a*b;
    return temp1;
}

int main(){
    int a;
    int b;
    int c;
    a=100;
    y1=100;
    y4=1001;
    y3=123;
    c=f1(a,b,a,b,a);
    c=f2(a,b);
    return 0;
}//function calls are working