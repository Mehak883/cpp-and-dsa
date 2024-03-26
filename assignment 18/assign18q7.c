// 7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
#include <string.h>
void pali(char s[10]);
int main()
{
    char s1[10];
    printf("enter a string");
    gets(s1);
    pali(s1);
    return 0;
}
void pali(char s[10])
{
    char a[10];
    strcpy(a, s);
    strrev(s);
    if (strcmp(a, s) == 0)
    {
        printf("\nstring is a palindrome");
    }
    else
    {
        printf("\nstring is not a palindrome");
    }
}