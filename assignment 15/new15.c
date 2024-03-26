#include <stdio.h>
int main()
{
    int i, j, n, arr[10];
    printf("enter n : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int b[n], duplicate = -1;
    for (i = 0; i < n; i++)
    {
        b[i] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                b[j] = duplicate;
            }
        }
        if (b[i] != duplicate)
            b[i] = count;
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] != duplicate)
        {
            printf("frequency of  %d is %d\n", arr[i], b[i]);
        }
    }
    return 0;
}