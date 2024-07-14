#include<stdio.h>
#define capacity 5
 
int arr[capacity];
int top=-1;

int isFull(){
	if(top==capacity-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(int data){
	if(isFull())
	{
		printf("Overflow!..Stack full\n");
	}
	else{
		arr[++top]=data;
	}
}
int pop(){
	if(isEmpty()){
		printf("Underflow!..Stack is Empty\n");
		return -1;
	}
	else{
		return arr[top--];
	}
}
int peek(){
		if(isEmpty()){
		printf("Underflow!..Stack is Empty\n");
		return -1;
	}
	else{
		return arr[top];
	}
}
void printStack(){
	int i=0;
	if(isEmpty()){
		printf("Underflow!..Stack is Empty\n");
	}
	else{
		for(i=0;i<top;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}

int main(){
	int data,choice,peek,popped;
	do{
		printf("Stack Operations:\n1.PUSH\n2.POP\n3.PEEK\n4.PrintElements\nEnter Your Choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the data to be addded :\n");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				popped = pop();
				if(popped!=-1){
					printf("The Element popped is:%d\n",popped);
				}
				break;
			case 3:
				peek = pop();
				if(peek!=-1){
					printf("The Element popped is:%d\n",popped);
				}
				break;	
			case 4:
				printStack();
				break;
			}
		}while(choice<5);
		
		return 0;
}

