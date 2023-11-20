#include <stdio.h>
int main()
{

    int a[100], i, n;

    printf("Enter the total Number that you want to reverse:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter no.%d to put in Array:\n", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Number After Reversing Array :\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}