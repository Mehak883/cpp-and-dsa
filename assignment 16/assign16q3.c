//3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum, i, j;
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
    printf("transpose of matrix is \n");
 
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            b[i][j]=a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}