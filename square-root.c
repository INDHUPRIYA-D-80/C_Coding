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
   for (i=sqrt(n);i>=1;i--)
   {
       if (n%i == 0)
       {
           printf("%d ",n/i);
       }
   }

    return 0;
}
