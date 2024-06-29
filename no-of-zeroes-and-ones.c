#include<stdio.h>
int main()
{
    int n;
    int z=0,o=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int j =0;j<n;j++)
    { 
       if(arr[j]==0)
       {
           z++;
       }
        else if(arr[j]==1)
        {
            o++;
        }
    }
    printf("No of zero's:%d",z);
    printf("\nNo of one's:%d",o);

}

