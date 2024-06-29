#include<stdio.h>
int main()
{
char str1[100],str2[100];
fgets(str1,100,stdin);
int count=0;
for( int i=0;str1[i];i++)
{
    str2[i]=str1[i];
}

printf("%s",str2);
  
}



