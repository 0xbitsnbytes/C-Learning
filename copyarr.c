/*
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
#include <stdio.h>

int copyArray(int a[], int b[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}
int main(void)
{
    int i, n, a[100], b[100];
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element -%d:", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    copyArray(a, b, n);
    printf("\nThe elements stored in the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}