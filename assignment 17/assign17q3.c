// 3. Write a program to count vowels in a given string
#include <stdio.h>
int main()
{
    int i, count = 0;
    char s[10];
    gets(s);
    puts(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    printf("vowels in a given string are %d", count);
    return 0;
}