//print the count of an element in array whose values are lesser than the key entered
#include<stdio.h>
int main()
{
    int n,k;
    int c=0;
    scanf("%d",&n);
    printf("Enter the key value:");
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int j =0;j<n;j++)
    { 
       if(k>arr[j])
       {
           c++;
       }
        
    }
    printf("count:%d",c);


}


