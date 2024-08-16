#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 12

int main() {
    int arr[MAX_SIZE];
    int sum = 0;
    int num;
    int count = 0;

    // Reading input values
    while (scanf("%d", &num) == 1) {
        if (num < 0) {
            printf("Invalid input\n");
            return 1;
        }
        if (count >= MAX_SIZE) {
            printf("Invalid input\n");
            return 1;
        }
        arr[count++] = num;
    }

    if (count != MAX_SIZE) {
        printf("Invalid input\n");
        return 1;
    }

    // Initialize variables
    int temp = arr[0];
    int max = arr[0];
    int MIN = 0, HIGH = 0;
    int i;
    // Calculate total, average, and find min/max
    for (i = 1; i < MAX_SIZE; i++) {
        sum += arr[i];
        if (arr[i] < temp) {
            temp = arr[i];
            MIN = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            HIGH = i;
        }
    }

    int avg = sum / MAX_SIZE;

    // Output results
    printf("Total rainfall : %d\n", sum);
    printf("Average rainfall : %d\n", avg);
    printf("Lowest rainfall month : %d\n", MIN + 1);
    printf("Highest rainfall month : %d\n", HIGH + 1);

    return 0;
}

