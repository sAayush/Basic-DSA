#include<stdio.h>
int stack[50], top, n, choice, x;
void push(void);
void pop(void);
void display(void);
int main()
{
    top = -1;
    printf("Enter the size of stack[max 50]");
    scanf("%d",&n);
    printf("Operations of stack using array");
    printf("\n ***************************\n");
    printf("\n\t 1. Push \t 2. Pop \t 3. Display \t 4. Exit\n");
    do
    {
        printf("Enter the choice of operation:\n ");
        scanf("%d", &choice);
        switch(choice)
        {
          case 1:
          {
              push();
              break;
          }
          case 2:
          {
              pop();
              break;
          }
          case 3:
          {
              display();
              break;
          }
          case 4:
          {
            printf("Exit");
              break;
          }
          default:
          printf("Enter the valid choice between 1-4\n");
        }
    }while (choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
        printf("Stack is overflow \n");
    else
        {
            printf("Enter the element to insert: ");
            scanf("%d", &x);
            top++;
            stack[top]=x;
        }
}
void pop()
{
    if(top==-1)
        printf("Stack is underflow");
    else
        {
            printf("The popped element of stack is %d\n", stack[top]);
            top--;
        }
}
void display()
{
    int i;
    if(top>=0)
    {
        printf("The element in the stack: ");
        for(i=top; i>=0; i--)
        {
            printf("%d Elements of stack:%d\n", i, stack[i]);
            
        }
    }
    else 
        printf("Stack is empty");
}









