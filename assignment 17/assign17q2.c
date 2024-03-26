// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main()
{
    int i, count = 0;
    char s[10], c;
    printf("enter a string");
    gets(s);
    printf("entered string is ");
    puts(s);
    printf("enter a character to check : ");
    scanf("%c", &c);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    printf("occurrence of %c in a given string :%d ", c, count);
    return 0;
}