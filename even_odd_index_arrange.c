#include <stdio.h>

// Function to sort an array in descending order
void sortDescending(int arr[], int size) {
	int i,j;
    for ( i = 0; i < size - 1; i++) {
        for ( j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int input[] = {45, 67, 89, 90, 23, 45, 98};
    int size = sizeof(input) / sizeof(input[0]);

    int evenIndex[10], oddIndex[10];
    int evenCount = 0, oddCount = 0;
    int i;
    // Separate the array into even and odd index arrays
    for (i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenIndex[evenCount++] = input[i];
        } else {
            oddIndex[oddCount++] = input[i];
        }
    }

    // Sort both arrays in descending order
    sortDescending(evenIndex, evenCount);
    sortDescending(oddIndex, oddCount);

    // Merge the sorted arrays back into the input array
    int evenIdx = 0, oddIdx = 0;
    for ( i = 0; i < size; i++) {
        if (i % 2 == 0) {
            input[i] = evenIndex[evenIdx++];
        } else {
            input[i] = oddIndex[oddIdx++];
        }
    }

    // Print the final merged array
    printf("Output: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");

    return 0;
}

