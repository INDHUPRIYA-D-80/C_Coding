#include<stdio.h>
int main()
{
    int n,x=1,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
        printf("%d",x%2);
        x++;
    }
    printf("\n");
    if(j%2==0) x=1;
    else x=0;
    }
}
