// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
void pm(int n1, int n2);
int main()
{
    int num1, num2;
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("\nenter second number : ");
    scanf("%d", &num2);
    printf("\nprime numbers between %d and %d\n", num1, num2);
    pm(num1, num2);
    return 0;
}
void pm(int n1, int n2)
{
    int n = 3, flag = 0, i;
    for (; n1 < n2; n1++)
    {
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
    }
}