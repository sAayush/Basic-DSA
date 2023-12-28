#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE

// function declarations
void insert(int);
void delete();
void display();

// global variables
int queue[MAXSIZE];
int front = -1, rear = -1;

int main()
{
    int choice, data;

    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}

// function to insert data into queue
void insert(int data)
{
    if (rear == MAXSIZE - 1)
        printf("Queue is full!\n");
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = data;
        printf("%d added to queue.\n", data);
    }
}

// function to delete data from queue
void delete()
{
    if (front == -1 || front > rear)
        printf("Queue is empty!\n");
    else
    {
        printf("%d deleted from queue.\n", queue[front]);
        front++;
    }
}

// function to display the queue
void display()
{
    if (front == -1 || front > rear)
        printf("Queue is empty!\n");
    else
    {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
