//9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
int main()
{
    int i, j;
    char temp;
    char s[10];
    printf("ent1er string : \n");
    gets(s);
    printf("\nentered stirng is : \n");
    puts(s);
    printf("\nsorted string array : \n");
    for (i = 0; s[i] !='\0'; i++)
    {
        for (j = i + 1; s[j] !='\0'; j++)
        {
            if (s[j] < s[i])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        printf("%c ", s[i]);
    }

    return 0;
}