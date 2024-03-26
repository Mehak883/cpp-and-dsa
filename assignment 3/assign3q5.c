// write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
    {
        int x;
        printf("\nenter x : ");
        scanf("%d", &x);
        if (x > 99 && x < 1000)
        {
            printf("\n%d is three-digit number", x);
        }
        else
        {
            printf("\n%d is not a three-digit number", x);
        }
        return 0;
    }
}