// 6. Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[10];
    gets(s);
    strrev(s);
    printf("\nreverse a string : ");
    puts(s);
    return 0;
}