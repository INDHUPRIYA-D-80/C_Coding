//get a string input to uppercase
#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int stringcount=0;
    for(int i=1;str[i];i++,stringcount++);
    int count =0;
    for(int i=0;str[i];i++){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9'))
        count++;
    }
   printf("%s",stringcount-count);
}
