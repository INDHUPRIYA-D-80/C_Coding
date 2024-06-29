#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
   
   int count1=0,count2=0;
   for(int i=1;str1[i];i++,count1++);
   for(int i=1;str2[i];i++,count2++);
   char str3[count1+count2];
   for(int i=0;i<count1;i++){
       str3[i]=str1[i];
   }
   for(int i=count1,j=0;i<(count1+count2);i++,j++){
       str3[i]=str2[j];
   }
   printf("%s",str3);
    return 0;
}
