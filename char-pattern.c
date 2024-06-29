#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int x=0;
    for (i=n;i>=1;i--){
        if (x==0){
    for(j=1;j<=i;j++){
            printf("%d",j);
        }
        x=1;
        }
        else
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        x=0;
        }
        printf("\n");
    }
}
