//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int printN(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    printf("sum of squares of first %d natural numbers : %d",num,printN(num));
    return 0;
}
int printN(int n)
{
    int ans;
    if (n >= 1)
    {
        return n *n+ printN(n - 1);
         
    }
}