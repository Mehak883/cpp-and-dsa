// 8. Write a program to demonstrate dangling pointers in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    scanf("%d", p);
    printf("%d", *p);
    free(p);
    printf("\n%d", *p);
    return 0;
}