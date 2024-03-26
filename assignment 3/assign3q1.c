// write a program tocheck whether a given number is positive or non positive
#include <stdio.h>
int main()
{
    {
        int x;
        printf("\nenter x : ");
        scanf("%d", &x);
        if (x > 0)
        {
            printf("\n%d is positive", x);
        }
        else
        {
            printf("\n%d is non positive", x);
        }
        return 0;
    }
}





