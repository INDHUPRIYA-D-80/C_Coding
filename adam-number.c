#include<stdio.h>
int main(){
    //to reverse a num
 /*int n=123;
 int rev=0;
 while(n>0){
     int rem=n%10;
     rev=rev*10+rem;
     n/=10;
 }
 printf("%d",rev);*/
 int num1;
 scanf("%d",&num1);
 int num2=num1;
 num1=num1*num1;
 int reverse=0;
 while(num2>0){
      int rem=num2%10;//123 123
     reverse=reverse*10+rem;
     num2=num2/10;
 }
 //12 21
 reverse=reverse*reverse;//144
 int reverse2=0;
 while(reverse>0){
     int rem=reverse%10;
     reverse2=reverse2*10+rem;
     reverse=reverse/10;
 }
 if(num1==reverse2){
     printf("Adam number");
 }
 else{
 printf("Not adam number");
 
 }
 }
