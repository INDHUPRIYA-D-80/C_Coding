#include <stdio.h>
#define capacity 5

int arr[capacity];
int front = -1;
int rear = -1;

int isFull() {
    if ((rear + 1) % capacity == front) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty() {
    if (front == -1) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(int data) {
    if (isFull()) {
        printf("Overflow!..Queue full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = data;
    }
}

int dequeue() {
    if (isEmpty()) {
        printf("Underflow!..Queue is Empty\n");
        return -1;
    } else {
        int data = arr[front];
        if (front == rear) {
            front = rear = -1; // Queue is now empty
        } else {
            front = (front + 1) % capacity;
        }
        return data;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Underflow!..Queue is Empty\n");
        return -1;
    } else {
        return arr[front];
    }
}

void printQueue() {
    if (isEmpty()) {
        printf("Underflow!..Queue is Empty\n");
    } else {
        int i = front;
        while (1) {
            printf("%d ", arr[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % capacity;
        }
        printf("\n");
    }
}

int main() {
    int data, choice, peeked, dequeued;
    do {
        printf("Queue Operations:\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.PrintElements\n5.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the data to be added: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeued = dequeue();
                if (dequeued != -1) {
                    printf("The Element dequeued is: %d\n", dequeued);
                }
                break;
            case 3:
                peeked = peek();
                if (peeked != -1) {
                    printf("The Element at the front is: %d\n", peeked);
                }
                break;
            case 4:
                printQueue();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid Choice!\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

