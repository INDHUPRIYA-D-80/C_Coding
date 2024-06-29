#include <stdio.h>
int main()
{
   int a;
   //given the no finding tha no of years no of days and months
   scanf("%d",&a);
   int y,w,d;
   y=a/365;
   a%=365;
   w=a/7;
   a%=7;
   d=a;
   printf("Years : %d\nweeks:%d\nDays:%d",y,w,d);
    return 0;
}
