// 10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
int main()
{
    int n, j, i = 0, temp = 0, r, rev = 0;
    scanf("%d", &n);

    temp = n;
    if (temp < 0)
    {
        temp = -temp;
        while (temp > 0)
        {
            r = temp % 10;
            temp = temp / 10;
            rev = (rev * 10) + r;
        }
        printf("%d-", rev);
        if (n == rev)
        {
            printf("palindrome");
        }
        else
        {
            printf("no palindrome");
        }
    }
    else
    {
        if (n % 10 == 0)
        {
            while (temp > 0)
            {
                r = temp % 10;
                temp = temp / 10;
                rev = (rev * 10) + r;
                i++;
            }
            for (j = 1; j < i; j++)
            {
                printf("0");
            }
            printf("%d", rev);
              if (n == rev)
            {
                printf("palindrome");
            }
            else
            {
                printf("no palindrome");
            }
        }
        else
        {
            while (temp > 0)
            {
                r = temp % 10;
                temp = temp / 10;
                rev = (rev * 10) + r;
            }
            printf("%d", rev);
            if (n == rev)
            {
                printf("palindrome");
            }
            else
            {
                printf("no palindrome");
            }
        }
    }
    return 0;
}
// printf("Armstrong numbers under 1000 : ");
// for (n = 1; n < 1000; n++)
// {
//     temp = n;
//     rev = 0;
//     while (temp > 0)
//     {
//         r = temp % 10;
//         temp = temp / 10;
//         rev = rev + r * r * r;
//     }
//     if (n == rev)
//     {
//         printf("%d ", rev);
//     }
// }