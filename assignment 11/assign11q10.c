// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>
void series();
int main()
{
    printf("sum of the series is ");
    series();
    return 0;
}
void series()
{
    int i, fact = 1, n = 0, j;
    for (j = 1; j <= 5; j++)
    {
        fact = fact * j;
        n = n + fact / j;
    }
    printf("%d", n);
}
