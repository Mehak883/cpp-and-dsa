// 9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int count(int n, int c);
int main()
{
    int num;
    int c = 1;
    printf("enter a number");
    scanf("%d", &num);
    printf("digits of  %d : %d", num, count(num, c));
    return 0;
}
int count(int n, int c)
{
    int r, sum1;
    if (n >= 1)
    {
        r = n % 10;
        n = n / 10;
        return c + count(n, c);
    }
}
