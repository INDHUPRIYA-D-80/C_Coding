#include<stdio.h>
#include<math.h>
int main()
{
    int n,check;
    scanf("%d",&n);
    check = n;
    int temp = n,count=0,res=0;
     for (;temp>0;temp=temp/10,count++);
    while(n>0){
        int rem=n%10;
        res=res+(int)pow(rem,count);
        n=n/10;
        count--;
    }
    if(res==check)
    {
        printf("disarium");
    }
    else
    {
        printf("not a disarium");
    }
}
