#include <stdio.h>

void swap(int *a, int *b) {
	int i;
    int temp = *a;
    *a = *b;
    *b = temp;
}

void increment(int *n) {
    (*n)++;
}

void arrayManipulation(int *arr, int size) {
	int i;
    for ( i = 0; i < size; i++) {
        arr[i] *= 2; // Doubles each element in the array
    }
}

int main() {
    // Example 1: Pointer to a variable
    int i;
    int x = 10;
    int *ptr = &x;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Example 2: Swapping two numbers using pointers
    int a = 5, b = 10;
    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    // Example 3: Incrementing a number using a pointer
    int num = 7;
    printf("\nBefore increment: num = %d\n", num);
    increment(&num);
    printf("After increment: num = %d\n", num);

    // Example 4: Array manipulation using pointers
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\nArray before manipulation:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    arrayManipulation(arr, size);
    printf("\nArray after manipulation:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Example 5: Pointer to pointer (double pointer)
    int **ptr2 = &ptr;
    printf("\n\nValue of ptr2 (address of ptr): %p\n", ptr2);
    printf("Value pointed to by ptr2 (value of ptr): %p\n", *ptr2);
    printf("Value pointed to by *ptr2 (value of x): %d\n", **ptr2);

    return 0;
}

