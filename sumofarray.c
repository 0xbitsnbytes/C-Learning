/*
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The sum of array is : 20

*/
#include <stdio.h>
int main()
{
    int a[10], i, sum = 0,num;

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &num);
    printf("Input %d number of elements in the array :\n", num);
    for (i = 0; i < num; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    int *ptr = a;

    for (i = 0; i < num; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("The sum of array is: %d\n", sum);

    return 0;
}