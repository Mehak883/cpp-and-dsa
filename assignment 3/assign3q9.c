// write a program to find the greatest among three given numbers.print number once if the greatest anumber appears two or more times.
#include <stdio.h>
int main()
{
    
        int a, b, c;
        printf("\nenter a : ");
        scanf("%d", &a);
        printf("\nenter b : ");
        scanf("%d", &b);
        printf("\nenter c : ");
        scanf("%d", &c);
        if ((a != b) && (a != c) && (b != c))
        {
            if (a > b && a > c)
            {
                printf("\n%d is a greater ", a);
            }
            else if (b > c)
            {
                printf("\n%d is a greater ", b);
            }
            else
            {
                printf("\n%d is greater", c);
            }
        }
    
    else if ((a == b) && (a != c))
    {
        if (a > c)
        {
            printf("both number a and b are same , the number is %d", a);
        }
        else
        {
            printf("c = %d is greater", c);
        }
    }
    else if ((a == c) && (a != b))
    {
        if (a > b)
        {
            printf("both number a and c are same , the number is %d", a);
        }
        else
        {
            printf("%d is greater", b);
        }
    }
    else if ((b == c) && (c != a))
    {
        if (c > a)
        {
            printf("both number b and c are same , the number is %d", b);
        }
        else
        {
            printf("%d is greater", a);
        }
    }
    else
    {
        printf("all numbers are same ,%d is greatest number", a);
    }

    return 0;
}