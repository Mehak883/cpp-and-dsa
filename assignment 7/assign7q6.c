// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
    int n, flag = 0, i;
    printf("prime numbers under 100 are : ");
    for (n = 1; n < 100; n++)
    {
    
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
        }
    }
    return 0;
}