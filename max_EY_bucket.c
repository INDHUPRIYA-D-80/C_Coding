#include <stdio.h>

int bucketID(int itemID) {
    int maxDigit = 0; // Initialize maxDigit to 0
    int currentDigit;

    // Extract digits and find the maximum digit
    while (itemID > 0) {
        currentDigit = itemID % 10; // Extract the last digit
        if (currentDigit > maxDigit) {
            maxDigit = currentDigit; // Update maxDigit if currentDigit is larger
        }
        itemID = itemID / 10; // Remove the last digit
    }

    return maxDigit; // Return the maximum digit found
}

int main() {
    int itemID;
    printf("Enter the item ID: ");
    scanf("%d", &itemID);

    int bucket = bucketID(itemID);
    printf("The item belongs to bucket %d\n", bucket);

    return 0;
}

