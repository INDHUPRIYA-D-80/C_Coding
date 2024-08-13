#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    if(n<m){
        printf("Invalid position. Deletion not possible.");
    }
    else{
    for(i=0;i<n;i++){
        if(i!= m-1){
            printf("%d ",arr[i]);
        }
    }
}
}

