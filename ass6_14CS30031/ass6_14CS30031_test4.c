int printi(int num);
int prints(char * c);
int readi(int *eP);


int main(){
    int l1=100;
    int l2=100;
    prints("We try and find the levasthein distance between two strings\n");
    int i,j;

    //dp[i][j]=100;

    /*for(i=0;i<l1;i++){
        i=123;
    }*/
    int dp[101][101];
    char a[1001];
    char b[1023];

   for(i=0;i<l1;i++){
        dp[i][0]=1;
        dp[0][i]=1;
    }
    printi(dp[89][98]);

    if(a[0]==b[6]){
        b[5]++;
    }
    
    char a[101];
    char b[101];

    for(i=1;i<=l1;i++){
        for(j=1;j<=l2;j++){
            if(a[i]==b[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                if(dp[i-1][j]<dp[i][j]){
                    dp[i][j]=dp[i-1][j];
                }
                if(dp[i][j-1]<dp[i][j]){
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
    } 

    printi(dp[l1][l2]);
    return 0;
}//arrays are working completely