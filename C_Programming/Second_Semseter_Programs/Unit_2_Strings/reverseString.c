#include <stdio.h>

int main()
{
    char str[50], rev[50];
    int i, j, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    for (i = 0; str[i] != '\0'; i++)
        length++;

    // Reverse string
    for (i = length - 1, j = 0; i >= 0; i--, j++)
        rev[j] = str[i];

    rev[j] = '\0';

    printf("Reversed string: %s", rev);
    return 0;
}
