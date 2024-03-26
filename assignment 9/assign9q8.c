/* Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement. */
#include <stdio.h>
int main()
{
    int choice, num, positive, negative, ch;
    printf("Enter a Number:");
    scanf("%d", &num);
    ch = num;
    if (num > 0)
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
        num = ~num + 1;
        printf("%d", num);
        break;
    case 2:
            num = ~num + 1;
            printf("%d", num);
            break;
    case 0:
        printf("0 is neither a positive number nor a negative number");
        break;
    }
    return 0;
}