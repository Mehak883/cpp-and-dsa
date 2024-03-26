/*9. Write a program that asks the user to enter a username. If the username entered is one of the names in the
 list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][10], s[10];
    int v = 0, l, i, j, num, n, flag = 0,fact=1;
    printf("enter number of elements : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for (j = 0; j < n; j++)
    {
        scanf("%s", a[j]);
    }
    printf("\n");
    for (j = 0; j < n; j++)
    {
        printf("%s\n ", a[j]);
    }
    printf("\nenter username : ");
    fflush(stdin);
    gets(s);
    for (j = 0; j < n; j++)
    {
        if (strcmp(s, a[j]) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
       printf("username is valid : ");
       printf("\n enter a number :");
       scanf("%d",&num);
       printf("factorial of a number is : ");
       for(i=1;i<=num;i++){
        fact=fact*i;
       }
       printf("%d",fact);
    }
       else{
       printf("invalid username !!!");
       } 
    printf("\n");
    return 0;
}