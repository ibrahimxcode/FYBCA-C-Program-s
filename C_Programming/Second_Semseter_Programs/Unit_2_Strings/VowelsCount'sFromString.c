//W.A.C program to count the number vowels  from the input string inputed string accepted by the user//
#include<stdio.h>
int main()
{
    char Str[100];
    int i=0, Count=0;

    printf("Enter Your Name:-");
    scanf("%[^\n]", Str); //%[^\n] used for scan the full text given by user with space//

    for(i;Str[i]!='\0';i++)
    {
        if(Str[i]=='a'||Str[i]=='e'||Str[i]=='i'||Str[i]=='o'||Str[i]=='u'||
           Str[i]=='A'||Str[i]=='E'||Str[i]=='I'||Str[i]=='O'||Str[i]=='U')//Here we check whether inputed text have this vowels//
           {
             Count++;//after checking an condition it move to next index number and store the previous vowel//
           }
    }
    printf("We Find %d Vowels in Your Entered Name", Count);//Here we print the finded vowels by counter//


    return 0;
}
