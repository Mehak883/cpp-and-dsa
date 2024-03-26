// 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int n, rev = 0, r, temp;
    printf("enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        r = temp % 10;
        temp = temp / 10;
        rev = (rev * 10) + r;
    }
    printf("reverse of %d is %d", n, rev);
    return 0;
}