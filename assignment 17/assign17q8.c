// 8. Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[10], a[10];
    gets(s);
    strcpy(a, s);
    puts(a);
    return 0;
}