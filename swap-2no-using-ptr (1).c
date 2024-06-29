//write a pgm define 2 function to swap two elementsusing pointers (call by reference)
#include<stdio.h>
void swap(int *x,int*y);
int main()
{
    int a=10,b=20;
    printf("BEFORE:\n%d %d ",a,b);
    swap(&a,&b);
    printf("\nAFTER:\n%d %d",a,b);
}
    void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }
