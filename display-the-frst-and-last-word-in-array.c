#include <stdio.h>
int main()
{
  char arr[100];
  fgets(arr,100,stdin);
  char first[100],last[100];
  int count;
  for(count=1;arr[count];count++);
  count--;
  for(int i=0;arr[i]!=' ';i++)
  {
      first[i]=arr[i];
  }
  for(int i=count-1,j=0;arr[i]!=' ';i--)
  {
      last[j++]=arr[i];
 
     
  }
  int count2=0;
  for(int i=0;last[i];i++,count2++);
  for(int i=0,j=count2-1;i<j;i++,j--)
  {
      char temp=last[i];
      last[i]=last[j];
      last[j]=temp;
     
  }
  printf("%s %s",first,last);
}
