//accepts a character and check whethr its a uppercase aren't
#include<stdio.h>
int checks(int *c);
int main ()
{
  char c;
  scanf("%c",&c);
 int x = (int)c;
int *ptr =&x;
 if (checks(ptr))
  printf("its upper");
 else 
  printf("no its lower");
}
int checks (int *ptr)
{
    if(isupper(*ptr))
    {
        return 1;
    }

}
