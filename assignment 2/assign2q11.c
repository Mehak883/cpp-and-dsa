// write a program to print input a number from the user and also input a digit.append a digit in number and print the resulting number
#include <stdio.h>
int main()
{
    int num, digit;
    printf("enter a number : ");
    scanf("%d", &num);
    printf("\nenter a digit : ");
    scanf("%d", &digit);
    num = num * 10 + digit;
    printf("\nresulting number is %d", num);
    return 0;
}