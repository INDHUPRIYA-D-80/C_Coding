// C program to check if two numbers are equal
#include <stdio.h>

int main() {
    // 2 character equal or not
    char a,b;
    printf("Enter two character: ");
    scanf("%c %c",&a, &b);
    if (a==b) {
        printf("Both character are equal.");
    } else {
        printf("characters are not equal");
    }
    return 0;
}
