#include <stdio.h>

void accept();
void display();
void bubble_sort();
void binarysearch();

int a[20], n;

int main()
{
    accept();
    bubble_sort();
    display();
    binarysearch();
    return 0;
}

void accept()
{
    int i;
    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void bubble_sort()
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void display()
{
    int i;

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void binarysearch()
{
    int x, start, end, mid;

    printf("\nEnter the element to search: ");
    scanf("%d", &x);

    start = 0;
    end = n - 1;

    while(start <= end)
    {
        mid = (start + end) / 2;

        if(a[mid] == x)
        {
            printf("Element found at position %d", mid + 1);
            return;
        }
        else if(x > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    printf("Element not found.");
}