/*count num of words in given strimg sample input hi hello how are you sample output 5*/
#include<stdio.h>
int main()
{
char str[100],count=0;
fgets(str,100,stdin);

for(int i=0;str[i];i++)

 if(str[i]==' '){
     count++;
 }
}
count+=1;
printf("%d",count);
}
