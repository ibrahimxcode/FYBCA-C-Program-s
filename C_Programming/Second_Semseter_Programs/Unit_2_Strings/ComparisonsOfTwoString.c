#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are not equal");
            return 0;
        }
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
