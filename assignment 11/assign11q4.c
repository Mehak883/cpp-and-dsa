// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int prime_number(int n);
int main()
{
    int num;
    printf("enter a number whose next prime number to be found : ");
    scanf("%d", &num);

    printf("the next prime number is %d", prime_number(num));
    return 0;
}
int prime_number(int n)
{
    int i, flag = 0;
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
            return n;
        }
    }
}