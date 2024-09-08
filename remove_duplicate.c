#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char* removeDuplicateLetters(const char* s) {
    int n = strlen(s);
    int count[26] = {0};
    bool visited[26] = {false};
    char stack[101];
    int stackIndex = 0;
    // Count frequency of each character
    for (i = 0; i < n; i++) {
        count[s[i] - 'a']++;
    }

    for (i = 0; i < n; i++) {
        char c = s[i];
        count[c - 'a']--;

        if (visited[c - 'a']) {
            continue;
        }

        while (stackIndex > 0 && stack[stackIndex - 1] > c && count[stack[stackIndex - 1] - 'a'] > 0) {
            visited[stack[--stackIndex] - 'a'] = false;
        }

        stack[stackIndex++] = c;
        visited[c - 'a'] = true;
    }

    stack[stackIndex] = '\0';

    // Allocate memory for the result string and copy the stack contents
    char* result = (char*)malloc((stackIndex + 1) * sizeof(char));
    if (result != NULL) {
        strcpy(result, stack);
    }
    return result;
}

int main() {
    char s[101];

    // Input the string
    scanf("%100s", s);

    // Remove duplicate letters and get lexicographically smallest result
    char *result = removeDuplicateLetters(s);
    if (result != NULL) {
        printf("%s\n", result);
        free(result);  // Free the allocated memory
    }

    return 0;
}

