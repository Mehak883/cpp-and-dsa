// 1. Write a program to print Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
    int n, a, b, i, c;
    printf("enter a number");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("fibonacci series of %d is : \n", n);
    printf("%d %d ", a, b);
    for (i = 0; i < n - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
       
        a = b;
        b = c;
    }
    return 0;
}
