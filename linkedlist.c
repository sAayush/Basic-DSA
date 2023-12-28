#include <stdio.h>
#include <stdlib.h> // added to use malloc() and free()

struct linklist
{
    int info;
    struct linklist *next;
};

typedef struct linklist node;

void create(node *);
void display(node *);

int main()
{
    node *start = NULL;                   // initialize the start pointer to NULL
    start = (node *)malloc(sizeof(node)); // allocate memory for start
    if (start == NULL)                    // check if memory allocation was successful
    {
        printf("Memory allocation failed!");
        return 0;
    }
    create(start);
    
    printf("\n\n The input List is : \n\t");
    display(start->next); // display starting from the first node, not the start pointer itself
    free(start);          // free the memory allocated for start
    return 0;
}

void create(node *temp)
{
    printf("\n Enter info (to stop enter 0) : ");
    scanf("%d", &temp->info);
    if (temp->info == 0)
        temp->next = NULL;
    else
    {
        temp->next = (node *)malloc(sizeof(node)); // allocate memory for the next node
        if (temp->next == NULL)                    // check if memory allocation was successful
        {
            printf("Memory allocation failed!");
            exit(0);
        }
        create(temp->next);
    }
}

void display(node *temp)
{
    if (temp != NULL) // check if the current node is not NULL
    {
        printf(" => %d ", temp->info);
        display(temp->next);
    }
}
