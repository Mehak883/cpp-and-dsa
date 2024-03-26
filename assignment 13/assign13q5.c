//5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
   printf("sum of digits of  %d : %d" ,num,sum(num));
    return 0;
}
int sum(int n)
{
    int r,sum1;
    if (n >= 1)
    {
        r = n % 10;
        n = n / 10;
        return r+sum(n) ;
    }
}