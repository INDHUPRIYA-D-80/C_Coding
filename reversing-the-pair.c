#include<stdio.h>
#include<math.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    long long int x=a,y=a,c=0,res=0,rex=0,flag=0;
    for(;x>0;x/=10,c++);
    long long int ct=c,last=a%10;
    if(c%2!=0){
        a/=10;
        c-=1;
        flag=1;
    }
    long long int div=pow(10,c-2);
    while(a>0){
    long long int rem=a/div;
    while(rem>0){
        rex=rex*10+(rem%10);
        rem/=10;
    }
    res=(res*100)+rex;
    a=a%(div);
    div/=100;
    rex=0;
}
if(flag==1)res=res*10+last;
printf("%lld",res);
}
