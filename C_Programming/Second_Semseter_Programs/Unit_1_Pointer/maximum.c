#include<stdio.h>
int *large(int *a, int *b)
{
    if(*a > *b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    int *result;

    printf("Enter Any Two Value:- ");
    scanf("%d%d", &x, &y);

    result = large(&x, &y);

    printf("The Max Of Two number is %d", *result);

    return 0;
}
