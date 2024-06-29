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
     
    
/*}

#include<stdio.h>
int main()
{
    int n,i,j,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }*/
    int a=arr[0];
    for(i=0;i<n;i++)
     if(arr[i]>a)
     {
         a=arr[i];
     }
    
    printf("%d",a);
     
    
}
//for finding minimum in integer initialies a as INT_MIN then in printf instead of a give it as INT_MIN
