#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);//getting range to which the prime numbers get displayed
    for(int i=1;i<n;i++)
    {
        if (isprime(i))
                {
            printf("%d ",i);
                }
    }
}
int isprime(int i)
{
    if(i<=1)
     return 0;
    for(int x=2;x<i;x++)
    {
        if(i%x==0)
        return 0;
    }
    return 1;
}

