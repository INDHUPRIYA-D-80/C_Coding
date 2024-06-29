#include<stdio.h>
int main()
 {
  int a, b, line = 12;
  for (a = line/2;a <= line;a = a+2) 
{ 
      for (b = 1; b < line-a; b = b+2) 
         printf(" ");
      for (b = 1; b <= a; b++) 
         printf("*");
      for (b = 1; b <= line-a; b++) 
         printf(" ");
      for (b = 1; b <= a-1; b++) 
         printf("*");
      printf("\n");
   }
   for (a = line; a >= 0; a--) 
{ 
      for (b = a; b < line; b++)
         printf(" ");
      for (b = 1; b <= ((a * 2) - 1); b++) 
         printf("*");
      printf("\n");
   }
}
