/*
Pointer : Demonstrate the use of & and * operator :
--------------------------------------------------------
 m = 300
 fx = 300.600006
 cht = z

 Using & operator :
-----------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using & and * operator :
-----------------------------
 value at address of m = 300
 value at address of fx = 300.600006
 value at address of cht = z

Using only pointer variable :
----------------------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using only pointer operator :
----------------------------------
 value at address of m = 300
 value at address of fx= 300.600006
 value at address of cht= z
*/
#include <stdio.h>
int main()
{
    int m = 300, *iptr;
    float fx = 300.600006, *fptr;
    char cht = 'z', *chptr;
    printf("\nPointer : Demonstrate the use of & and * operator : \n");
    printf("--------------------------------------------------------\n");
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    printf("Using & operator : \n");
    printf("----------------------- \n ");
    iptr = &m;
    fptr = &fx;
    chptr = &cht;

    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);

    printf("Using & and *  operator : \n");
    printf("----------------------- \n ");
    printf("value at address of m :%d\n", *(&m));
    printf("value at address of fx :%f\n", *(&fptr));
    printf("value at address of cht:%c\n", *(&chptr));

    printf("Using only pointer variable :\n");
    printf("-----------------------\n ");
    printf("address of m =%p\n", iptr);
    printf("address of fx =%p\n", fptr);
    printf("address of cht =%p\n", chptr);

    printf("Using only pointer operator :\n");
    printf("-----------------------\n ");
    printf(" value at address of m = %d\n", *iptr);
    printf("value at address of fx :%f\n", *fptr);
    printf("value at address of cht :%c\n", *chptr);

    return 0;
}