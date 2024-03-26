// 1. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int hcf(int n1, int n2);
int main()
{
    int num1, num2;
    printf("enter 1st number : ");
    scanf("%d", &num1);
    printf("\nenter 2nd number : ");
    scanf("%d", &num2);
    printf("the hcf of %d and %d is %d ", num1, num2, hcf(num1, num2));
    return 0;
}
int lcm(int n1, int n2)
{
    int i;
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
            return i;
        }
        i--;
    }
}