// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
int main()
{
    int a[3][3], sum = 0, i, j,m,n;
    printf("enter a number of elements : ");
    scanf("%d",&n);
    m=n;
    printf("enter first matrix");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
m=m-1;
        for (j = 0; j < n; j++)
        {
            if (j==m)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("%d", sum);

    return 0;
}