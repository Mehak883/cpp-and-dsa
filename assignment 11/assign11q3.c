//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
int prime_number(int n);
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    if(prime_number(num)==0){

       printf("%d is a prime number", num);
    }
    else{
    printf("%d is not a prime number", num);
    }
    return 0;
}
int prime_number(int n){  
    int flag=0;
      for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1 || n == 0)
    {
     return 1;   
    }
    else
    {
        if (flag == 1)
        {
            return flag;
        }
        else
        {
            return flag;
          }
    }
   
}