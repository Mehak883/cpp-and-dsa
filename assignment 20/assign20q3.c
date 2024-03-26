// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
void sort(int *arr, int n);
int main()
{
    int a[10], i, j, temp, n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("enter 10 numbers : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void sort(int *arr, int n)
{
    int i, j, temp;
    printf("\nsorted list of elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + j) < *(arr + i))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}