// 8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void binary(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    binary(num);
    return 0;
}
void binary(int n)
{
    int r;
    if (n >= 1)
    {
        r = n % 2;
        n = n / 2;
        binary(n);
        printf("%d", r);
    }
}