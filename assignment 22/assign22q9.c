/*9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation
 is failed.*/
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
  else{
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
  free(a);
  }
    return 0;
}