#include <stdio.h>

int main()
{//3 marks out 100 gn write tot mark& percentage
   
   float m1,m2,m3,tot;
   float percent;
   printf("Enter three Subject Marks");
   scanf("%f %f %f",&m1,&m2,&m3);
   tot=(m1+m2+m3);
   percent=tot/3;
   printf("total =%.2f\n Percentage = %.2f",tot,percent);

    return 0;
}
