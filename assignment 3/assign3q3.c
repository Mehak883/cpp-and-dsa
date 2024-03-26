//write a program to check whether a given number is an even number or an odd number.
#include <stdio.h>
int main()
{
    {
        int x;
        printf("\nenter x : ");
        scanf("%d", &x);
        if (x%2==0)
        {
            printf("\n%d is even number", x);
        }
        else
        {
            printf("\n%d is odd number", x);
        }
        return 0;
    }
}