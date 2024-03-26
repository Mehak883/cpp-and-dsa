//2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int printN(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    //printf("%d",printN(num));
    printf("sum of first %d odd natural numbers : %d" ,num,printN((2*num)-1));
    return 0;
}
int printN(int n)
{
    int ans,s;
    if (n -1> 0)
    {
    s= n+printN(n - 2);
        return s;
    }   
}