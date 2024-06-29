#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr1[n];
  for(int i=0;i<n;i++)
  {
   scanf("%d",&arr1[i]);
  }
  printf("%d %d ",arr1[0],arr1[n-1]);
}
