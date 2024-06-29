#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#include<stdio.h>
int main()
{
    // display the descending order
    int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);
    int first,sec,last;
    first= max(max(a,b),c);
    last = min(min(a,b),c);
    d=a+b+c;
    e=first+last;
    sec=d-e;
    printf("%d %d %d",first,sec,last);
}
