// Input the number of elements to be stored in the array: 4
// Input 4 elements in the array :
// element - 0 : 3
// element - 1 : 2
// element - 2 : 2
// element - 3 : 5
// Expected Output :
// The unique elements found in the array are:
// 3 5
#include<stdio.h>

int main () {
   
    int a[100], n,i,j;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

   
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
    
   
   printf("The unique elements found in the array are:%d\n",);
   
   
   
    return 0;
}