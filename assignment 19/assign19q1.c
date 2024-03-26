// 1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][10];
    int v = 0, l, i, j;
    printf("enter elements : ");
    for (j = 0; j < 5; j++)
    {
        //
        gets(a[j]);
    }
    printf("\n");

    for (j = 0; j < 5; j++)
    {
        l = strlen(a[j]);
        for (i = 0; i < l; i++)
        {
            if (a[j][i] == 'a' || a[j][i] == 'o' || a[j][i] == 'e' || a[j][i] == 'i' || a[j][i] == 'u')
            {
                v = v + 1;
            }
        }
        printf("\nnumber of vovels in string %d : %d ", j + 1, v);
        v = 0;
    }
    printf("\n");

    return 0;
}