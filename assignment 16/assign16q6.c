// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
int main()
{
    int a[3][3], sum = 0, i, j;
    printf("enter first matrix");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of the %d row is %d\n", i, sum);
        sum = 0;
    }
    sum = 0;
    for (j = 0; j <= 2; j++)
    {
        for (i = 0; i <= 2; i++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of the %d column is %d\n", j, sum);
        sum = 0;
    }
    return 0;
}