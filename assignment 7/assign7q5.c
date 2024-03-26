// 5. Write a program to check whether two given numbers are co-prime numbers or not.
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
        i = n2;
    }
    else
    {
        i = n1;
    }
    while (1)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {

            break;
        }
        i--;
    }
    if (i == 1)
    {
        printf(" %d and %d are co-prime numbers", n1, n2);
    }
    else
    {
        printf(" %d and %d are not co-prime numbers", n1, n2);
    }
    return 0;
}