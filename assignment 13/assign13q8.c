// 8. Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
void fibb(int n);
int main()
{
    int num, i, a = 0, b = 1;
    printf("enter a number");
    scanf("%d", &num);
    printf("fibonacci series is \n");
    printf("%d %d", a, b);
    fibb(num - 2);
    return 0;
}
void fibb(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
        fibb(n - 1);
    }
}