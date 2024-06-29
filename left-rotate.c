#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++,printf("\n\n")){
        int last=arr[n-1];
        for(int j=n;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=last;
        for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    }
    return 0;
}
