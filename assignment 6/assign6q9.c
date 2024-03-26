// 9. Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int i, n1, n2, factor = 1;
    printf("enter 1st number : ");
    scanf("%d", &n1);
    printf("\nenter 2nd number : ");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        i = n1;
    }
    else
    {
        i = n2;
    }
    while (1)
    {
        if ((i % n1 == 0) && (i % n2 == 0))
        {
            printf("the lcm of %d and %d is %d ", n1, n2, i);
            break;
        }
        i++;
    }
    return 0;
}