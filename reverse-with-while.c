#include <stdio.h>

int main()
{
    int n,value;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
    int i=0,j=n-1;
    while(i<j){
           int temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
           i++;
           j--;
        }
         for (i=0;i<n;i++){
             printf("%d ",arr[i]);
    }
    int search;
    printf("Enter the element to search");
    scanf("%d",&search);
  for(int i=0;i<n;i++)
  {
      if(arr[i]==search)
      {
          printf("\nindex of the element searched%d",i);
          break;
      }
  }
}
