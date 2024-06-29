/*display if there exist an more occurence of a single subset
(if 123 as input then process as[(1,1)(1,2)(1,3)(2,1)(2,3)(2,2)(3,1)(3,2)(3,3)]-> no repetition then yes as output
(if input is 112 then process as[(1,1)(1,1)(1,2)(1,1)(1,1)(1,2)(2,1)(2,1)(2,2)]->repetition occurs print as no*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num1,maincount=0;
    scanf("%d",&num1); //getting input as pack of digits(1234..)
    int num2=num1,num3=num1;
    int temp=num1,count=0;
    for( ;temp>0;temp/=10,count++);
       // printf("%d",count);// counting the no of digits
        int c1=count,c2=count;
        for(int i=0;i<count;i++,maincount=0)
        {
            int first=num1/(int)pow(10,c1-1); //separating the frst digit(getting 1 alone)
            num2=num3;
            c2=count;
            for(int j=0;j<count;j++)
            {
                int second=num2/(int)pow(10,c2-1);//separating the second digit(getting 2 alone)
                //printf("%d %d\n",first,second);
                if(first==second) maincount++;
                num2=num2%(int)pow(10,c2-1);//num2%=(int)pow(10,c2-1);
                c2--;
            }
            num1%=(int)pow(10,c1-1);
            c1--;
            if(maincount>1)
            {
              printf("NO");
              break;
            }
            else if(i==count-1)
            printf("YES");
        }
}

