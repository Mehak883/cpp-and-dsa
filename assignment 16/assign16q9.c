// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int a[10][10], n, m, i, j, count = 0;
    printf("enter row and column : ");
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (m * n) / 2)
    {
        printf("it is a sparse matrix ");
    }
    else
    {
        printf("it is not a sparse matrix ");
    }

    return 0;
}