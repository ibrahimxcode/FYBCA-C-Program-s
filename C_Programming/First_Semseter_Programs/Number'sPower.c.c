#include<stdio.h>
int main()
{
    int x, n, i, mult=1;
    printf("\nENTER NUMBER(X) AND POWER(N):-");
    scanf(" %d %d", &x, &n);

    for(i=1;i<=n;i++)
    {
        mult=mult*x;
    }
    printf("\nPOWER(%d) OF NUMBER(%d) IS =%d\n", x,n,mult);
    return 0;
}
