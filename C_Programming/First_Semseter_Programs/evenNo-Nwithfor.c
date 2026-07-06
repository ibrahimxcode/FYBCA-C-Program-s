#include<stdio.h>0
int main()
{
    int n,i;
    printf("\nENTER THE NUMBER:-");
    scanf(" %d", &n);

    for(i=2;i<=n;i+=2)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}
