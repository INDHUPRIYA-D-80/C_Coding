#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
        n--;
    }
     for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}
