// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf(" sum of first N natural numbers : %d ", sum);
    return 0;
}