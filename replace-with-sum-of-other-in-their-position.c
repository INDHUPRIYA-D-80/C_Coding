#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int j =0;j<n;j++)
    { 
        sum=sum+arr[j];
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",sum-arr[i]);
    }
    
}

