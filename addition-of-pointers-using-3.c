//write a c function signature that takes prameters as 2 pointers and swap the valuesof the 2 variables using pointers
//write a function signature void add_two_numbers(int *a,int*b,int *c)tht takes 3 pointers asa an aruguement add the valu that
#include<stdio.h>
int add(int *ptr1,int *ptr2,int *ptr3);
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    int ptr1=&a,ptr2=&b,ptr3=&c;
    c=add(ptr1,ptr2,ptr3);
    printf("%d",c);
}
int add(int *ptr1,int *ptr2,int *ptr3)
{
    return *ptr1+*ptr2;
}
