// You are using GCC
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m1[n][n];
    int m2[n][n];
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    int a[n][n],sub[n][n],mul[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=m1[i][j]+m2[i][j];
            sub[i][j]=m1[i][j]-m2[i][j];
            mul[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                mul[i][j] += m1[j][k]*m2[k][k];
            }
         }
    }
    printf("Matrix Addition:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Subtraction:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Multiplication:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",mul[j][i]);
        }
        printf("\n");
    }
    return 0;
}
