// 1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x, y;
    printf("enter x : ");
    scanf("%d", &x);
    printf("enter y : ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
