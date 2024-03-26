// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
int main()
{
    int i, d = 0, sc = 0, a = 0;
    char s[10];
    gets(s);
    puts(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            d++;
        }
        if ((s[i] >= 32 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126))
        {
            sc++;
        }
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            a++;
        }
    }
    printf("digits in a given string are %d", d);
    printf("\nspecial characters in a given string are %d", sc);
    printf("\nalphabets in a given string are %d", a);
    return 0;
}