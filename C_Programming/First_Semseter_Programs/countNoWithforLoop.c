#include<stdio.h>
int main()
{
    int n, d, count=0;
    printf("ENTER SOME NUMBER'S:-");
    scanf(" %d", &n);

    printf("\nDIGITS OF NUMBER AS:\n");

    for (count = 0; n != 0; n = n / 10, count = count + 1)
    {
        d=n%10;
        printf("\t %d",d);
    }
    printf("\n total number of digits:-%d\n",count);
}
