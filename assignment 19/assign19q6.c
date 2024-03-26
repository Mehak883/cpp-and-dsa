// 6. Write a program to print the strings which are palindrome in the list
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][50], s[10], temp[10][10];
    int v = 0, l, i, j, n, flag;
    printf("enter number of elements : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for (j = 0; j < n; j++)
    {
        scanf("%s", a[j]);
    }
    for (j = 0; j < n; j++)
    {
        strcpy(temp[j], a[j]);
        strrev(temp[j]);
    }
    printf("\nplaindrome in the list are : \n");
    for (j = 0; j < n; j++)
    {
        if (strcmp(temp[j], a[j]) == 0)
        {
            printf("%s\n", a[j]);
        }
    }
    return 0;
}