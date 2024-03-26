// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
void reverse(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    reverse(num);
    return 0;
}
void reverse(int n)
{
    int rev;
    if (n >= 1)
    {
        rev = n % 10;
        n = n / 10;
        printf("%d", rev);
        reverse(n);
    }
}