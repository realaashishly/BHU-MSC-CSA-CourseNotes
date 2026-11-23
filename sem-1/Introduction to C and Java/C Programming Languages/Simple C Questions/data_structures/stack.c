#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value){
    if(top == SIZE - 1){
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;
}

void pop(){
    if(top == -1){
        printf("Stack underflow\n");
        return;
    }

    stack[top--];
}

void printStack(){

    if(top == -1){
        printf("Stack is empty");
        return;
    }

    printf("\n");

    for(int i = 0; i <= top; i++){
        printf(" %d ", stack[i]);
    }

    printf("\n");
}

int main(void){

    push(6);
    push(6);
    push(3);
    push(9);
    push(9);

    printStack();

    pop();
    printStack();

    return 0;
}