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
  printf("\n Enter the element to search");
  scanf("%d",&search);
  for(int i=0;i<n;i++)
  {
      if(arr[i]==search)
      {
          printf("%d",i);
          break;
      }
      /*else
      printf("Not Found");*/
      
  }
 }
