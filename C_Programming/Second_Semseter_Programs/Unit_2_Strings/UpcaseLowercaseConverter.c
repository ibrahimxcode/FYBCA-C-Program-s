//W.A.C program to convert the upercase character
//to lowerase and lowercase character to
//upercase from the inputed string.
//(hint:- use the concept of ASCII key)//
#include<stdio.h>
int main()
{
    char Str[100];
    int i=0;

    printf("!!!Welcome TO Uppercase Lowecase Converter Program!!!");
    printf("\nEnter Your Name:-");
    scanf("%[^\n]", Str);

    printf("\nHello %s Nice Name let's Convert Your Name", Str);

for (i = 0; Str[i] != '\0'; i++)
    {
        if (Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Str[i] = Str[i] + 32;   // Uppercase → Lowercase
        }
        else if (Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] = Str[i] - 32;   // Lowercase → Uppercase
        }
        // else: digits, spaces, symbols → unchanged
    }

    printf("\nConverted String:- %s", Str);



    return 0;
}
