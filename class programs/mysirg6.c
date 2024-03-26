#include <stdio.h>
int main()
{
    int i, j, n;
    char k;
    printf("enter a no");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = 'A';
        for (j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("%c", k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}