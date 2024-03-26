// Write a program to search a string in the list of strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][10], s[10];
    int v = 0, l, i, j, n, flag = 0;
    printf("enter number of elements : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for (j = 0; j < n; j++)
    {
        scanf("%s", a[j]);
    }
    printf("\n");
    for (j = 0; j < n; j++)
    {
        printf("%s ", a[j]);
    }
    printf("\nenter an string you want to search : ");
    fflush(stdin);
    gets(s);
    for (j = 0; j < n; j++)
    {
        if (strcmp(s, a[j]) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%s is present at %d", a[j], j + 1);
    }
    printf("\n");
    return 0;
}