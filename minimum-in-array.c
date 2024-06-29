#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,j,arr[n],min=INT_MAX;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
     if(arr[i]<min)
     {
         min=arr[i];
     }
    
    printf("%d",min);
     
    
}
