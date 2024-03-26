// 1. Write a program to draw the following pattern
/*
 *
 * *
 * * *
 * * * *
 * * * * *   */
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter a number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}