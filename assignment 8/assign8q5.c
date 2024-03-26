 /*
    *
   ***  
  ***** 
 *******
*********    */
#include <stdio.h>
int main()
{
    int i, j,k, n;
    printf("enter a number");
    scanf("%d", &n);
     for (i = 3; i <=5; i++)
    {
        for (j=1; j <=5-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++){            
        printf("*");
        }
        printf("\n");
    }
    return 0;
}