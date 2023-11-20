// Input any number for square : 20
// Expected Output :

// The square of 20 is : 400.00
#include <stdio.h>
void sq_num(int num)
{
    float sq;
    sq = num * num;
    printf("The sum of %d is :%f\n", num, sq);
}

int main()
{
    int num;
    printf("Enter the Number that you want square: ");
    scanf("%d", &num);
    sq_num(num);
    return 0;
}