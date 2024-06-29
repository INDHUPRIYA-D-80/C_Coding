#include <stdio.h>

int main()
{
    // to diplay 4 digit no whose digit are 2 graeter than the enter no
    int a,b,c,d,e;
    scanf("%d",&a);
    b=(a/1000+2)%10;
    a=a%1000;
    c=(a/100+2)%10;
    a=a%100;
    d=(a/10+2)%10;
    e=(a%10+2)%10;
    int res =(((((b*10)+c)*10)+d)*10)+e;
    printf("%d",res);

    return 0;
}
