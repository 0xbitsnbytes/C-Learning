#include <stdio.h>

int calc_sum(int a, int b)
{
    int sum;
    sum = a + b;
    printf("The sum of the two numbers is : %d\n", sum);
}

int main(void)
{
    int a, b, sum;
    printf("Enter the value for a and b:");
    scanf("%d%d", &a, &b);
    calc_sum(a, b);

    return 0;
}