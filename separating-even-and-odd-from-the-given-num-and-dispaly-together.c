/*sample input 345678
sample output:357468*/
#include<stdio.h>
int power(int a,int b);
int main(){
    int num;
    scanf("%d",&num);
    int odd=0,even=0;
    int temp=num,count=0;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    while(num>0){
        int rem=num/(int)power(10,count-1);
        if(rem%2==0){
            even=even*10+rem;
        }
        else{
            odd=odd*10+rem;
        }
        num=num%(int)power(10,count-1);
        count--;
    }
    //odd = 357 even =246
    int temp1=even,evencount=0;
    while(temp1>0){
        temp1/=10;
        evencount++;
    }
    odd=odd*power(10,evencount);
    int result;
    result=odd+even;
    printf("%d",result);
}
int power(int a,int b){
   int res=1;

    for(int i=0;i<b;i++){
    res=res*a;
    }
    return res;
}
