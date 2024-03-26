// 2.	Write a C program to check an alphabet is a vowel or constant.

#include <stdio.h>
int main()
{
    char c;
    printf("enter a character : ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is a consonant", c);
    }
    return 0;
}