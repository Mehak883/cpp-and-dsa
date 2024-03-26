// 7.	Write a C program to read and print information of a book using structure
// 6.	Write a C program to find transpose of a matrix.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum, i, j, n;
    printf("enter no of rows and columns : ");
    scanf("%d", &n);
   
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
    printf("transpose of matrix is \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}