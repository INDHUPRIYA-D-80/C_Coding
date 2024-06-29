#include <stdio.h>

int main()
{
    int n,value;
    scanf("%d",&n);
    int arr[n],i,j;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
    int search;
    printf("enter the element to search");
    scanf("%d",&search);
    for ( i=0,j=n-1;i<n/2;i++,j--){
       int temp=arr[j];
       arr[j]=arr[i];
       arr[i]=temp;
        }
         for (i=0;i<n;i++){
             printf("Reversed array%d ",arr[i]);
    }
  for(int i=0;i<n;i++)
  {
      if(arr[i]==search)
      {
          printf("\nindex of the element searched%d",i);
          break;
      }
  }
}
