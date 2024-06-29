//without doing duplicate of the num
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    int count = 0;
    for(int i=1;num/i!=0;i*=10,count++);
    while(num>0){
        int rem=num/(int)pow(10,count-2);
        int first=rem*10;
        int second=rem/10;
        printf("%d %d\n",first,second);
        num%=(int)pow(10,count-2);
    }
    
    }
