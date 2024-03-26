// 7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], *arr;
    int v = 0, c = 0, i;
    arr = a;
    fgets(arr, 20, stdin);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (*(arr + i) == 'a' || *(arr + i) == 'e' || *(arr + i) == 'o' || *(arr + i) == 'i' || *(arr + i) == 'u' || *(arr + i) == 'A' || *(arr + i) == 'E' || *(arr + i) == 'I' || *(arr + i) == 'O' || *(arr + i) == 'U')
        {
            v = v + 1;
        }
        else
        {
            c = c + 1;
        }
    }
    printf("number of vowels : %d\n", v);
    printf("number of consonants : %d", c - 1);
    return 0;
}