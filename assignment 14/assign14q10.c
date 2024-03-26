//10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10],b[10], i, j, temp, n1;
    printf("enter a no of elements in first array  : ");
    scanf("%d", &n1);
     for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
   printf("the elements of one array are copied into another array : ");
     for (i = 0; i <n1 ; i++)
     {
         b[i]=a[i];

         printf("%d ", b[i]);
     }
     

    return 0;
}