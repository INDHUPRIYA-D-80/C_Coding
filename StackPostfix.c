#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define capacity 5
 
int top = -1;
int stack[capacity];

int isFull(){
    return top == capacity - 1;
}

int isEmpty(){
    return top == -1;
}

void push(int data){
    if(isFull()){
        printf("Overflow!..Stack full\n");
    } else {
        stack[++top] = data;
    }
}

int pop(){
    if(isEmpty()){
        printf("Underflow!..Stack is Empty\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main(){
    int n;
    printf("Enter the number of characters or number of elements: ");
    scanf("%d", &n);
    char str[n+1];
    printf("Enter the postfix expression: ");
    int j;
    for(j = 0; j < n; j++){
        scanf(" %c", &str[j]);
    }

    int i, num1, num2;
    for(i = 0; i < n; i++){
        if(isdigit(str[i])){
            push(str[i] - '0');
        } else {
            num1 = pop();
            num2 = pop();
            switch(str[i]){
                case '+':
                    push(num2 + num1);
                    break;
                case '-':
                    push(num2 - num1);
                    break;
                case '*':
                    push(num2 * num1);
                    break;
                case '/':
                    push(num2 / num1);
                    break;
            }
        }
    }
    printf("Result: %d\n", pop());
    return 0;
}

