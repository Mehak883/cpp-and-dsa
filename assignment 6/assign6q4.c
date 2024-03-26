// 4. Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("sum of squares of first N natural numbers : %d ", sum);
    return 0;
}