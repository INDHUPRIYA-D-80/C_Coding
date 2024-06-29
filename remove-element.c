#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int remove;
    scanf("%d",&remove);
    for(int i=0;i<n;i++){
        if(arr[i]==remove){
            arr[i]=0;
        for(int j=i;j<n;j++){
            arr[j]=arr[j+1];//1 2 3 4 5 ,, after deletion 3 from array the [j+1]will mpve the enext element to the deleted space
        }
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);//last two line will display after deletion process occur
    }
    return 0;
}
