#include <stdlib.h>
#include <stdio.h>

#define max 5

void insert_queue();
void del_queue();
void display();
int isFull();
int isempty();

int queue[max];
int Rear, Front;

void init()
{
    Rear = -1;
    Front = -1;
}

int main()
{
    int ch;

    init();

    while(1)
    {
        printf("\n1. Insert into queue");
        printf("\n2. Delete from queue");
        printf("\n3. Display the queue");
        printf("\n4. Exit");

        printf("\nEnter your choice of operations: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                insert_queue();
                break;

            case 2:
                del_queue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nIncorrect choice");
        }
    }
}

int isFull()
{
    if(Rear == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insert_queue()
{
    int ele;

    if(isFull() == 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        if(Front == -1)
        {
            Front = 0;
        }

        printf("\nElement to be inserted in the Queue: ");
        scanf("%d", &ele);

        Rear = Rear + 1;
        queue[Rear] = ele;

        printf("\nElement added successfully");
    }
}

int isempty()
{
    if(Front == -1 || Front > Rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void del_queue()
{
    if(isempty() == 1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nElement deleted from the Queue: %d", queue[Front]);
        Front = Front + 1;
    }
}

void display()
{
    if(isempty() == 1)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        printf("\nQueue:\n");

        for(int i = Front; i <= Rear; i++)
        {
            printf("\t|%d|", queue[i]);
        }

        printf("\n");
    }
}