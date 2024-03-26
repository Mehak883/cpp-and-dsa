// 6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
    printf("enter 10 numbers : \n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nentered elements are : \n");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nsorted list of elements : \n");
    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ", a[i]);
    }

    return 0;
}