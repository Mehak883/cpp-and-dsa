// 5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>
int main()
{
    int a, b;
    int *i, *j;
    i = &a;
    j = &b;
    printf("enter a : ");
    scanf("%d", i);
    printf("enter b : ");
    scanf("%d", j);
    if (*i > *j)
    {
        printf("%d is greater", *i);
    }
    else
    {
        printf("%d is greater", *j);
    }
    return 0;
}