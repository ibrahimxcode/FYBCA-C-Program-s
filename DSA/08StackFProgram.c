#include <stdio.h>
#include <stdlib.h>

#define max 5

int stack[max], top;

void init();
void push();
void pop();
int isempty();
int isfull();
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
    top = -1;
}

// To insert element in stack
void push()
{
    if(isfull() == 1)
    {
        printf("Push operation is not possible because stack is already full");
    }
    else
    {
        int ele;

        printf("\nEnter element..");
        scanf("%d", &ele);

        top++;
        stack[top] = ele;

        printf("\nElement added successfully");
    }
}

// To delete element from stack
void pop()
{
    if(isempty() == 1)
    {
        printf("\nStack empty, pop is not possible");
    }
    else
    {
        printf("Popped element is %d", stack[top]);
        top--;
    }
}

int isempty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if(top == max - 1)
        return 1;
    else
        return 0;
}

void display()
{
    if(isempty() == 1)
    {
        printf("\nCannot display because stack is empty");
    }
    else
    {
        int i;

        printf("\nStack elements are:");

        for(i = top; i >= 0; i--)
        {
            printf("\n|%d|", stack[i]);
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
        printf("\nTop element is %d", stack[top]);
    }
}