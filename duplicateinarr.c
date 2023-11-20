/*
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/

#include <stdio.h>
int DuplicateFunc(int a[], int n)
{
    int count = 0, i, j;

    printf("Inputs %d element in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main(void)
{
    int a[100], n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int dupcount = DuplicateFunc(a, n);

    printf("Total number of duplicate elements found in the array is: %d\n", dupcount);
    return 0;
}
