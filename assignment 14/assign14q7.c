// . Write a program to find second largest in an array.Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10], i;
    printf("Enter the value in a array:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int temp;
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
  
        printf("Second largest in an array %d", a[8]);
  

    return 0;
}