// 2. Write a function to reverse a string.
#include <stdio.h>
#include <string.h>
void rev(char s[]);
int main()
{
    char s1[10];
    rev(s1);
    return 0;
}
void rev(char s[])
{
    printf("enter a stirng : ");
    gets(s);
    strrev(s);
    printf("\nreverse a string : ");
    puts(s);
}