#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i =0; i<n;i+=2)
     sum+=i;
     printf("%d",sum);
}
