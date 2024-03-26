// 10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int power(int n, int p);
int main()
{
    int num, pwr;
    printf("enter a number");
    scanf("%d", &num);
    printf("enter a power");
    scanf("%d", &pwr);
    printf("ans : %d", power(num, pwr));
    return 0;
}
int power(int n, int p)
{
    if (p != 0)
    {
        return n * power(n, p - 1);
    }
    else
    {
        return 1;
    }
}