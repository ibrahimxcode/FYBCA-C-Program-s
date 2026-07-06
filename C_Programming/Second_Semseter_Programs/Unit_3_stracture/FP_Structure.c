#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    printf("Enter the id, name and marks of the student: ");
    scanf("%d %s %f", &s1.id, s1.name, &s1.marks);
    printf("Id: %d\nName: %s\nMarks: %.2f\n", s1.id, s1.name, s1.marks);
    return 0;

}