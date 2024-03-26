//write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
    {
        int x;
        printf("\nenter x : ");
        scanf("%d", &x);
        if (x&1==1)
        {
            printf("\n%d is odd number", x);
        }
        else
        {
            printf("\n%d is even number", x);
        }
        return 0;
    }
}