#include<stdio.h>
#include<string.h>

int main()
{
   char name[20]="abcd e f g h";
   //printf("%10.3s",name);
   char *dup = strdup(name);
   //printf("%s",dup);
   char *token =strtok(name," ");
   while(token != NULL)
   {
   	printf("%s\n",token);
   	token = strtok(NULL," ");
	   }	
}
