// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][10], temp[10], a1[10][10];
    int v = 0, l, i, j;
    printf("enter elements : ");
    for (i = 0; i < 10; i++)
    {
        gets(a[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
    printf("sorted list of names : \n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", a[i]);
    }
    printf("\n");

    return 0;
}