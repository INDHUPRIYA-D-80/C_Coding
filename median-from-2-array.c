//pgm to find the median of two arrays (user ip) and sorted

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr1[n], arr2[n];
  int arr3[n*2];
  for(int i=0;i<n;i++)
  {
   scanf("%d",&arr1[i]);
  }
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);
  }
  //MERGING OF TWO ARRAY
  for(int i=0;i<n;i++)
  {
   arr3[i]=arr1[i];
  }
  for(int i=n,j=0;i<n*2;i++,j++)
  {
   arr3[i]=arr2[j];
  }
  //SORTING OF AN ARRAY
  for(int i=0;i<n*2;i++)
  {
    for(int j=i+1;j<n*2;j++)
    {
      if (arr3[i]<arr3[j])
      {
       int temp=arr3[i];
       arr3[i]=arr3[j];
       arr3[j]=temp;
      }
    }
  }
  for (int i=0;i<n*2;i++)
  {
    printf("%d ",arr3[i]);
  }
  int res = arr3[((n*2)/2)+1]+arr3[n/2];
  printf("\n%d ",res);
  
}
