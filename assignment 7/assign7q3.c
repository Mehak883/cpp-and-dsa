// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include <stdio.h>
int main()
{
    int n, a, b, i, c, flag = 0;
    printf("enter a no");
    scanf("%d", &n);
    a = 0;
    b = 1;
    c = a + b;
    if (n == 0 || n == 1)
    {
        printf("\n%d is a number of fibonacci series", n);
    }
    for (; c <= n;)
    {
        a = b;
        b = c;
        c = a + b;
        if (n == c)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\n%d is a number of fibonacci series", n);
    }
    else
    {
        printf("\n%d is a not number of fibonacci series", n);
    }
    return 0;
}