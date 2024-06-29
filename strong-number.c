//1, 2, 145, and 40585
#include<stdio.h>
int fact(int n);
int main(){
    int num;
    scanf("%d",&num);
    int sum=0,check=num,res=0;
    while(num>0){
        int rem=num%10;
        sum=sum+fact(rem);
        num=num/10;
    }
    if(check==sum){
        printf("Strong Number");
    }
    else{
        printf("Not a strong number");
    }
    //printf("%d",res);
}
int fact(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    fact=fact*i;
}
