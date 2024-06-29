#include<stdio.h>
int main()
{
    int n,i,j,arr[n],min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
   
    for(i=1; i<n; i++)
    {
         if(min>arr[i])
         {
		  min=arr[i]; 
         }
		 if(max<arr[i])
		 {
		    max=arr[i];       
         }
    }
    printf("%d",max);
     printf("%d",min);
}
    


