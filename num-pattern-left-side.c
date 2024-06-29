#include <stdio.h>
int main() {
   int i, j,n;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i =1; i <=n; i++) {
       //int x=i;
      //for (j = 1; j <= (n-i)+1; ++j) {
         //printf("%d ", x);
         //x++;
         int x=i;
      for (j = i; j <= n; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}

