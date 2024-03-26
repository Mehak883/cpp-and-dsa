// 3. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][10];
    int v = 0, l, i, j, n;
    printf("enter number of elements : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for (j = 0; j < n; j++)
    {
        gets(a[j]);
    }
    printf("\n");
    for (j = 0; j < n; j++)
    {
        printf("%s ", a[j]);
    }
    printf("\n");
    return 0;
}