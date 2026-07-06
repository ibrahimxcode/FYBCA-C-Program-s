#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    int *p;

    p = &a;
    printf("Value = %d\n", *p);

    p = &b;
    printf("Value = %d\n", *p);

    p = &c;
    printf("Value = %d\n", *p);

    p = &d;
    printf("Value = %d\n", *p);

    return 0;
}