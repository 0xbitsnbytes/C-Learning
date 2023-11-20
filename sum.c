/*
Test Data :
Input the first number  and second no: 5 6

Expected Output :

The sum of the entered numbers is : 11
*/
#include <stdio.h>
int main()
{
    int fno, sno, *fptr, *sptr, sum;
    printf("Enter the first and second no: ");
    scanf("%d%d", &fno, &sno);
    fptr = &fno;
    sptr = &sno;

    sum = *fptr + *sptr;

    printf("The sum of the entered numbers is :%d\n", sum);

    return 0;
}