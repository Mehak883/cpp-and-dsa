// 5. Write a function to transform a string into lowercase
#include <stdio.h>
#include <string.h>
void transform(char s[]);
int main()
{
    char s1[10];
    printf("enter a stirng : ");
    gets(s1);
    transform(s1);
    return 0;
}
void transform(char s[])
{
    printf("enter a stirng : ");
    gets(s);
    strlwr(s);
    printf("transform string into lowercase : ");
    puts(s);
}