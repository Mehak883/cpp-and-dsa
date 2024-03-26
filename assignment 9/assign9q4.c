/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit   */
/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    char choice;
    printf("a. Check! sides of isosceles triangle or not \n");
    printf("b. Check! sides of a right angled triangle or not\n");
    printf("c. Check! sides of a equilateral triangle or not\n");
    printf("d. Exit\n");
    printf("Enter your choice ->\n");
    scanf("%c", &choice);
    switch (choice)
    {

    case 'a':
        printf("Enter a First Side->\n");
        scanf("%d", &side1);
        printf("Enter a Second Side->\n");
        scanf("%d", &side2);
        printf("Enter a Third Side->\n");
        scanf("%d", &side3);
        if((side1+side2>side3||side2+side3>side1||side3+side1>side2)&&(side1==side2||side2==side3||side3==side1)){
            printf("Yes \'%d\',\'%d\'and \'%d\' are the sides of isosceles triangle",side1,side2,side3);
        }
        else
            printf("Yes \'%d\',\'%d\'and \'%d\' are not the sides of isosceles triangle",side1,side2,side3);
        break;
    case 'b':
        printf("Enter a First Side->\n");
        scanf("%d", &side1);
        printf("Enter a Second Side->\n");
        scanf("%d", &side2);
        printf("Enter a Third Side->\n");
        scanf("%d", &side3);
        if((side1+side2>side3||side2+side3>side1||side3+side1>side2)&&(side1*side1==side2*side2+side3*side3||side2*side2==side1*side1+side3*side3||side3*side3==side1*side1+side2*side2)){
          printf("Yes \'%d\',\'%d\'and \'%d\' are the sides of right-angled triangle",side1,side2,side3);   
        }
        else
          printf("Yes \'%d\',\'%d\'and \'%d\' are not the sides of right-angled triangle",side1,side2,side3); 
        break;
    case 'c':
        printf("Enter a First Side->\n");
        scanf("%d", &side1);
        printf("Enter a Second Side->\n");
        scanf("%d", &side2);
        printf("Enter a Third Side->\n");
        scanf("%d", &side3);
        if((side1+side2>side3||side2+side3>side1||side3+side1>side2)&&(side1==side2==side3)){
          printf("Yes \'%d\',\'%d\'and \'%d\' are the sides of equilateral triangle",side1,side2,side3);   
        }
        else
          printf("Yes \'%d\',\'%d\'and \'%d\' are not the sides of equilateral triangle",side1,side2,side3); 
        break;
    default:
        printf("Please Enter valid choice");
        break;
    }
    return 0;
}