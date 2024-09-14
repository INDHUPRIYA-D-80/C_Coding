// Input 1 :
// Hello
// H*o
// Output 1 :
// Pattern matches the text.
// Input 2 :
// World
// Hell*
// Output 2 :
// Pattern does not match the text.



#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if the pattern matches the text
bool isMatch(const char *text, const char *pattern) {
    int tLen = strlen(text);
    int pLen = strlen(pattern);
    int i = 0, j = 0;

    while (i < tLen && j < pLen) {
        if (pattern[j] == '?') {
            // '?' matches any single character
            i++;
            j++;
        } 
        else if (pattern[j] == '*') {
            // '*' matches any sequence of characters
            if (j == pLen - 1) {
                return true; // '*' at the end matches the rest of the text
            }
            // Move to the next character in the pattern
            j++;
            // Find the next matching part of the pattern
            while (i < tLen && text[i] != pattern[j]) {
                i++;
            }
        } 
        else {
            if (text[i] != pattern[j]) {
                return false; // Mismatch
            }
            i++;
            j++;
        }
    }

    // Check if we finished matching both the text and pattern
    return (i == tLen && j == pLen);
}

int main() {
    char text[100], pattern[100];

    // Input text and pattern
    printf("Input 1 :\n");
    scanf("%s", text);
    printf("Input 2 :\n");
    scanf("%s", pattern);

    // Check if the pattern matches the text
    if (isMatch(text, pattern)) {
        printf("Output :\nPattern matches the text.\n");
    } else {
        printf("Output :\nPattern does not match the text.\n");
    }

    return 0;
}

