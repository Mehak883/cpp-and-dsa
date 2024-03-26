// 8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
int main()
{
    int *a, arr[10], n, sum = 0, i;
    printf("enter n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    a = arr;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(a + i);
    }
    printf("\nsum = %d", sum);
    return 0;
}