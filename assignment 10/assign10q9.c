// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>                                                                      
int check(int n, int r);                                                                        
int flag = 0;                                                                       
int main()                                                                      
{                                                                       
    int num, r1;                                                                       
    printf("enter a number : ");                                                                        
    scanf("%d", &num);                                                                      
    printf("\nenter a digit to check");                                                                     
    scanf("%d", &r1);                                                                      
    if (check(num, r1) == 1)                                                                       
    {                                                                       
        printf("%d contain %d digit", num,r1);                                                                       
    }                                                                       
    else                                                                        
    {                                                                       
      printf("%d does not contain %d digit ",num,r1);                                                                       
    }                                                                       
    return 0;                                                                       
}                                                                       
int check(int n, int dig)                                                                     
{                                                                       
    int r;                                                                      
    while (n > 0)                                                                       
    {                                                                       
        r = n % 10;                                                                     
        n = n / 10;                                                                                                                                        
        if (dig == r)                                                                     
        {                                                                       
            flag = 1;                                                                       
            return flag;                                                                        
        }                                                                       
    }                                                                       
    return flag;                                                                        
}                                                                       