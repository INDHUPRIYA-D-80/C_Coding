#include <stdio.h>

int main()
{
    //converting cm to inches and feet
    float a;
    float ainches,afeet;
    scanf("%f",&a);
    ainches=(a*0.393701);
    afeet=(a*0.0328084);
    printf("height in inches:%.2f \n height in feet:%.2f",ainches,afeet);
    return 0;
}

