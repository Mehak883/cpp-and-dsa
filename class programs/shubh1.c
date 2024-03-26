/*1.	Write a C Program - using if else statements, to find the largest number among the given two integer numbers.
Input: 250 350 
Output: 350
*/

#include <stdio.h>
int main()
{
    {
        int x, y;
        printf("\nenter x : ");
        scanf("%d", &x);
        printf("\nenter y : ");
        scanf("%d", &y);
        if (x > y)
        {
            printf("\n%d is greater", x);
        }
        else
        {
            printf("\n%d is greater ", y);
        }
        return 0;
    }
}
