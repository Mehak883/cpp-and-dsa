// // 4. Write a program to calculate HCF of two numbers
// #include <stdio.h>
// int main()
// {
//     int i, n1, n2, factor = 1;
//     printf("enter 1st number : ");
//     scanf("%d", &n1);
//     printf("\nenter 2nd number : ");
//     scanf("%d", &n2);
//     if (n1 > n2)
//     {
//         i = n2;
//     }
//     else
//     {
//         i = n1;
//     }
//     while (1)
//     {
//         if ((n1 % i == 0) && (n2 % i == 0))
//         {
//             printf("the hcf of %d and %d is %d ", n1, n2, i);
//             break;
//         }
//         i--;
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int i, n1, n2, factor = 1;
    printf("enter 1st number : ");
    scanf("%d", &n1);
    printf("\nenter 2nd number : ");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        i = n2;
    }
    else
    {
        i = n1;
    }
    for (i; i > 0; i--)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            printf("the hcf of %d and %d is %d ", n1, n2, i);
            break;
        }
        i--;
    }
    return 0;
}