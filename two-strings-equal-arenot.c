//whether two strings are equal are not
#include<stdio.h>
int main()
{
char str1[100],str2[100];
fgets(str1,100,stdin);
fgets(str2,100,stdin);
int count1=0,count2=0;
for(int i=0;str1[i];i++,count1++);
for(int i=0;str2[i];i++,count2++);
if (count1!=count2){
    printf("No");
    }
else
for(int i=0;i<=count1;i++)
{
 if(str1[i]!=str2[i]){
     printf("No");
     break;
     
    }
    else if(i==count1-1){
      printf("Yes");
    }
}
}
