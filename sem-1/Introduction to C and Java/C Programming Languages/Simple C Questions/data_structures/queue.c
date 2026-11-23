#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = 0;
int rear = -1;

void enqueue(int value){
    if(rear == SIZE - 1){

        return;
    }

    queue[++rear] = value;
}

void dequeue(){
    if(rear < front){
        printf("Queue underflow");
        return;
    }

    queue[front++];
}

void display(){
    if(rear < front){
        printf("No element is present in Queue");
        return;
    }

    printf("\n");

    for(int i = front; i <= rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){

    enqueue(4);
    enqueue(7);
    enqueue(22);

    display();
    
    dequeue();
    display();


    return 0;
}