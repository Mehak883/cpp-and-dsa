// 9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void octal(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    octal(num);
    return 0;
}
void octal(int n)
{
    int r, o = 0, i = 1;
    if (n != 0)
    {
        r = n % 8;
        n = n / 8;
        o = r + o;
        octal(n);
        printf("%d", o);
    }
}
