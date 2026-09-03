#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *top;

void init();
void push();
void pop();
int isempty();
void display();
void peek();

int main()
{
    int ch;

    init();

    while(1)
    {
        printf("\nMenu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");

        printf("Enter your choice..\n");
        scanf("%d", &ch);

        switch(ch)
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
                peek();
                break;

            case 5:
                exit(0);

            default:
                printf("\nInvalid choice");
        }
    }

    return 0;
}

void init()
{
    top = NULL;
}

// To insert element in stack
void push()
{
    int ele;
    struct node *newnode;

    newnode = malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("\nMemory allocation failed");
        return;
    }

    printf("\nEnter data: ");
    scanf("%d", &ele);

    newnode->data = ele;
    newnode->next = NULL;

    if(top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }

    printf("\nElement added successfully");
}

// To delete element from stack
void pop()
{
    struct node *temp;

    if(isempty() == 1)
    {
        printf("\nStack is empty");
    }
    else
    {
        temp = top;
        top = top->next;
        temp->next = NULL;

        printf("\nPopped element is %d", temp->data);
        free(temp);
    }
}

int isempty()
{
    if(top == NULL)
        return 1;
    else
        return 0;
}

void display()
{
    struct node *temp;

    if(isempty() == 1)
    {
        printf("\nStack is empty, can't display");
    }
    else
    {
        printf("\nStack elements are:");
        temp = top;

        while(temp != NULL)
        {
            printf("\n|%d|", temp->data);
            temp = temp->next;
        }
    }
}

// To find topmost value of stack
void peek()
{
    if(isempty() == 1)
    {
        printf("\nStack is empty, peek not possible");
    }
    else
    {
        printf("\nPeek data is %d", top->data);
    }
}