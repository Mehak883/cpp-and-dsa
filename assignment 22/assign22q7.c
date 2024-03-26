// 7. Write a program to demonstrate memory leak in C.
#include <stdio.h>
#include <stdlib.h>
int memory(){
 int i;
    int *a;
  
    a = (int *)malloc( sizeof(int));
           scanf("%d", (a));
  return *a;
}
int main()
{
    int i,*a,n;
        printf("%d", memory());
        printf("\n%d",*a);
    return 0;
}