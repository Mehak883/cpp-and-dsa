//6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int fact(int n);
int main()
{
    int num ;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("factorial of a number : %d ", fact(num));
    return 0;
}
int fact(int n){
    int f=1;
 for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}