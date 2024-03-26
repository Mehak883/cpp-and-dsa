// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>
void fibb(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    fibb(num);
    return 0;
}
void fibb(int n)
{
    int a, b, i, c;
    a = 0;
    b = 1;
    printf("fibonacci series of %d is : \n", n);
    printf("%d %d ", a, b);
    for (i = 0; i < n - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = a + b;
        a = b;
        b = c;
    }
}
