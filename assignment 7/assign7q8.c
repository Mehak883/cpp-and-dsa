// 8. Write a program to find next Prime number of a given number.
#include <stdio.h>
int main()
{
    int n, flag = 0, i;
    printf("enter a number whose next prime number to be found : ");
    scanf("%d", &n);
    while (n)
    {
        n++;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
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
            printf("%d ", n);
            break;
        }
    }
    return 0;
}