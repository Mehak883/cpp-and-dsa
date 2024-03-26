// 7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int n = 3, flag = 0, i, n1, n2;
    printf("enter first number : ");
    scanf("%d", &n1);
    printf("\nenter second number : ");
    scanf("%d", &n2);
    printf("\nprime numbers between %d and %d\n", n1, n2);
    for (; n1 < n2; n1++)
    {
        for (i = 2; i <= n1 / 2; i++)
        {
            if (n1 % i == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 0)
        {
            printf("%d ", n1);
        }
    }
    return 0;
}