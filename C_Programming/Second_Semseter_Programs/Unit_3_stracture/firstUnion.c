//Write a C program to create a structure railway (route id, source,
//stime (hh: mm), destination, dtime (hh: mm) and display the information
//of 10 railways using function called "display". Pass the structure variable
//to a function called "display" to display the 10 railway routes. Make use
//of nested structure.
#include<stdio.h>
struct time
{
    int HH, MM;
};
struct railway
{
    int routeid;
    char source[20];
    struct time stime;
    char distination[20];
    struct time dtime;
};
void display(struct railway R)
{
    printf("\nRouteID is :- %d",R.routeid);
    printf("\nName Of Starting Station:-%s",R.source);
    printf("\nStarting Time:-%d:%d",R.stime.HH,R.stime.MM);
    printf("\nName Of Distination Station:-%s",R.distination);
    printf("\nEnding Time:-%d:%d",R.dtime.HH,R.dtime.MM);
};
int main()
{
    int i;
    struct railway R[10];

    printf("\t\t\t\t!!!Hello Sir Madam!!!\n");
    printf("\t\t\t!!!This is Railway Booking Platfrom!!!!");

    for(i = 0; i < 10; i++)
    {
        printf("\nRouteID :-");
        scanf("%d",&R[i].routeid);
        printf("\nName Of Starting Station:-");
        scanf(" %[^\n]",R[i].source);
        printf("\nStarting Time:-");
        scanf("%d%d",&R[i].stime.HH,&R[i].stime.MM);
        printf("\nName Of Distination Station:-");
        scanf(" %[^\n]",R[i].distination);
        printf("\nEnding Time:-");
        scanf("%d%d",&R[i].dtime.HH,&R[i].dtime.MM);    
    }
    for(i = 0; i < 10; i++)
    {
        display(R[i]);
    }
    printf("\t\t\t\t\t!!1HAVE A NICE DAY SIR/MADAM!!!");
    return 0;
}   