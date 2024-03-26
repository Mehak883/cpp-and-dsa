// 3. Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter N \n");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("sum of first %d odd natural numbers : %d ", n, sum);
    return 0;
}