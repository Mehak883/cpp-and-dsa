// 3. Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
int sort(int arr[], int n, int i);
int main()
{
    int a[10], i, j, n;
    printf("enter a no of elements in first array  : ");
    scanf("%d", &n);
    printf("enter %d numbers : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nsorted list of elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", sort(a, n, i));
    }
    return 0;
}
int sort(int arr[], int n, int i)
{
    int temp, j;
    for (j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[i])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return arr[i];
}
