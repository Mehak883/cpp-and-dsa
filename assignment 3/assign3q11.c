// write a program to take marks of 5 subjects from the user .assume mark are given out 100 and passing marks is 33.now display whether the  candidate passed the examination or failed
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    printf("enter marks in subject 1 : ");
    scanf("%d", &m1);
    printf("enter marks in subject 2 : ");
    scanf("%d", &m2);
    printf("enter marks in subject 3 : ");
    scanf("%d", &m3);
    printf("enter marks in subject 4 : ");
    scanf("%d", &m4);
    printf("enter marks in subject 5 : ");
    scanf("%d", &m5);
    if (m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33)
    {
        printf("you are pass");
    }
    else
    {
        printf("you are fail");
    }
    return 0;
}