#include <stdio.h>
#include <stdlib.h>

// Function to find the last remaining contestant
int findHouseCaptain(int n) {
	int i;
    // Create an array to store the contestants
    int *contestants = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        contestants[i] = i + 1;
    }

    int size = n;
    int left_to_right = 1; // 1 for left-to-right, 0 for right-to-left

    while (size > 1) {
        int newSize;
        if (left_to_right) {
            // Remove every alternate number from left to right
            newSize = (size + 1) / 2;
            int *newContestants = (int *)malloc(newSize * sizeof(int));
            for (i = 0; i < newSize; i++) {
                newContestants[i] = contestants[2 * i + 1];
            }
            free(contestants);
            contestants = newContestants;
        } else {
            // Remove every alternate number from right to left
            newSize = size / 2;
            int *newContestants = (int *)malloc(newSize * sizeof(int));
            for (i = 0; i < newSize; i++) {
                newContestants[i] = contestants[size - 2 * i - 2];
            }
            free(contestants);
            contestants = newContestants;
        }

        size = newSize;
        left_to_right = !left_to_right; // Switch direction
    }

    int result = contestants[0];
    free(contestants);
    return result;
}

int main() {
    int n;
    printf("Enter the number of housemates: ");
    scanf("%d", &n);

    int result = findHouseCaptain(n);
    printf("The house captain is contestant number %d\n", result);

    return 0;
}

