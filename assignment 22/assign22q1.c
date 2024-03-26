// 1. Define a function to input variable length string and store it in an array without memory wastage.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void memory(char *s)
{
    int n;

    printf("\nenter a string : ");
    s = (char *)malloc(10*sizeof(char));
    gets(s);
    n = strlen(s);
    realloc(s, n + 1);
    printf("%s", s);
    free(s);
}
int main()
{
    char *s1;
    memory(s1);
    return 0;
}