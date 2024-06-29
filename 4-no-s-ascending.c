#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#include<stdio.h>
int main()
{
    // display the descending order
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int first,sec,third,last;
    first= max(max(a,b),max(c,d));
    last = min(min(a,b),min(c,d));
    sec= min(max(a,b),max(c,d));
    third= max(min(a,b),min(c,d));
    if(sec<third)
     printf("%d<%d<%d<%d",last,sec,third,first);
    else
     printf("%d<%d<%d<%d",last,third,sec,first);
    return 0;
    
}

