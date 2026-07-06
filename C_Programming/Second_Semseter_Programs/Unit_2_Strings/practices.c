#include <stdio.h>

int main()
{
    char string1[100], string2[100];
    int i;

    printf("Enter your name:- ");
    scanf(" %[^\n]", string1);   // space before % fixes buffer issue

    printf("Enter your name again:- ");
    scanf(" %[^\n]", string2);   // works properly now

    for(i = 0; string1[i] != '\0' || string2[i] != '\0'; i++)
    {
        if(string1[i] != string2[i])
        {
            printf("Both strings are not equal");
            return 0;   // stop immediately
        }
    }

    printf("Both strings are equal");
    return 0;
}