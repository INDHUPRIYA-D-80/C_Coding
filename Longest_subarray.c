#include <stdio.h>

void findLongestBitonicSubarray(int arr[], int n) {
	int i;
    if (n == 0) {
        printf("0\n");
        return;
    }

    int maxLength = 0;
    int startIdx = 0;

    for (i = 0; i < n; i++) {
        int length = 1;

        // Find the length of increasing part
        int j = i;
        while (j + 1 < n && arr[j + 1] > arr[j]) {
            length++;
            j++;
        }

        // Find the length of decreasing part
        while (j + 1 < n && arr[j + 1] < arr[j]) {
            length++;
            j++;
        }

        // Update maxLength and startIdx if this subarray is longer
        if (length > maxLength) {
            maxLength = length;
            startIdx = i;
        }
    }

    // Print the length of the longest bitonic subarray
    printf("%d\n", maxLength);

    // Print the longest bitonic subarray
    int endIdx = startIdx;
    int length = 1;

    // Find the end index of the bitonic subarray
    while (endIdx + 1 < n && arr[endIdx + 1] > arr[endIdx]) {
        length++;
        endIdx++;
    }
    while (endIdx + 1 < n && arr[endIdx + 1] < arr[endIdx]) {
        length++;
        endIdx++;
    }

    for ( i = startIdx; i <= endIdx; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
	int i;
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLongestBitonicSubarray(arr, n);

    return 0;
}

