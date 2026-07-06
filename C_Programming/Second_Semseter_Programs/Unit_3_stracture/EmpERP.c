#include<stdio.h>
struct Date
{
    int day, month, year;
};
struct EmployeeData
{
    int empid;
    char empname[50];
    char type[10];
    struct Date DOB;
};
int main()
{
    int i, n;
    printf("\t\t\t\t\t\t\t!!!Welcome To Employee ERP Program's!!!\n");
    printf("\t\t\t\t\t\t\t\t!!!Hello Madam or Sir!!!");
    printf("\nEnter How Many Employee:-");
    scanf("%d",&n);

    struct EmployeeData E1[100];

    if(n > 100)
    {
        printf("\t\t\t\t\t\t\t!!!To Many Employee's!!!\n");
        printf("\t\t\t\t\t\t\t\t!!!ERROR 404!!!\n");
    }
    for(i = 0;i < n; i++)
    {
        printf("\nEnter Emplyee's EmployeeID:-");
        scanf("%d",&E1[i].empid);
        printf("\nEnter Emplyee's Full Name:-");
        scanf(" %[^\n]",E1[i].empname);
        printf("\nEnter Emplyee's Type:-");
        scanf(" %[^\n]",&E1[i].type);
        printf("\nEnter Emplyee's Date Of birth:-");
        scanf("%d%d%d",&E1[i].DOB.day,&E1[i].DOB.month,&E1[i].DOB.year);
    }
    for( i = 0;i < n;i++)
    {
        printf("\nEmployeeID:-%d", E1[i].empid);
        printf("\nEmployee's Name:-%s", E1[i].empname);
        printf("\nEmployee's Type:-%c", E1[i].type);
        printf("\nEmployee's DOB:-%d %d %d", E1[i].DOB.day,E1[i].DOB.month,E1[i].DOB.year);
    }
    return 0;
}