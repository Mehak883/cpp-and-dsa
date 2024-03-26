// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, i, n, sum = 0;
    printf("enter a number : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + *(a + i);
    }
    printf("\n%d", sum);
    return 0;
}