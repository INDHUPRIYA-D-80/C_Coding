#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m = 2 * n;
    int i,j;
    // Upper half
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            if (j < n - i || j >= n + i) {
                if (j == m - 1) {
                    printf("*");
                } else {
                    printf("* ");
                }
            } else {
                printf("  ");
            }
            if (j == n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half
    for (i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            if (j <= i || j >= m - i - 1) {
                if (j == m - 1) {
                    printf("*");
                } else {
                    printf("* ");
                }
            } else {
                printf("  ");
            }
            if (j == n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

