#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=1,c=0;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++)
       {
           if(c>n)
               break;
          printf("%d ",x);
          c++;
          x+=2;
        }
    
        x-=1;
    }
}
