//6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    printf("fact of  %d : %d", num, fact(num));
    return 0;
}
int fact(int n)
{
    int f=1;
    if(n==0||n==1){
return f;
    }
    else
    {
        return (n * fact(n - 1));
    }
}