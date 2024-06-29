#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the no.of.rows and columns");
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
         for(j=1;j<=m;j++){
             if(i==1 || i ==n || j==1 || j==m)
             {
             printf("*");
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
    }
}
