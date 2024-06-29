#include<stdio.h>
int main()
{
    int n,k,v;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("index:");
    scanf("%d",&k);
    printf("value to be inserted:");
    scanf("%d",&v);
   /* for (int i=0;i<n;i++)
    {
        if(i==k)
        {
        for(int j=i;j<n+1;j++)
           {
               arr[j+1]=arr[i];
               i++;
               arr[j]=v;
           }
        }
    }*/
    for(int i=n-1; i>=k-1; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[k-1] = v;
    for(int i=0;i<=n;i++)
    {
      printf("%d",arr[i]);
    }
    return 0;
    
}







