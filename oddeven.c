// Input any number : 5
// Expected Output :

//  The entered number is odd.

#include <stdio.h>
void oddeven_checker(int num)
{
    if (num % 2 == 0)
    {
        printf("The entered number is even.\n");
    }
    else
        printf("The entered number is odd.\n");
}
int main()
{
    int num;
    printf("Input any number : ");
    scanf("%d", &num);
    oddeven_checker(num);
    return 0;
}