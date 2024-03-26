//9. Write a program to store information of n students and display them using structure
#include <stdio.h>
#include<string.h>
struct student
{
    int roll_number;
    char name[10];
    long int phone_number;
    char branch[10];
    int semester;
};
struct student input()
{
    struct student s1;
    printf("enter your roll number : ");
    scanf("%d", &s1.roll_number);
    fflush(stdin);
    printf("enter your name : ");
    fgets(s1.name, 10, stdin);
    s1.name[strlen(s1.name) - 1] = '\0';
    printf("enter your phone number : ");
    scanf("%ld", &s1.phone_number);
    fflush(stdin);
    printf("enter your branch : ");
    fgets(s1.branch, 10, stdin);
    s1.branch[strlen(s1.branch) - 1] = '\0';
    printf("enter your semester : ");
    scanf("%d", &s1.semester);
    return s1;
}
void display(struct student s2)
{
    printf("roll number : %d\t", s2.roll_number);
    printf("name : %s\t", s2.name);
    printf("phone number : %ld\t", s2.phone_number);
    printf("branch : %s\t", s2.branch);
    printf("semester : %d\n", s2.semester);
}
int main()
{
    int i,n;
    struct student s[10], s3;
    printf("enter n : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        s[i] = input();
    }
    for (i = 0; i < n; i++)
    {
        display(s[i]);
    }
    return 0;
}