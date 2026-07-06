#include <stdio.h>

int main()
{
    char str[50];
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Length of string = %d", count);
    return 0;
}
