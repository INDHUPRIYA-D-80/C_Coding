#include<stdio.h>

int main() {
    int n, m;
    int i,j;
    // Input size and elements of the first array
    printf("Enter the array size1:\n");
    scanf("%d", &n);
    int a1[n];
    printf("Enter the array1 elements:\n");
    for( i = 0; i < n; i++) {
        scanf("%d", &a1[i]);
    }
    printf("Enter the array size2:\n");
    // Input size and elements of the second array
    scanf("%d", &m);
    int b1[m];
	printf("Enter the array2 elements:\n");
    for( j = 0; j < m; j++) {
        scanf("%d", &b1[j]);
    }
    
   
    // Compare the elements of the arrays
    int count = 0;
    for( i = 0; i < n; i++) {
        if (a1[i] != b1[i]) {
            count++;
        }
    }
    
    // Output the result based on whether differences were found
    if (count > 0 || n!=m ) {
        printf("The given binary trees are not identical\n");
    } else {
        printf("The given binary trees are identical\n");
    }
    
    return 0;
}

