#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf("Not a Prime");
        }
        else if(i==n-1)
        {
            printf("Prime");
            
        }
    }
}
