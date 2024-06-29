#include<stdio.h>
int main()
{
    //print red if 1 blue if 2 green if 3 white if 4 pink if 5 invalid for other
    int a;
    scanf("%d",&a);
    if (a==1)
     printf("Red");
    else if (a==2)
     printf("Blue");
    else if (a==3)
     printf("Green");
    else if (a==4)
     printf("white");
    else if (a==5)
     printf("Pink");
    else
    printf("Invalid");
    
}
