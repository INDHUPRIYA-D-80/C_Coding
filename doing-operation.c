#include <stdio.h>

int main()
{
   // getv4 digit no .add 8 . divide by 3. modulus is taken with 5.multiply by 5.display 
   int a;
   float  b;
   printf("enter a 4 digit no");
   scanf("%d",&a);
   b=((((a=8)/3)%5)*5);
   printf("%.6f",b);
   
    return 0;
}
