// 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>
void reverse(int arr[], int n1);
int main()
{
    int a[10], i, n1;
    printf("enter a no of elements in array  : ");
    scanf("%d", &n1);
    printf("enter %d numbers : \n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    reverse(a, n1);
    return 0;
}
void reverse(int arr[], int n1)
{
    int i;
    printf("reverse order of array is : ");

    for (i = n1 - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}