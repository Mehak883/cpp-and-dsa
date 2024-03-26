// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
    for (int i = 20; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}