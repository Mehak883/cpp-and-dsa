// 1. Write a function to calculate length of the string
#include <stdio.h>
#include <string.h>
int length(char s[]);
int main()
{
    char s1[10];
    printf(" length of the string : %d", length(s1));
    return 0;
}
int length(char s[])
{
    int i;
    printf("enter a stirng : ");
    gets(s);
    printf("entered stirng : ");
    puts(s);
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}