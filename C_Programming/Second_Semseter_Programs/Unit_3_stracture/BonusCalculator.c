//2. Define a structure to accept data for 10 employees as empid, empname,//
//empsalary, employee experience in years. Calculate the bonus and print it if//
//the employee is having experience greater than 10 years.//
#include<stdio.h>
#include<string.h>

struct Employee
{
    int Empid;
    char EmpName[50];
    float EmpExp;
    double EmpSalary;
};

int main()
{
    int i;
    struct Employee E[10];
    double bonus;

    printf("\n\t\tWelcome to Diwali Event\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &E[i].Empid);
        getchar();

        printf("Enter Employee Full Name: ");
        scanf("%[^\n]",E[i].EmpName);
        printf("Enter Employee Salary: ");
        scanf("%lf", &E[i].EmpSalary);

        printf("Enter Employee Experience (years): ");
        scanf("%f", &E[i].EmpExp);
    }

    printf("\n\n This Employees Eligible For Bonus:\n");

    for(i = 0; i < 10; i++)
    {
        if(E[i].EmpExp >= 10)
        {
            bonus = E[i].EmpSalary * 0.10;

            printf("\nID: %d", E[i].Empid);
            printf("\nName: %s", E[i].EmpName);
            printf("\nExperience: %.2f years", E[i].EmpExp);
            printf("\nBonus: %.2lf\n", bonus);
        }
    }

    return 0;
}