/*6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include <stdio.h>
void check(char s[]);
int main()
{
    char s1[10];
    check(s1);
    return 0;
}
void check(char s[])
{
    int i, flag = 0, flag1 = 0, f;
    printf("enter a string");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            flag = 1;
        }
        if (s[i] >= 48 && s[i] <= 57)
        {
            flag1 = 1;
        }
    }
    f = flag1 * flag;
    if (f == 1)
    {
        printf("\nstring is an alphanumeric string");
    }
    else
    {
        printf("\nstring is not an alphanumeric string");
    }
}