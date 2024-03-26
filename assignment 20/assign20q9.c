// 9. Write a program to print the elements of an array in reverse order.
#include <stdio.h>
int main()
{
    int *a, arr[10], i, n;
    printf("enter n");
    scanf("%d", &n);
    a = arr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(a + i));
    }
    return 0;
}