/*1.SAMPLE INPUT
     1234
     4123
SAMPLE OUTPUT
    circular number
2.SAMPLE INPUT
    1234
    4213
SAMPLE OUTPUT
    circular number
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num,check;
    scanf("%d %d",&num,&check);
    int temp=num,count=0,flag=0;
    for (;temp>10;temp/=10,count++); // counting the no of digits
    for (int i=1;i<count;i++){
        int rem=num%10;
        int quo=num/10;
        int res=rem*(int)pow(10,count)+quo;
        if(check==res){
            printf("Circular number");
            flag=1;
                
        /*else if(i==count-1){
            printf("Not Circular Number");*/
            
        }
        num=res;
    }
    if(flag==0){
        printf("Not Circular Number");
}
}
