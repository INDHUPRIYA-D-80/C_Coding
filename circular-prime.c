/*1.SAMPLE INPUT
     113
SAMPLE OUTPUT
    yes
    EXPLANATION
    113
    311
    131
    all rotations are prime
*/
#include<stdio.h>
#include<math.h>
int isprime(int n);
int main(){
    int num,check;
    scanf("%d",&num);
    int temp=num,count=0,flag=0,res=0;
    for (;temp>10;temp/=10,count++); // counting the no of digits
    for (int i=0;i<count;i++){
        int rem=num%10;
        int quo=num/10;
        res=(rem*(int)pow(10,count))+quo;
        if(!(isprime(res))){            
            flag=1;
            break;
        }
         num=res;
    }
    if(flag==0)
        printf("Circular prime");
        if(flag==1)
            printf("Circular Prime");
}
int isprime(int n){
    if(n<=1)
        return 0;
    for(int i =2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

