#include<stdio.h>
int main()
    {
        int n,p,a=1;
        scanf("%d %d",&n,&p);
        for (int i=1;i<p;i++)
        {
            a=a*n;
        }
        printf("%d",a);
        return 0;
    }
