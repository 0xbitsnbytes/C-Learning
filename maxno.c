/*
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the greatest number.

*/
#include <stdio.h>
int main()
{

    int fno, sno, *fnptr, *snptr;
    printf("Enter the first and Second Number : ");
    scanf("%d%d", &fno, &sno);

    fnptr = &fno;
    snptr = &sno;
    if (*(&fno) > *(&sno))
    {
        printf("%d is the greatest number.\n", *(&fno));
    }

    else
        printf("%d is the greatest number.\n", *(&sno));
    return 0;
}