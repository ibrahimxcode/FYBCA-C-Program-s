#include <stdio.h>

int main()
{
    int a = 10;
    int *p;//*p pointing to the variable inside datatype.//

    p = &a;//Address of A is Store in P means Pointer//

    printf("Value of a = %d\n", a);//for geting content of a 
    printf("Address of a = %p\n", &a);//for geting memory address of a 
    printf("Value stored in pointer p = %p\n", p);//for geting content of a by pointer
    printf("Value of a using pointer = %d\n", *p);//for geting memory address of a by pointer

    return 0;
}