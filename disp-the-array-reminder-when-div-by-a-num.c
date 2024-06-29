#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a%3)==0 && (a%5)==0)
        printf("%d is divisible by 3 and 5",a);
    else 
    printf("%d is not divisible by 3 and 5",a);
}
