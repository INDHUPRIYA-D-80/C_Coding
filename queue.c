#include<stdio.h>
#define MAX_SIZE 100
int queue [MAX_SIZE];
int front = -1,back =-1;
//FUNCTION TO INSERT AN ELEMENT INTO THE queue
void enqueue (int item){
    if (back ==MAX_SIZE-1){
        printf("Error:Queue is ful\n");
        return;
        }
        if(front == -1){
            front = 0;
        }
        back++;
        queue[back] = item;
}
//FUNCTION TO REMOVE AN ELEMENT FROM A queue
int dequeue(){
    if(front == 1||front>back){
        printf("Error:Queue is empty\n");
        return -1;
    }
    int item = queue[front];
    front++;
    return item;
}
    //FUNCTION TO DIPLAY THE ELEMENTS IN THE queue
    void display(){
        printf("Queue elements are:");
        for(int i=front;i<=back;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
    int main()
    {
        enqueue(1);
        enqueue(2);
        enqueue(3);
        enqueue(4);
        enqueue(5);
        display();
        dequeue();
        dequeue();
        display();
        enqueue(600);
        enqueue(427);
        enqueue(519);
        display();
        return 0;
    }
   
