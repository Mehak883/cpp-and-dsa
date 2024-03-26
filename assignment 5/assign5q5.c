// 5. Write a program to print the first N odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
        int n;
        printf("Enter any number\n");
        scanf("%d",&n);
    for (int i = 2*n; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}