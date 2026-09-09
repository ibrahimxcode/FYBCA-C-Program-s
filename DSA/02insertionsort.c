#include <stdio.h>

void display();
void accept();
void insertionsort();

int a[20], n;

int main()
{
    accept();

    printf("\nUnsorted array is:\n");
    display();

    insertionsort();

    printf("\nSorted array is:\n");
    display();

    return 0;
}

void accept()
{
    int i;

    printf("Enter array limit: ");
    scanf("%d", &n);

    if(n > 20)
    {
        printf("Maximum size is 20.\n");
        return;
    }

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display()
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionsort()
{
    int i, prev, curr;

    for(i = 1; i < n; i++) // we show i our unsorted arrays first element as i = 1;
    {
        curr = a[i];
        prev = i - 1;

        while(prev >= 0 && a[prev] > curr)
        {
            a[prev + 1] = a[prev]; // asing prev value to next element
            prev--;// backword loop
        }

        a[prev + 1] = curr;//placing the current element at in it position
    }
}