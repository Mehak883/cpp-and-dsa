// 4. Write a program in C to demonstrate how to handle the pointers in the program.
#include <stdio.h>
int main()
{
    int a, *i, **j;
    printf("enter a");
    scanf("%d", &a);
    i = &a;
    j = &i;
    printf("\nvalue of a = %d", a);
    printf("\nvalue of a contain by *i  = %d", *i);
    printf("\naddress of a = %p", &a);
    printf("\naddress of a contain by i = %p", i);
    printf("\naddress of i = %p", &i);
    printf("\nvalue of a contain bt **j %d", **j);
    printf("\nvalue of i (address of a) contain by *j %p", *j);
    printf("\naddress of i contain by j %p", j);
    printf("\n address of j = %p", &j);
    return 0;
}