//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
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
        if(*(a)<*(a+i)){
            *a=*(a+i);
        }
    }
    printf("\nLargest number = %d", *a);
  free(a);
    return 0;
}