// 6. Write a program to calculate the length of the string using a pointer
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], (*arr)[0];
    int l;
    (*arr)[0] = a[0];
    fgets(arr[1], 15, stdin);
    l = strlen(arr[1]);
    printf("%d", l - 1);
    return 0;
}