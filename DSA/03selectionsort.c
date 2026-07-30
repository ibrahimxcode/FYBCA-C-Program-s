#include<stdio.h>
void display();
void accept();
void selectionsort();
int a[20],n;
void main()
{
   accept();
   printf("unsorted array is:\n");
   display();
   selectionsort();
   printf("\n sorted array is:\n");
   display();
}
void accept()
{
    int i;
    printf(" enter array limit\n");
    scanf("%d",&n);
    printf("\n enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

}
void swap(int *xp,int *yp)
{
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionsort()
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
            }

        }
        swap(&a[min_idx],&a[i]);
    }
}
