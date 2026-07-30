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
    int i, j, temp;

    for(i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }
}