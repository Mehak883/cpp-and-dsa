// 9. Program to Convert even number into its upper nearest odd number Switch Statement.
#include <stdio.h>
int main()
{
    int choice, num, positive, negative, ch;
    printf("Enter a Number:");
    scanf("%d", &num);
    ch = num;
    if (num >= 0)
    {
        ch = 1;
    }
    if (num < 0)
    {
        ch = 2;
    }
    switch (ch)
    {
    case 1:
        if (num % 2 == 0)
        {
            num = num - 1;
            ;
            printf("%d", num);
            break;
        }
        if (num % 2 != 0)
        {
            num = num;
            printf("%d", num);
            break;
        }

    case 2:
        if (num % 2 == 0)
        {
            num = num + 1;
            ;
            printf("%d", num);
            break;
        }
        if (num % 2 != 0)
        {
            num = num;
            printf("%d", num);
            break;
        }
    case 0:
        printf("0 is neither a positive number nor a negative number");
        break;
    }
    return 0;
}