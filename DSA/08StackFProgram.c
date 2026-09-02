#include<stdlib.h>
#include<stdio.h>
#define max 5

int stack[max],top;

void init();
void push();
void pop();
int isempty();
int isfull();
void display();
void peek();

void main()
{
    int ch,x;
    init();
    while(1)
    {
        printf("\n menu \n 1.push \n 2.pop \n 3.display \n 4.peek \n 5.exit \n");


printf("enter ur choice..\n");
scanf("%d",&ch);
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

}
}
}

void init()
{
    top=-1;

}
// to insert element in stack
void push()
{
    if(isfull()==1)
    {
        printf("push opration is not possible because stack is already full");

    }

    else
    {
        int ele;
        printf("\n enter element..");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
        printf("\nElement added successfully");

    }
}

//to delete element from stack
void pop()
{
    if(isempty()==1)
    {
        printf("\n stack empty pop is not possible");
    }
    else
    {
        printf("popped element is %d",stack[top]);

    }
}

int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if(top==max-1)
        return 1;
    else
        return 0;

}

void display()
{
    if(isempty()==1)
    {
        printf("\n cannot display because stack is empty");
    }
    else
    {
        int i;
        printf("\n stack element are");
        for(i=top;i>=0;i--)
        {
            printf("\n stack element are");
            printf("\n |%d|",stack[i]);
        }
    }
}

//to find top most value of stack
void peek()
{
    if (isempty()==1)
    {
        printf("\n stack is empty peek not possible");
    }
    else
    {
        printf("\n %d",stack[top]);
    }
}