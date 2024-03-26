//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take
// array values from the user.
#include <stdio.h>
int main()
{
    int a[10], i, sum_even = 0,sum_odd =0 ;
    printf("enter 10 numbers : \n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i <= 9; i++)
    {
        if(a[i]%2==0){
        sum_even = sum_even + a[i];
        }
        if(a[i]%2!=0){
        sum_odd = sum_odd + a[i];
        }
         
    }
    printf("sum of entered even numbers = %d\n", sum_even);
      printf("sum of entered odd numbers = %d\n", sum_odd);
    return 0;
}