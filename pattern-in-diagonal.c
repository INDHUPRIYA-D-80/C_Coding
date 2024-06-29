#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        if(i==j || i+j==6)
         printf("*");
        
        else
         printf(" ");
        printf("\n"); 
    }
}
