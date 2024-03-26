/*4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example,
if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is
[40, 12, 70, 32, 29] )*/
#include <stdio.h>
void left(int arr[], int barr[], int n);
void right(int arr[], int barr[], int n);
int main()
{
    int a[10], b[10], i, n, n1, d;
    printf("enter a no of elements : ");
    scanf("%d", &n);
    printf("enter %d numbers : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("1. LEFT\n2. RIGHT\n");
    printf("ENTER YOUR CHOICE : ");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
        left(a, b, n);
        break;

    case 2:
        right(a, b, n);
        break;
    }
    return 0;
}
void left(int arr[], int barr[], int n)
{
    int n1, i;

    printf("\nenter position : ");
    scanf("%d", &n1);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        barr[i] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        barr[i] = barr[n1 + i];

        if (i == (n - n1))
        {
            break;
        }
        printf("%d ", barr[i]);
    }
    for (i = 0; i < n1; i++)
    {
        printf("%d ", arr[i]);
    }
}
void right(int arr[], int barr[], int n)
{

    int n1, i;

    printf("\nenter position : ");
    scanf("%d", &n1);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        barr[i] = arr[i];
    }
    for (i = n - 1; i > 0; i--)
    {

        if (i == (n - (n1 + 1)))
        {
            break;
        }
        printf("%d ", barr[i]);
    }
    for (i = 0; i < n - n1; i++)
    {
        printf("%d ", arr[i]);
    }
}