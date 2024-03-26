// 1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    printf("sum of first %d natural numbers %d", num, sum(num));
    return 0;
}
int sum(int n)
{
    int ans;
    if (n >= 1)
    {
        return (n + sum(n - 1));
    }
}