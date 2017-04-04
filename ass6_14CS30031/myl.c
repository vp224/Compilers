#define BUFF 20
#include "myl.h"
#include <stdio.h>
int printd(float f)
{
    char buff[BUFF],zero='0';
    long int i=0,j,k;
    //printf("%f\n", f);
    long int n=(long int)f;
    //printf("%f\n", f);
    if(f == 0.0)
    {
        buff[i++]=zero;
    }
    else
    {
        if(f<0)
        {
            buff[i++]='-';
            n=-n;
        }
        while(n)
        {
            long int dig=n%10;
            buff[i++]=(char)(zero+dig);
            n/=10;
        }
        
        k=i-1;
        if(buff[0]=='-')
        {
            j=1;
        }
        else
        {
            j=0;
        }
        while(j<k)
        {
            char temp=buff[j];
            buff[j++]=buff[k];
            buff[k--]=temp;
        }

    }
    float dec_part= f-(long int)f;
    //printf("%f %f %d \n",dec_part, f, (long int)f);
    if(dec_part<0)
        dec_part=-dec_part;
    long int prec=6;
    if(dec_part >=0 &&  prec >0){
        buff[i++]='.';
        while(dec_part>=0 && prec >0){
            dec_part*=10;
           long int temp=(long int)dec_part;
            buff[i++]=(char)('0'+temp);
            prec--;
            dec_part=dec_part-(long int)dec_part;

        }

    }
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(buff), "d"(i)
        ) ;
    return i;
}

#define BUFF 20
int printi(int n)
{
    char buff[BUFF],zero='0';
    int i=0;
    int j;
    int k;
    int bytes;
    if(n==0)
        buff[i++]=zero;
    else
    {
        if(n<0)
        {
            buff[i++]='-';
            n=-n;
        }
        while(n)
        {
            int dig=n%10;
            buff[i++]=(char)(dig+zero);
            n/=10;
         //   printf("hello");
        }
        if(buff[0]=='-')
            j=1;
        else
            j=0;
        k=i-1;
        while(j<k)
        {
            char temp=buff[j];
            buff[j++]=buff[k];
            buff[k--]=temp;
        }
    }
    buff[i]='\n';
   // printf("fn -> %s",buff);
    bytes=i+1;
    __asm__ __volatile__ (
    "movl $1, %%eax \n\t"
    "movq $1, %%rdi \n\t"
    "syscall \n\t"
    :
    :"S"(buff), "d"(bytes)
    ) ;
    return bytes-1;
}

    int prints(char *s)
    {
        int i=0;
        int bytes;
        while(s[i]!='\0')
        {
            i++;
        }
        bytes=i+1;
        __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(s), "d"(bytes)
        ) ;
        return bytes-1;

    }

    int readi(int *ep){
        char buff[BUFF];
        int bytes=11;
        int sum=0;
        
        __asm__ __volatile__(
            "movq $0, %%rdi \n\t"
            "movl $0, %%eax \n\t"
            "movq $0, %%rax \n\t"
            "syscall \n\t"
            :
            :"S"(buff),"d"(11)
        );
        int i=0;
        bytes--;
        /*if (bytes <=0){
            *ep=1;              //random shit
            return 0;
        }*/
        if(buff[0]=='-')
        {
            i=1;
        }
        else
        {
            i=0;
        }
        
        while(buff[i]!='\n'){
            if(buff[i]<48 || buff[i] >57)
            {
                 *ep=1;    //ERR
                 return ERR;
            }
            else
            {
                sum= sum*10 + (buff[i] - 48);
                i++;
         }
         


        }
if (buff[0]=='-'){
    sum= -sum;
  }
  *ep = sum;          //OK
  return OK;
    }
int readf(float *fp)
{
    char buff[BUFF];
    long int bytes=40;
    long int dec=0;
    long int j;
    float sum=0.0;
    __asm__ __volatile__(
          "movq $0, %%rdi \n\t"
          "movl $0, %%eax \n\t"
          "movq $0, %%rax \n\t"
          "syscall \n\t"
          :
          :"S"(buff),"d"(bytes)
          );
    bytes--;
    int i=0;
    /*if (bytes<=0){
    *fp = 0;
    return 1;
  }*/   
   //printf("fn -> %s bytes -> %d\n",buff,bytes);
  if (buff[0]=='-')
  {              
    i=1;
  }
  else
  {
    i=0;
  }
  //k=bytes;
  while(buff[i]!='\n'&&buff[i]!='e')
  {
     if (buff[i]=='.'){                              
      dec=1;
      i++;
      j=10;
      continue;
    }
    if (dec==0 && buff[i]>=48&&buff[i]<=57){
      sum=sum*10 + (buff[i]-48);   
      i++;
    }
    else{
      if (dec==1 && buff[i]>=48 && buff[i]<=57){
        sum=sum+ (1.0*(buff[i] - 48))/(j);              
        j = j*10;
        i++;
      }
      else{
        *fp = 0;
        return ERR;
      }
    }
  }
 if (buff[0]=='-'){
    sum=-sum;
  }
  *fp=sum;
  int flag=1;
  
  float exp =1;
    int temp_exp=0;
    if(buff[i] == 'e') {
        i++;
        if(buff[i]=='-')
        {
            flag=-1;
            i++;
        }
        if(buff[i]=='+')
        {
            flag=1;
            i++;
        }
        for(; buff[i]!='\n'; i++){
            if(buff[i] < 48 || buff[i] > 57) {
                return ERR;
            }
            temp_exp=temp_exp*10+buff[i]-48;
        }
        temp_exp*=flag;

        while(temp_exp>0)
                {exp *= 10;temp_exp--;}
        while(temp_exp<0)
        {
            exp/=10;
            temp_exp++;
        }
        (*fp) = (*fp) * exp;
    }
  return OK;
}    
