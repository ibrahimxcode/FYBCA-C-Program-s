#include <stdio.h>

void accept();
void display();
void bubblesort();
void binarysearching();
int a[100], n, x, i, j, temp;

void main() {
    accept();
    display();
    bubblesort();
    binarysearching();
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
    printf("\nYou're unsorted Array is :-");
    for(i=0;i<n;i++)
        {
            printf("\t %d",a[i]);
        }
}
void bubblesort()
{
    for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                    {
                       temp = a[j];
                       a[j] = a[j+1];
                       a[j+1] = temp;
                    }
            }
        }
}
void binarysearching()
{
    printf("\nHere is You're sorted array :-");
    for(i=0;i<n;i++)
        {
            printf("\t %d",a[i]);
        }
    printf("\nEntered Which Elements you want to find :-");
    scanf(" %d", &x);
    int start = 0;
    int End = n-1;
    while(start<=End)
        {
            int mid = (start + End) / 2;
            if(x == a[mid])
            {
                printf("\n Element %d Found at position %d", x, mid + 1);
                break;
            }
            else if( x > a[mid])
            {
                start = mid +1;
            }
            else
            {
                End = mid - 1;
            }
        }
    if(x == n){
                printf("\nEntered Element %d NOT found in array", x);
    }
}