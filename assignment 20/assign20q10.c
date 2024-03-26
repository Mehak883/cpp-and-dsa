// 10. Write a program to print a string in reverse using a pointer
#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, l;
    char *a, arr[10];
    a = arr;
    scanf("%s", a);
    l = strlen(a);
    for (i = l - 1; i >= 0; i--)
    {
        printf("%c", *(a + i));
    }
    return 0;