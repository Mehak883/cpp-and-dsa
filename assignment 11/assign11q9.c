// 9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int square(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    printf("square of %d is %d ", num, square(num));
    return 0;
}
int square(int n)
{
    int square_no;
    square_no = n * n;
    return square_no;
}