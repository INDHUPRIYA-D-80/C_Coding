#include <stdio.h>

int main()
{
    int num,a,b,c,e;
    scanf("%d",&num);
    a=num%10;
    num/=10;
    b=num%10;
    num/=10;
    c=num%10;
    e=a+b+c;
    printf("%d",e);

    return 0;
}

