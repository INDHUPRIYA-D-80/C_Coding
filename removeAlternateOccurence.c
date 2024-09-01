#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to remove alternate occurrences of characters
void removeAlternateOccurrences(char* str) {
    int seen[256] = {0}; // Array to track occurrences of each character
    int len = strlen(str);
    int i;
    for ( i = 0; i < len; ++i) {
        char ch = tolower(str[i]); // Consider case-insensitive
        
        if (seen[ch] % 2 == 0) {
            printf("%c", str[i]); // Print the character if it's the first occurrence
        }
        
        seen[ch]++;
    }
    printf("\n");
}

int main() {
    char S1[] = "It is a long day dear.";
    removeAlternateOccurrences(S1);

    char S2[] = "I am Neo";
    removeAlternateOccurrences(S2);
    
    return 0;
}

