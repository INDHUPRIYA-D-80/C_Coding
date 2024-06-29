//reverse each word of string
#include<stdio.h>
int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    int count=0;
    for(int i=1;arr[i];i++,count++);
    arr[count]=' ';
    int start=0,end=0;
    for(int i=0;arr[i];i++)
    {
        if (arr[i]==' '){
            end=i;
            for(int i=start,j=end-1;i<j;i++,j--)
        }
    }
}
