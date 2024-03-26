//6. Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
{
    int year, y,flag =0;
    printf("enter a year");
    scanf("%d", &year);

    y = year / 100;
    if (year % 100 == 0)
    {
        if (y % 4 == 0)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            flag=1;
        }
        else
        {
           flag =0;
        }
        switch (flag)
        {
        case 1:
        printf("%d is a leap year",year);
            break;
        case 0:
        printf("%d is not a leap year",year);
        default:
            break;
        }
    }   
    return 0;
}