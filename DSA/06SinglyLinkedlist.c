#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *temp,*next,*head=NULL;

struct node *create(struct node *);
void display(struct node *);
struct node *insert_first(struct node *);
void insert_last(struct node *);
struct node *insert(struct node *);
struct node *del_first(struct node *);
struct node *del_last(struct node *);
struct node *delete(struct node *);
int search(struct node *,int);
struct node *rev(struct node *);

int main()
{
    int ch,sno;

    do
    {
        printf("\nMenu\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.insert first\n");
        printf("4.insert last\n");
        printf("5.insert at any position\n");
        printf("6.delete first\n");
        printf("7.delete last\n");
        printf("8.delete at any position\n");
        printf("9.search element\n");
        printf("10.reversed linked list\n");
        printf("11.exit\n");

        printf("enter your choice\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                head=create(head);
                break;

            case 2:
                printf("linked list is\n");
                display(head);
                break;

            case 3:
                head=insert_first(head);
                break;

            case 4:
                insert_last(head);
                break;

            case 5:
                head=insert(head);
                break;

            case 6:
                head=del_first(head);
                break;

            case 7:
                head=del_last(head);
                break;

            case 8:
                head=delete(head);
                break;

            case 9:
                printf("enter element to search\n");
                scanf("%d",&sno);

                if(search(head,sno)==1)
                    printf("search successful");
                else
                    printf("search fail");

                break;

            case 10:
                head=rev(head);
                break;

            case 11:
                break;

            default:
                printf("Invalid choice\n");
        }

    }while(ch!=11);

    return 0;
}

struct node *create(struct node *h)
{
    temp=(struct node *)malloc(sizeof(struct node));

    temp->link=NULL;

    printf("\n enter data");
    scanf("%d",&temp->data);

    if(h==NULL)
    {
        h=temp;
    }
    else
    {
        next=h;

        while(next->link!=NULL)
        {
            next=next->link;
        }

        next->link=temp;
    }

    return(h);
}

void display(struct node *h)
{
    next=h;

    while(next!=NULL)
    {
        printf("\t%d",next->data);
        next=next->link;
    }
}

struct node *insert_first(struct node *h)
{
    temp=(struct node *)malloc(sizeof(struct node));

    printf("enter data\n");
    scanf("%d",&temp->data);

    temp->link=NULL;
    temp->link=h;
    h=temp;

    return(h);
}

void insert_last(struct node *h)
{
    temp=(struct node *)malloc(sizeof(struct node));

    printf("enter data \n");
    scanf("%d",&temp->data);

    temp->link=NULL;

    if(h==NULL)
    {
        head=temp;
    }
    else
    {
        next=h;

        while(next->link!=NULL)
        {
            next=next->link;
        }

        next->link=temp;
    }
}

struct node *insert(struct node *h)
{
    int p;
    struct node *prev;

    printf("enter location \n");
    scanf("%d",&p);

    temp=(struct node *)malloc(sizeof(struct node));

    printf("enter element\n");
    scanf("%d",&temp->data);

    temp->link=NULL;

    if(p==1)
    {
        temp->link=h;
        h=temp;
    }
    else
    {
        next=h;

        while(p>1 && next!=NULL)
        {
            prev=next;
            next=next->link;
            p--;
        }

        if(next==NULL && p>1)
        {
            printf("Invalid position\n");
            free(temp);
            return(h);
        }

        prev->link=temp;
        temp->link=next;
    }

    return(h);
}

struct node *del_first(struct node *h)
{
    if(h==NULL)
    {
        printf("Linked list is empty\n");
        return(h);
    }

    next=h;
    h=h->link;

    next->link=NULL;
    free(next);

    return(h);
}

struct node *del_last(struct node *h)
{
    struct node *prev;

    if(h==NULL)
    {
        printf("Linked list is empty\n");
        return(h);
    }

    if(h->link==NULL)
    {
        free(h);
        return(NULL);
    }

    next=h;

    while(next->link!=NULL)
    {
        prev=next;
        next=next->link;
    }

    prev->link=NULL;
    free(next);

    return(h);
}

struct node *delete(struct node *h)
{
    int p;
    struct node *prev;

    printf("enter location\n");
    scanf("%d",&p);

    if(h==NULL)
    {
        printf("Linked list is empty\n");
        return(h);
    }

    if(p==1)
    {
        next=h;
        h=h->link;
        free(next);
    }
    else
    {
        next=h;

        while(p>1 && next!=NULL)
        {
            prev=next;
            next=next->link;
            p--;
        }

        if(next==NULL)
        {
            printf("Invalid position\n");
            return(h);
        }

        prev->link=next->link;
        free(next);
    }

    return(h);
}

int search(struct node *h,int sno)
{
    next=h;

    while(next!=NULL)
    {
        if(next->data==sno)
            return(1);

        next=next->link;
    }

    return(-1);
}

struct node *rev(struct node *h)
{
    struct node *prev,*next,*cur=h;

    prev=next=NULL;

    while(cur!=NULL)
    {
        next=cur->link;
        cur->link=prev;
        prev=cur;
        cur=next;
    }

    return(prev);
}