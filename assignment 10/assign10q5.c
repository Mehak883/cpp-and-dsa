//5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void printN(int n);
int main()
{
     int num;
    printf("Enter any number\n");
    scanf("%d",&num);
   printN(num);
        return 0;
}
    void printN(int n){
    for (int i = 1; i <= 2*n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }        
    }
