/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void ans(int arr[],int len){
   int sum=0;
   for(int i=0;i<len;i++){
       sum = sum+arr[i];
   }
   int a[100];
   a[0]=0;
   a[1]=1;
   int count=2;
   for(int i=2;sum > a[count-1];i++){
       a[i] = a[i-1] + a[i-2];
       count++;
   }
   int ans;
   if(sum == a[count-1]){
       ans=0;
   }
   if(sum<a[count]){
       ans = a[count]-sum;
   }
   if(sum>a[count]){
       ans = a[count-1] - sum;
   }
   printf("%d",ans);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ans(arr,n);

    return 0;
}