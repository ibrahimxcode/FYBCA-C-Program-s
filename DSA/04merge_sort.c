#include <stdio.h>

void display();
void accept();
void mergesort(int l, int h);
void merge(int l, int mid, int h);

int a[20], n;

void main()
{
    accept();

    printf("\nUnsorted array is:\n");
    display();

    mergesort(0, n - 1);

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

void mergesort(int l, int h)
{
    int mid;

    if(l < h)
    {
        mid = (l + h) / 2;

        mergesort(l, mid);
        mergesort(mid + 1, h);

        merge(l, mid, h);
    }
}

void merge(int l, int mid, int h)
{
    int i, j, k;
    int temp[20];

    i = l;
    j = mid + 1;
    k = l;

    while(i <= mid && j <= h)
    {
        if(a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }

    while(j <= h)
    {
        temp[k] = a[j];
        k++;
        j++;
    }

    for(i = l; i <= h; i++)
    {
        a[i] = temp[i];
    }
}
