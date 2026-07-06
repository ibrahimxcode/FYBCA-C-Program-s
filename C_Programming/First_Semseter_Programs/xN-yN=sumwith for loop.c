#include<stdio.h>
int main()
{
    int x, y, sum=0;
    printf("\n ENTER VALUE OF 'X' AND 'Y':-");
    scanf(" %d %d", &x, &y);

    for(int i=x;i<=y;i++)
    {
        sum=sum+i;
    }
    printf("SUM OF %d TO %d IS:-%d\n", x,y,sum);
    return 0;
}
