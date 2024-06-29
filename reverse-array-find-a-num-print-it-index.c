#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int search;
    printf("Enter the elements to search");
    scanf("%d",&search);
    for(int j =(n-1);j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    
    for(int i=0;i<n;i++)
    {
      if(arr[i]==search)
      {
          printf("\nIndex of the num%d",i);
          break;
      }
     /* else
      {
          printf("-1");
      }*/
    }
}

