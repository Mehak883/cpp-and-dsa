//8. Write a program in C to print or display an upper triangular matrix.
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
            if(j>=i){
            printf("%d ", a[i][j]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
return 0;
}