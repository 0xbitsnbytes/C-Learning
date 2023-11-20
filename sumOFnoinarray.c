/** Write a program in C to find the sum of all elements of the array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 8
// Expected Output :
// Sum of all elements stored in the array is : 15 **/
#include <stdio.h>

int sumOfElements(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main(void)
{
    int a[100], i, n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", &a[i]);
    }

    int sum = sumOfElements(a, n);

    printf("Sum of all elements stored in the array is: %d\n", sum);

    return 0;
}
