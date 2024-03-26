//10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, i, n,max,min;
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
    max=*a;
    for (i = 0; i < n; i++)
    {
        if(max<*(a+i)){
            max=*(a+i);
        }
    }
    min=*a;
    for (i = 0; i < n; i++)
    {
        if(min>*(a+i)){
            min=*(a+i);
        }
    }
    printf("\nmaximum number = %d",max);
    printf("\nminimum number = %d",min);
  free(a);
    return 0;
}