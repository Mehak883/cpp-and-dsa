/*9. Write a function to reverse a string word wise.
(For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )*/
#include <stdio.h>
#include <string.h>
void rev(char str[10]) ;
int main()
{
    char s[10];
    printf(" Enter a String :  ");
    gets(s);
    rev(s);
   
    return 0;
}
void rev(char str[])
{
    int i, len, j,k;
    len=strlen(str);
    k = len - 1;

    printf("\nReverse Order of string  \n");
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == 32 || i == 0)
        {
            if (i == 0)
            {
                j = 0;
            }
            else
            {
                j = i + 1;
            }
            for (j; j <= k; j++)
            {
                printf("%c", str[j]);
            }
            k = i - 1;
            printf(" ");
        }
    }
}
