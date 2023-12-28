#include <stdio.h>
#define MAX 5 // Defining maximum capacity of stack

int stack[MAX], top = -1;

void push(int value) {
    if(top == MAX-1)
        printf("Stack is full. Push operation failed.\n");
    else {
        stack[++top] = value;
        printf("Insertion success.\n");
    }
}

void pop() {
    if(top == -1)
        printf("Stack is empty. Pop operation failed.\n");
    else {
        printf("Popped element : %d\n", stack[top--]);
    }
}

void display() {
    if(top == -1)
        printf("Stack is empty.\n");
    else {
        int i;
        printf("Stack elements : ");
        for(i=0; i<=top; i++)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int choice, value;
    while(1) {
        printf("1. Push\n2. Pop\n3. Display\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: printf("Enter the value to be insert: ");
                    scanf("%d", &value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 0: return 0;
            default: printf("Wrong selection!!! Try again!!!\n");
        }
    }
}