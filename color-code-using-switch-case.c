#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Red");
        break;
        case 2:
        printf("Blue");
        break;
        case 3:
        printf("Green");
        break;
        case 4:
        printf("White");
        break;
        case 5:
        printf("Pink");
        break;
        default:
        printf("Invalid");
        
    }
}
