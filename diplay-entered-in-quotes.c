#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    char arr[100];
    sprintf(arr,"%d",a);
    for(int i=0;arr[i];i++)
      printf("%c",arr[i]);
}
