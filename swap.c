/*
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2

*/

#include <stdio.h>

void swap_number(int fn, int sn )
{
    int swap;
    swap=fn;
    fn=sn;
   sn= swap;
printf("After swapping: n1=%d ,n2=%d",fn ,sn);
}


int main()
{

    int fn, sn;
    printf("Input 1st number : ");
    scanf("%d", &fn);
    printf("Input 2nd number : ");
    scanf("%d", &sn);
printf("Before swapping: n1=%d ,n2=%d\n",fn ,sn);
swap_number(fn,sn);
    return 0;
}
