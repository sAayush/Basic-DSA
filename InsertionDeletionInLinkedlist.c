#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void displayList(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printf("%d is inserted at the beginning of the list.\n", data);
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    printf("%d is inserted at the end of the list.\n", data);
    return head;
}

struct Node *deleteAtBeginning(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty. Deletion is not possible.\n");
    }
    else
    {
        struct Node *ptr = head;
        head = head->next;
        free(ptr);
        printf("The first node is deleted from the list.\n");
    }
    return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty. Deletion is not possible.\n");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("The only node in the list is deleted.\n");
    }
    else
    {
        struct Node *ptr1 = head;
        struct Node *ptr2 = head;
        while (ptr1->next != NULL)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->next;
        }
        ptr2->next = NULL;
        free(ptr1);
        printf("The last node is deleted from the list.\n");
    }
    return head;
}

int main()
{
    struct Node *head = NULL;
    int choice, data;

    while (1)
    {
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete from the beginning\n");
        printf("4. Delete from the end\n");
        printf("5. Display the list\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            head = insertAtBeginning(head, data);
            break;
        case 2:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            head = insertAtEnd(head, data);
            break;
        case 3:
            head = deleteAtBeginning(head);
            break;
        case 4:
            head = deleteAtEnd(head);
            break;
        case 5:
            displayList(head);
            break;
        case 6:
            exit(0);
        }
    }
}