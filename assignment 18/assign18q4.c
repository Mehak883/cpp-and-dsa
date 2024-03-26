// 4. Write a function to transform string into uppercase
#include <stdio.h>
#include <string.h>
void transform(char s[]);
int main()
{
    char s1[10];
    transform(s1);
    return 0;
}
void transform(char s[])
{
    printf("enter a stirng : ");
    gets(s);
    strupr(s);
    printf("transform string into uppercase : ");
    puts(s);
}