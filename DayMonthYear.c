// You are using GCC
#include<stdio.h>
int main(){
    int n,m,yr;
    scanf("%d%d%d",&n,&m,&yr);
    if (n>= 1 && n<=7 && m>=1 && m<=12){
        switch(n){
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
        }
        if(m ==1 || m==3 || m==5||m==7||m==8||m==10||m==12){
            printf("31 Days\n");
        }
        else if(m==2){
            if(yr %4==0){
                printf("29 Days\n");
            }
            else{
                printf("28 Days\n");
            }
        }
        else{
            printf("30 Days\n");
        }
        
        if((yr%4==0 && yr % 100 !=0)|| yr%400==0){
            printf("%d is a leap year\n",yr);
        }
        else{
            printf("%d is not a leap year\n",yr);
        }
    }
    else{
        printf("Invalid Input");
    }
}
