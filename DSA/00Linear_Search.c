#include <stdio.h>

void accept();
void display();
void linearsearching();
int a[100], n, x, i;

void main() {
    accept();
    display();
    linearsearching();
}

void accept()
{
    printf("Enter how many elements you want to insert:-");
    scanf(" %d", &n);
    for(i=0;i<n;i++)
        {
            printf("\nEnter Element %d :-", i+1);
            scanf(" %d", &a[i]);
        }
}
void display()
{
    printf("\nEntterd Elements Are:-");
    for(i=0;i<n;i++)
        {
            printf("\t %d",a[i]);
        }
}
void linearsearching()
{
    printf("\nEnter which number do you want to search :-");
    scanf(" %d", &x);
    for(i=0;i<n;i++)
        if(x==a[i])
        {
            printf("\nElement %d Found At Position %d", x, i+1);
            break;
        }
    if(i==n)
    {
        printf("\nEntered Element %d Not Present In Array", x);
    }
}
