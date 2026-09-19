#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front, *rear;

void init();
void display();
void insert_queue();
void delete_queue();

void init()
{
    front = NULL;
    rear = NULL;
}

int main()
{
    int ch;

    init();

    while(1)
    {
        printf("\n\nQueue Menu");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                insert_queue();
                break;

            case 2:
                delete_queue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice");
        }
    }
}

void insert_queue()
{
    int element;

    struct node *newnode;

    newnode = malloc(sizeof(struct node));

    printf("\nEnter number: ");
    scanf("%d", &element);

    newnode->data = element;
    newnode->next = NULL;

    if(rear == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = rear->next;
    }

    printf("\nElement inserted successfully");
}

void display()
{
    struct node *temp;

    temp = front;

    if(front == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue elements are:\n");

        while(temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}

void delete_queue()
{
    if(front == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        struct node *temp;

        temp = front;
        front = front->next;

        printf("\n%d deleted", temp->data);

        free(temp);

        if(front == NULL)
        {
            rear = NULL;
        }
    }
}