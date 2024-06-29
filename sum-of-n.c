#include <stdio.h>

int main()
{
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int sum =0;   // if not declared it takes garbage value
    for (i=1;i<=n;i++)
    {
        sum+=i;  //sum = sum +i;
    }
    printf("Sum: %d",sum);
}
