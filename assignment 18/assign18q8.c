// 8. Write a function to count words in a given string
#include <stdio.h>
#include <string.h>
int length(char s[]);
int main()
{
    char s1[10];
    printf(" words of the string : %d", length(s1));
    return 0;
}
int length(char s[])
{
    int i, count = 1;
    printf("enter a stirng : ");
    gets(s);
    printf("entered stirng : ");
    puts(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 32)
        {
            count++;
        }
    }
    return count;
}