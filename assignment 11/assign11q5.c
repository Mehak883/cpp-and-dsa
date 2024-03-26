// 5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
void prime_number(int num);
int main()
{
    int number;
    printf("enter a number : ");
    scanf("%d", &number);
    prime_number(number);
    return 0;
}
void prime_number(int num)
{
    int n, flag = 0, i, m = 0, k = 2;

    printf("first n prime numbers are : ");

    for (k = 2; k; k++)
    {
        for (i = 2; i <= k / 2; i++)
        {

            if (k % i == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
            // k++;
        }
        if (flag == 0)
        {
            printf("%d ", k);
            m++;
        }
        if (m == num)
        {
            break;
        }
    }
}