// You are using GCC
#include<stdio.h>
#include<string.h>
int subs(const char *str){
    int n=strlen(str);
    int max=1,start=0;
    int i,j,k;
    for( i=0;i<n;i++)
    {
        for(j=i;j<n;j++){
            int flag=1;
            for( k=0;k<(j-i+1)/2;k++){
                if(str[i+k] != str[j-k]){
                    flag=0;
                }
                if (flag &&(j-i+1)> max){
                    start =i;
                    max=j-i+1;
                }
            }
        }
        return max;
    }
}
 int main(){
     char sen[50];
    // fgets(sen,strlen(sen),stdin);
     scanf("%s",sen);
     printf("%d\n",subs(sen));
 }   
