#include <stdio.h>

void findSubarrayWithSum(int arr[], int N, int S) {
    int start = 0, sum = 0;
    int end;
    for (end = 0; end < N; end++) {
        sum += arr[end];

        while (sum > S) {
            sum -= arr[start];
            start++;
        }

        if (sum == S) {
            printf("%d %d\n", start + 1, end + 1);
            return;
        }
    }

    printf("-1\n");
}

int main() {
    int N, S;
    scanf("%d %d", &N, &S);

    int arr[N];
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    findSubarrayWithSum(arr, N, S);
    return 0;
}

