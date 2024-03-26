// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
void sorting(int[], int[], int);
int main()
{
    int b[10], i, n, a[10], j;
    printf("enter a no of elements in both array  : ");
    scanf("%d", &n);
    printf("enter %d numbers : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter %d numbers : \n", n);
    for (j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    sorting(a, b, n);
    return 0;
}
void sorting(int a1[], int a2[], int n)
{
    int a3[20];
    int i = n - 1, j = n - 1, k = 0, l;
    while (i >= 0 && j >= 0)
    {
        if (a1[i] > a2[j])
        {
            a3[k] = a1[i];
            k = k + 1;
            i = i - 1;
        }
        else
        {
            a3[k] = a2[j];
            k = k + 1;
            j = j - 1;
        }
    }
    if (i == -1)
    {
        a3[k] = a2[j];
    }
    if (j == -1)
    {
        a3[k] = a1[i];
    }
    printf("\nafter merge sort : ");
    l = k;
    for (k = 0; k <= l; k++)
    {
        printf("%d ", a3[k]);
    }
}