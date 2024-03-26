//7. Write a recursive function to calculate HCF of two numbers

#include <stdio.h>
int HCF(int, int);
int temp;
int main()
{
    int x, y;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter Y:");
    scanf("%d", &y);
    if (x > y)
    {
        HCF(x, y);
        temp=y;
        printf("%d is the HCF of %d and %d",HCF(x, y),x,y);
    }
    else
    {
        HCF(y, x);
        temp=x;
          printf("%d is the HCF of %d and %d",HCF(y, x),x,y);
    }
    return 0;
}
int HCF(int n1, int n2)
{   
    int i ; 
    i=n2;
    if ((n1 % i == 0) && (temp% i == 0))
    {
        return i;
    }
    HCF(n1, (i - 1));
}