#include <stdio.h>

int main()
{
    //calc sum of 1st and 2nd last digit of 5 digit no
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/10000;
    c=a/10;
    d=c%10;
    e=b+d;
    printf("%d",e);

    return 0;
}
