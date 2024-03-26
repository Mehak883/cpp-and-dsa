// 10. Write a function to find the repeated character in a given string.
#include <stdio.h>
#include <string.h>
int frequency(char arr[]);
int main()
{
    int i;
    char arr[10];
    scanf("%s", arr);
    frequency(arr);
    return 0;
}
int frequency(char arr[])
{
    int s;
    s = strlen(arr);
    char b[s], duplicate = '1', count;
    int j, i;
    for (i = 0; i < s; i++)
    {
        b[i] = arr[i];
    }
    for (i = 0; i < s; i++)
    {
        count = '1';
        for (j = i + 1; j < s; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                b[j] = duplicate;
            }
        }
        if (b[i] != duplicate)
            b[i] = count;
    }
    for (i = 0; i < s; i++)
    {
        if (b[i] != duplicate)
        {
            printf("repeated characters are  %c\n", arr[i]);
        }
    }
}