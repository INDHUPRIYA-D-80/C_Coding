//accept string and print no of vowel in string
#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
        count++;
        }
    }
    printf("%d",count);
}
