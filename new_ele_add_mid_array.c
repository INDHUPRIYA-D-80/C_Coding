#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ne;
    scanf("%d",&ne);
    int pos;
    if(n%2==0){
        pos=n/2;
    }
    for(i=0;i<n;i++){
        if(i==pos){
            printf("%d ",ne);
        }
        printf("%d ",arr[i]);
    }
    return 0;
}
