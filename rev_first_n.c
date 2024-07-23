
// You are using GCC
#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    
    for(i=0;i<m/2;i++){
        int temp = arr[i];
        arr[i]=arr[m-i-1];
        arr[m-i-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}

