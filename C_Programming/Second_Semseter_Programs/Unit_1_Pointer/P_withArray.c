#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *p=&a[0];
    printf("value of Array element%u", *p);
    printf("\n Address%d",p);
    return 0;
}