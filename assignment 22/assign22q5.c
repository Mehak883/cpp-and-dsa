/*5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory
allocation.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, i, n, sum = 0;
    printf("enter a number : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
     if (a == NULL) {
  printf("Error!!! memory not allocated.");
  exit(0);
  }
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + *(a + i);
    }
    printf("\n%d", sum);
    free(a);
    return 0;
}