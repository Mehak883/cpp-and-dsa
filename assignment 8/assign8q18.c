/*
    *
   ***  
  ***** 
 *******
*********   
 *******
  ***** 
   ***  
    *   */
#include <stdio.h>
int main()
{
    int a, i, j,k, n;
    printf("enter a number");
    scanf("%d", &n);
a=(n+2)/2;
     for (i = 1; i <=a; i++)
    {
        for (j=1; j <=(a+1)-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++){            
        printf("*");
        }
    printf("\n");
    }
    printf(" ");
    for(i = a-1; i >=1;i--){
        for (j = 1; j <=a-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++){            
        printf("*");
        }
        printf("\n ");
    }
    return 0;
}