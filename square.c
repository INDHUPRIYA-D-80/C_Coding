#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    float s=0.0;
    for (s=0.01;s*s<=num;s+=0.01);
    {
        printf("%d",(int)s);
    }
}
