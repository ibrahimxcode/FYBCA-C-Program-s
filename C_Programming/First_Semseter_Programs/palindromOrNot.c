#include<stdio.h>
int main()
{
    int n, d, temp, rev=0;
    printf("\nENTER THE NUMBER:-");
    scanf(" %d", &n);
    temp=n;

    printf("\n DIGITS OF NUMBER AS:-\n");
    for(;n!=0;n=n/10)
    {
        d=n%10;
        printf("\t%d",d);
        rev=rev*10+d;
    }
    if(temp==rev)
    {
        printf("\n(%d) IS AN PALINDROM NUMBER",temp);
    }
    else
    {
        printf("\n(%d) IS NOT AN PALINDROM NUMBER",temp);
    }
    return 0;

}
