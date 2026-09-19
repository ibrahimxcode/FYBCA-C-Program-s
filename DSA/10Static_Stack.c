#include <stdlib.h>
#include <stdio.h>

#define max 5

int stack[max], top;

void init();
void push();
void pop();
int isEmpty();
int isFull();
void display();
void peek();

int main()
{
    int ch;

    init();

    while(1)
    {
        printf("\n\nMenu:");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Peek");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
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
}

void init()
{
    top = -1;
}

// To insert element in stack
void push()
{
    if(isFull() == 1)
    {
        printf("\nPush operation is not possible because stack is full");
    }
    else
    {
        int ele;

        printf("\nEnter element: ");
        scanf("%d", &ele);

        top++;
        stack[top] = ele;

        printf("\nElement added successfully");
    }
}

// To delete element from stack
void pop()
{
    if(isEmpty() == 1)
    {
        printf("\nStack is empty, pop not possible");
    }
    else
    {
        printf("\nPopped element is %d", stack[top]);
        top--;
    }
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(top == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display()
{
    if(isEmpty() == 1)
    {
        printf("\nCannot display because stack is empty");
    }
    else
    {
        int i;

        printf("\nStack elements are:");

        for(i = top; i >= 0; i--)
        {
            printf("\n| %d |", stack[i]);
        }
    }
}

// To find top most value of stack
void peek()
{
    if(isEmpty() == 1)
    {
        printf("\nStack is empty, peek not possible");
    }
    else
    {
        printf("\nTop element is %d", stack[top]);
    }
}
