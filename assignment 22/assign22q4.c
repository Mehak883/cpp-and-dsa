// 4. Write a program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char *s;
    printf("enter a number : ");
    scanf("%d", &n);
    s = (char *)malloc(n* sizeof(char));
    printf("enter a text : ");
    fflush(stdin);
    gets(s);
    puts(s);
    free(s);
    return 0;
}