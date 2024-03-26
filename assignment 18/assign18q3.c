// 3. Write a function to compare two strings.
#include <stdio.h>
#include <string.h>
void rev(char s[], char a[]);
int main()
{
    char a1[10], s1[10];
    rev(s1, a1);
    return 0;
}
void rev(char s[], char a[])
{
    int i;
    printf("enter 1st stirng : ");
    gets(s);
    printf("enter 2nd stirng : ");
    gets(a);
    i = strcmp(a, s);
    printf("\n%d ", i);
}