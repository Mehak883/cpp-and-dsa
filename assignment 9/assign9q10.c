// 10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>
int main()
{
    int D, a, b, c, num;
    float x1, x2;
    printf("Enter the value of coefficient of \'x^2\':");
    scanf("%d", &a);
    printf("Enter the value of coefficient of \'x^1\':");
    scanf("%d", &b);
    printf("Enter the value of coefficient of \'x^0\':");
    scanf("%d", &c);
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        num = 1;
    }
    else if (D == 0)
    {
        num = 2;
    }
    else
        num = 3;
    switch (num)
    {
    case 1:
        x1 = (-b + pow(D, 0.5)) / (2 * a);
        x2 = (-b - pow(D, 0.5)) / (2 * a);
        printf("Both roots are real and distinct roots %.2f and %.2f", x1, x2);
        break;
    case 2:
        x1 = (-b + pow(D, 0.5)) / (2 * a);
        x2 = (-b - pow(D, 0.5)) / (2 * a);
        printf("Both roots are real and equal roots %.2f and %.2f", x1, x2);
        break;
    case 3:
        printf("Both roots are Imaginery");
        break;
    }
    return 0;
}