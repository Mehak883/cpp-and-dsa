// Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>
int main()
{
    int n, a, b, i, c, n1 = 0, n2 = 0;
    printf("enter a number");
    scanf("%d", &n);
    a = 0;
    b = 1;
    c = a + b;
    if (n == 0 || n == 1)
    {
        printf("\nthe nth term of series : %d ", n);
    }
    for (i = 3; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        if (i == n - 1)
        {
            n1 = c;
        }
    }
    printf("\nthe nth term of series : %d ", n1);
    return 0;
}