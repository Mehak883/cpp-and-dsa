// 6. Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of a number : %d ", fact);
    return 0;
}