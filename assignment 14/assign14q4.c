//4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10],i,j;
    printf("enter 10 numbers : \n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
      for (i = 0; i <= 9; i++){
        if(a[0]<a[i]) 
        {
        a[0]=a[i];
        }
      }
      printf("\nGreatest number stored in an array : %d",a[0]);
    return 0;
}