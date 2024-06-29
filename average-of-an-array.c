#include<stdio.h>
int main()
{
    int n;
    int sum=0,avg;
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
    avg=sum/n;
        printf("%d ",avg);
    
}

