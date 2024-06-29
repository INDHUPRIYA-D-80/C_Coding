//pgm to add using ptr
#include<stdio.h>
int main()
{
    int a=10,b=20,c=0,ptr1,ptr2;
    ptr1 = &a;
    ptr2 = &b;
    c=*ptr1+*ptr2;
    printf("%d",c);
}
