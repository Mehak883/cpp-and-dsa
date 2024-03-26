// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>

int lcm(int n1, int n2);
int main()
{
    int num1, num2;
    printf("enter 1st number : ");
    scanf("%d", &num1);
    printf("\nenter 2nd number : ");
    scanf("%d", &num2);
    printf("the lcm of %d and %d is %d ", num1, num2, lcm(num1, num2));

    return 0;
}
int lcm(int n1, int n2)
{
    int i;
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
            return i;
        }
        i++;
    }
}