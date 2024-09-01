#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find and display co-prime pairs
void findCoprimePairs(int N) {
    int count = 0;
    printf("The co-prime pairs are:\n");
    int a;
    for ( a = 1; a * a <= N; ++a) {
        if (N % a == 0) {
            int b = N / a;
            if (gcd(a, b) == 1) {
                printf("(%d, %d)\n", a, b);
                count++;
            }
        }
    }
    
    printf("Number of coprime pairs: %d\n", count);
}

int main() {
    int N1 = 120;
    findCoprimePairs(N1);

    int N2 = 250;
    findCoprimePairs(N2);
    
    return 0;
}

