#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number");
    scanf ("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
           sum+=i;
    }
    int res=0;
    while(sum>0){
        int rem=sum%10;
        if(rem%2!=0){
            res+=rem;
        }
        sum/=10;
        }
 printf("%d",res);
    }
