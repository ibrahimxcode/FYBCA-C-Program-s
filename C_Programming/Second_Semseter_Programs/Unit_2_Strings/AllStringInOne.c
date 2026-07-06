//W.A.C-Program to that perform built-in string's type e.g strcmp();, strlen();, strcpy(); etc.//
#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
    char S1[100],S2[100];
    int MV, v, i=0;

    printf("\t\t\t\t\t\t!!!Hello Sir/Madam!!!\n");
    sleep(1);
    printf("\t\t\t\t\t!!!WELCOME TO STRING'S ALL IN ONE PROGRAM!!!");
    sleep(2);

    printf("\n***This Is Our Menu***");
    sleep(2);
    printf("\n***String's length***-1");
    sleep(1);
    printf("\n***String's Copy***-2");
    sleep(1);
    printf("\n***Two String's Comparions***-3");
    sleep(1);
    printf("\n***Combaine Two Statement's***-4");
    sleep(1);
    printf("\n***String Lowercase <--> Uppercase converter***-5");
    sleep(1);
    printf("\n***Reverse String***-6");
    sleep(1);
    printf("\n!!!End Of Menu!!!\n");
    sleep(2);

    printf("\nEnter Your Choice Value:-");
    scanf("%d",&MV);

    switch(MV)
    {
    case 1:
        {
            printf("\nEnter Your Name:-");
            scanf(" %[^\n]",S1);
            printf("\nLength of Your Name is :- %llu",strlen(S1));
            break;
        }

    case 2:
        {
            printf("\nEnter Your city's Name:-");
            scanf(" %[^\n]", S1);
            strcpy(S2, S1);
            printf("\n++%s Is Nice City overall++",S2);
            break;
        }

    case 3:
        {
            printf("\nEnter First Name:-");
            scanf(" %[^\n]",S1);

            printf("\nEnter Second Name:-");
            scanf(" %[^\n]",S2);

            v=strcmp(S1,S2);

            if(v == 0)
            {
                printf("\nBoth Name are Equal's");
            }
            else
            {
                printf("\nBoth Name Is Different");
            }
            break;
        }

    case 4:
        {
            printf("\nEnter First Statement:-");
            scanf(" %[^\n]",S1);
            printf("\nEnter Second Statement:-");
            scanf(" %[^\n]",S2);
            printf("\n%s",strcat(S1,S2));
            break;
        }

    case 5:
        {
           printf("\nEnter You'r FullName or Anything:-");
           scanf(" %[^\n]",S1);

           if(S1[i]>='A'&&S1[i]<='Z')
           {
               printf("\nText in Lowercase Format:-%s",strlwr(S1));
           }
           else if(S1[i]>='a'&&S1[i]<='z')
           {
               printf("\nText in Uppercase Format:-%s",strupr(S1));
           }
           break;
        }

    case 6:
        {
            printf("\nEnter You'r Text Here:-");
            scanf(" %[^\n]",S1);
            printf("\n%s",strrev(S1));
            break;
        }

    default:
        printf("!!!Invalid Choice!!!");
    }

    printf("\n\t\t\t\t\t!!!HAVE A NICE DAY SIR/MADAM!!!");

    return 0;
}
