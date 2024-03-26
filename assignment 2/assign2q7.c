// write a program to find the position of first 1 in lsb
#include <stdio.h>
int main()
{
    int num, count = 1, a;
    printf("enter a number : ");
    scanf("%d", &a);
    num = a & 1;
    if (num == 1)
    {

        printf("1 in lsd is present at %d position", count);
    }
    while (num == 0)
    {
        a = a >> 1;
        count++;
        if (a & 1 == 1)
        {
            printf("1 in lsd is present at %d", count);
            break;
        }
    }
    return 0;
}