#include <stdio.h>

int romanToInt(char *s) {
    int total = 0;  // This will store the final integer value
    int i;
    // Loop through each character in the Roman numeral string
    for ( i = 0; s[i] != '\0'; i++) {
        // Add or subtract based on Roman numeral rules
        if (s[i] == 'I') total += 1;
        if (s[i] == 'V') total += 5;
        if (s[i] == 'X') total += 10;
        if (s[i] == 'L') total += 50;
        if (s[i] == 'C') total += 100;
        if (s[i] == 'D') total += 500;
        if (s[i] == 'M') total += 1000;

        // If a smaller numeral precedes a larger one, subtract it twice
        if (i > 0) {
            if ((s[i] == 'V' || s[i] == 'X') && s[i-1] == 'I') total -= 2;
            if ((s[i] == 'L' || s[i] == 'C') && s[i-1] == 'X') total -= 20;
            if ((s[i] == 'D' || s[i] == 'M') && s[i-1] == 'C') total -= 200;
        }
    }

    return total;
}

int main() {
    char roman[20];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    int result = romanToInt(roman);
    printf("The integer value is: %d\n", result);

    return 0;
}

