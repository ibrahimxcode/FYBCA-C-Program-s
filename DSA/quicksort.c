#include <stdio.h>

void display();
void accept();
void quicksort(int l, int h);
int partition(int l, int h);

int a[20], n;

void main()
{
    accept();

    printf("\nUnsorted array is:\n");
    display();

    quicksort(0, n - 1);

    printf("\nSorted array is:\n");
    display();
}

void accept()
{
    int i;

    printf("Enter array limit: ");
    scanf("%d", &n);

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
}

void quicksort(int l, int h)
{
    int p;

    if(l < h)
    {
        p = partition(l, h);

        quicksort(l, p - 1);
        quicksort(p + 1, h);
    }
}

int partition(int l, int h)
{
    int pivot, i, j, temp;

    pivot = a[l];
    i = l + 1;
    j = h;

    while(i <= j)
    {
        while(i <= h && a[i] <= pivot)
        {
            i++;
        }

        while(a[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[l];
    a[l] = a[j];
    a[j] = temp;

    return j;
}
