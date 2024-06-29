#include<stdio.h>
//write a pgm declare a pointer to another pointer and print its value
int main()
{
    int a=10;
    int *ptr,**ptr2;
    ptr=&a;
    ptr2=&ptr;
    printf("%d",**ptr2);
}
