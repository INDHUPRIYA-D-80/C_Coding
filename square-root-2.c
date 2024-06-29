#include <stdio.h>
#include<math.h>
int main()
{
   int i,n;
   scanf("%d",&n);
   for (i=1;i<=sqrt(n);i++)
   {
       if (n%i == 0)
       {
           printf("%d ",i);
       }
   }
   int x=sqrt(n);
   if(sqrt(n)*sqrt(n)==n)
   x=x-1;
   
   for (i=x;i>=1;i--)
   {
       if (n%i == 0)
       {
           printf("%d ",n/i);
       }
   }

    return 0;
}
