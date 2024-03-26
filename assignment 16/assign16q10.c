// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
    int a[10][10], n, m, i, j, count = 0,count1=0,k=0;
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
        count=0;
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
                count++;
        }
        if(count>count1)
        {
            count1=count;
        k=i;
        }
    }
    printf("row with maximum number of 1s : %d",k+1);
    return 0;
}