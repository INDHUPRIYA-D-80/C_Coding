#include <stdio.h>
#include <ctype.h>

int countErrors(char textInput[]) {
    int errorCount = 0;
    int i;
    // Iterate over each character in the input string
    for (i = 0; textInput[i] != '\0'; i++) {
        char ch = textInput[i];
        
        // Check if the character is valid (letter, digit, or whitespace)
        if (!isalnum(ch) && !isspace(ch)) {
            errorCount++; // Increment error count for invalid characters
        }
    }

    return errorCount;
}

int main() {
    char textInput[100];
    printf("Enter the text: ");
    fgets(textInput, 100, stdin); // Read the input string

    int errors = countErrors(textInput);
    printf("Number of errors: %d\n", errors);

    return 0;
}

