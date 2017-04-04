int a,b;
int f(int n){
    if(n==1){
        return a+b;
    }
    else if(n==0){
        return b;
    }
    else{
        return a*f(n-1)+b*f(n-2);
    }
}

int main(){
    int n,m;
    n=100;
    m=99;

    int answer1=f(67);

    if(n>100){
        m=m+10;
    }
    else{
        m=m-19;
    }

    if(n!=0){
        m=m+n;
    }


    int a[100];
    a[9]++;

    a[10]=a[9]+n;
    a[10]=(a[7]+a[8]/9);
    return 0;
}//if else constructs and arrays are also working