#include<stdio.h>
int main()
{
    int i, n;

    printf("!!!ENTER ANY NUMBER!!!:-");
    scanf(" %d", &n);

    for(i = 2;i<n;i=i+1)
    {
        if(n%i==0)
        {
           break;
        }
    }
    if(i==n)
    {
        printf("\n '%d' IS AN 'PRIME' NUMBER",n);
    }
    else
    {
        printf("\n '%d' IS NOT AN 'PRIME' NUMBER",n);
    }
     return 0;
}
