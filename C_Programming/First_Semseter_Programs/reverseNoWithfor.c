#include<stdio.h>
int main()
{
    int n, d;
    printf("\nENTER THE NUMBER:-");
    scanf(" %d", &n);

    printf("\nDIGITS OF NUMBER AS :-\n");
    for(;n!=0;n=n/10)
    {
        d=n%10;
        printf("\t%d",d);
    }
    return 0;
}
