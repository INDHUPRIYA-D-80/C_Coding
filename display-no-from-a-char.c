//function takes that accepts a chRACTER AS A PARAMETER AND CHECKS WHETHER IT AS an alphabet or not.
#include<stdio.h>
int compare(int *c);
int main ()
{
  char c;
  scanf("%c",&c);
 int x = (int)c;
int *ptr =&x;
 if (compare(ptr))
  printf("Yes");
 else 
  printf("No");
}
int compare (int *ptr)
{
    if(*ptr>=97 && *ptr<=122|| *ptr>=65 && *ptr<=90)
     return 1;
}
