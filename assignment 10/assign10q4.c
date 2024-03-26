// 4. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void printN(int n);
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);
    printN(num);
    return 0;
}
void printN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}