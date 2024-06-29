/*1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208,
9474, 54748, 92727, 93084, 548834, 1741725, 4210818, 9800817, 9926315,
24678050, 24678051, 88593477, 146511208, 472335975, 534494836, 912985153, and 4679307774.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,i;
    scanf("%d %d",&n1,&n2);
    for( i=n1;i<=n2;i++){
    int temp = i,count=0,res=0,check=i,n=i;
    for (;temp>0;temp=temp/10,count++);
    while(n>0){
        int rem=n%10;
        res=res+(int)pow(rem,count);
        n=n/10;
    }
    if(res==check)
    {
        printf("%d ",i);
    }
    }
    
}
