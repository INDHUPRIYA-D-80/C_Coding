//int maxValue(int *a,int *b) that takes two pointers as parametrs find the maximum between the two values and returns it using pointers#include<stdio.h>
#include<stdio.h>
int compare(int *a,int *b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *ptr1 = &a,*ptr2 = &b;
    int max =compare(ptr1,ptr2);
    printf("%d",max);
}
int compare(int *a,int *b)
{
    if(*a>*b)
     return *a;
    else
    return *b;

}
