//write a program to print greater between two numbers.print one number of both are the same.
#include <stdio.h>
int main()
{
    {
        int a,b;
        printf("\nenter a : ");
        scanf("%d", &a);
        printf("\nenter b : ");
        scanf("%d", &b);
        if (a>b)
        {
            printf("\n%d is a greater ", a);
        }
        else if(a==b){
            printf("both number are same , the number is %d",a);
        }
        else
        {
            printf("\n%d is greater", b);
        }
        return 0;
    }
}