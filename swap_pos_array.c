#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Before Swap: ");
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    int temp = arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=temp;
    printf("\nAfter Swap: ");
    for( i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

