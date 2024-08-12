#include <stdio.h>
#include <math.h> // For sqrt function

// Function to check if a number is a perfect square
int isPerfectSquare(int n) {
    int sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

int main() {
    int arr[] = {1, 3, 4, 9, 16, 17, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int count = 0;
    int i=0;

    // Traverse the array and count perfect squares
    for (i = 0; i < n; i++) {
        if (isPerfectSquare(arr[i])) {
            count++;
        }
    }

    // Print the number of perfect squares
    printf("Number of square numbers = %d\n", count);

    return 0;
}

