// 6. Write a program to print the first N even natural numbers
#include <stdio.h>
int main()
{
    int n;
        printf("Enter any number\n");
        scanf("%d",&n);
    for (int i = 1; i <= 2*n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}