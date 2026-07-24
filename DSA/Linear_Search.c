#include<stdio.h>
void accept();
void display();
void linearsearch();
int a[20],n;

void main()
{
    accept();
    display();
    linearsearch();
}

void accept()
{
    int i;
    printf("\nenter a limit");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    int i;
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}

void linearsearch()
{
    int x,i;
    printf("\n enter the element which you want to search");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("%d found at position %d",x,i+1);
            break;
        }
    }
    if(i==n)
        printf("\n%d not found in aray",x);
}