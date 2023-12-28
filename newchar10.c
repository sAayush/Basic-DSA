#include <stdio.h>

#define MAX_SIZE 10

void printQueue(char queue[], int front, int rear)
{
    int i;
    printf("Queue: ");
    for (i = front; i <= rear; i++)
    {
        printf("%c ", queue[i]);
    }
    printf("\n");
}

int main()
{
    char queue[MAX_SIZE];
    int front = -1;
    int rear = -1;
    int choice;

    if (rear == MAX_SIZE - 1)
    {
        printf("Queue is full!\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = 'a';
        rear++;
        queue[rear] = 'b';
        rear++;
        queue[rear] = 'c';
        rear++;
        queue[rear] = 'd';
        printQueue(queue, front, rear);
    }
    if (front == -1 || front > rear)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        if (queue[rear] == 'd')
        {
            rear--;
            if (queue[rear] == 'c')
            {
                rear--;
            }
        }
        else if (queue[rear - 1] == 'd')
        {
            rear--;
        }
        printQueue(queue, front, rear);
    }
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue is full!\n");
    }
    else
    {
        rear++;
        queue[rear] = 'e';
        rear++;
        queue[rear] = 'f';
        rear++;
        queue[rear] = 'g';
        rear++;
        queue[rear] = 'h';
        printQueue(queue, front, rear);
    }
    if (front == -1 || front > rear)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        if (queue[rear] == 'h')
        {
            rear--;
            if (queue[rear] == 'g')
            {
                rear--;
            }
        }
        else if (queue[rear - 1] == 'h')
        {
            rear--;
        }
        printQueue(queue, front, rear);
    }
    return 0;
}
