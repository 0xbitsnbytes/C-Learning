/*
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :
 element - 0 : 5
 element - 1 : 7
 element - 2 : 2
 element - 3 : 9
 element - 4 : 8

*/
#include <stdio.h>
int main()
{
    int num, i, a[100];
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &num);
    printf("Input %d number of elements in the array :\n",num);
    for (i = 0; i < num; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    printf(" The elements you entered are : \n");
    for (i = 0; i < num; i++)
    {

        printf("element - %d : %d\n" ,i ,*(&a[i]));
    }

    return 0;
}