#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a word is in the dictionary
bool wordInDict(char *word, char dict[][100], int dictSize) {
	int i;
    for ( i = 0; i < dictSize; i++) {
        if (strcmp(word, dict[i]) == 0) {
            return true;
        }
    }
    return false;
}

// Function to determine if the string can be segmented
bool wordBreak(char *s, char dict[][100], int dictSize) {
    int n = strlen(s);
    bool dp[n + 1];
    memset(dp, false, sizeof(dp));
    dp[0] = true;
    int i,j;
    for ( i = 1; i <= n; i++) {
        for ( j = 0; j < i; j++) {
            if (dp[j] && wordInDict(s + j, dict, dictSize)) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main() {
    char s[] = "applepenapple";
    char dict[2][100] = {"apple", "pen"};
    int dictSize = 2;

    if (wordBreak(s, dict, dictSize)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}

