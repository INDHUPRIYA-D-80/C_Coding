/*print occurence of each character
sample input:
hello
sample output:
h:1
e:1
l:2
o:1*/
#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    int count1=0;
    while(arr[count1]!='\0'){
        count1++;
    }
    for(int i=0;i<count1;i++){
        int count=1;
     for(int j=i+1;j<count1;j++) {
         if(arr[i]==arr[j]){
             if(arr[i]=='*'|| arr[j]=='*'){
               continue;
             }
             else{
                 count++;
                 arr[j]='*';
                }
             }
     }
     if(arr[i]=='*'||arr[i]==' '){
         continue;
     }
     else
     printf("%c:%d\n",arr[i],count);
    }
}
