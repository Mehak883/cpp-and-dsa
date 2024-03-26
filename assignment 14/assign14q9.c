// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10], i, j, temp, n;
    printf("enter a no of elements  : ");
    scanf("%d", &n);
    printf("enter %d numbers : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nentered elements are : \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}