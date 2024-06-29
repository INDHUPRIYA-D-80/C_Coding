#include <stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    int numreplace,numreplaceto;
    scanf("%d %d",&numreplace,&numreplaceto);
    int res=0,count=0;
    for(int temp=num;temp>0;temp/=10,count++);
    while(num!=0){
       int quo = num/(int)pow(10,count-1);
       if(quo==numreplace){
           res=res*10+numreplaceto;
       }
       else{
           res= res*10+quo;
       }
       num=num%(int)pow(10,count-1);
       count--;
       
       }
       printf("%d",res);
}
