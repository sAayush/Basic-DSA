#include <stdio.h>
#include <stdlib.h>

struct node // declaration of a node
{
    int value;
    struct node *next;
};
struct node *head;
void push()
{
    int value;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
        printf("Not able to push the element");
    else
    {
        printf("\nEnter the value: ");
        scanf("%d", &value);
        if (head == NULL)
        {
            ptr->value = value; // initializing value to a node
            ptr->next = NULL;   // initiliazing the address to next node
            head = ptr;
        }
        else
        {
            ptr->value = value;
            ptr->next = head;
            head = ptr;
        }
        printf("\nItem pushed");
    }
}
void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
        printf("\nUnderflow");
    else
    {
        item = head->value;
        ptr = head;
        head = head->next;
        free(ptr); // manually deleting memory space
        printf("\nItem popped");
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
        printf("\nStack is empty\n");
    else
    {
        printf("\nPrinting stack elements\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->value);
            ptr = ptr->next;
        }
    }
}
void main()
{
    int value, choice, *ptr;
    while (1)
    {
        printf("\n\n**MENU**\n");
        printf("\n1.Push\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong Selection\n");
        }
    }
}