/*#include<stdio.h>
void push();
void pop();
int size = 5;
int stack[size],TOP = -1;
int main(){
    push();
    pop();
}
void push(){
    if(TOP == size-1){
    printf("stack is full");
    }
    else{
        TOP= TOP+1;
        printf("enter number: ");
        scanf("%d",&stack[TOP]);
        
    }
}
void pop(){
    if(TOP>-1){
        printf("pop=%d",stack[TOP]);
        TOP =TOP-1;
    }
    else{
        printf("stack is empty: ");
    }
}
    */

        /*Write a C program to implement a Stack using an array. Implement the following operations
        
         Push an element into the stack.
         Pop an element from the stack.
         Display "Stack is full" if an overflow occurs.
         Display "Stack is empty" if an underflow occurs
        */
#include <stdio.h>
#define SIZE 2

void push();
void pop();
int stack[SIZE];
int TOP = -1;

int main() {
    push();
    push();
    push();
    pop();
    pop();
    pop();   
    return 0;
}

void push() {
    if (TOP == SIZE - 1) {
        printf("Stack is full\n");
    } else {
        TOP = TOP +1;
        printf("Enter number: ");
        scanf("%d", &stack[TOP]);
    }
}

void pop() {
    if (TOP > -1) {
        printf("Popped = %d\n", stack[TOP]);
        TOP = TOP -1;
    } else {
        printf("Stack is empty\n");
    }
}