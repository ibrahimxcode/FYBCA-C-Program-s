#include <stdio.h>

struct student
{
    int RollNo;
    char Name[100];
    float Marks;
};

int main()
{
    int n, n2, i, SearchData, Found, j;

    printf("\nEnter How Many Student Data Do You Want To Store:- ");
    scanf("%d", &n);

    struct student s[n];

    // Store Student Data
    for(i = 0; i < n; i++)
    {
        printf("\n\t\t\t!!! Enter Student %d Details !!!\n", i + 1);

        printf("Enter Student RollNo :- ");
        scanf("%d", &s[i].RollNo);

        printf("Enter Student Name :- ");
        scanf(" %[^\n]", s[i].Name);   // allows full name with space

        printf("Enter Student Marks :- ");
        scanf("%f", &s[i].Marks);
    }

    printf("\nHow Many Student Data Do You Want To See:- ");
    scanf("%d", &n2);

    // Search Section
    for(i = 0; i < n2; i++)
    {
        printf("\nEnter Student RollNo to Search:- ");
        scanf("%d", &SearchData);

        Found = 0;   // reset for every search

        for(j = 0; j < n; j++)
        {
            if(s[j].RollNo == SearchData)
            {
                printf("\nStudent Found:\n");
                printf("Student Name :- %s\n", s[j].Name);
                printf("Student RollNo :- %d\n", s[j].RollNo);
                printf("Student Marks :- %.2f\n", s[j].Marks);
                Found = 1;
                break;
            }
        }

        if(Found == 0)
        {
            printf("!!! Student Data Not Found !!!\n");
        }
    }

    return 0;
}

