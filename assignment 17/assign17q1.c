// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main()
{
    int i;
    char s[10];
    printf("enter a string");
    gets(s);
    printf("entered string is ");
    puts(s);
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    printf("length of string is %d", i);
    return 0;
}