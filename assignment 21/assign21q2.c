// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include <stdio.h>
struct employee
{
    int id;
    char name[10];
    int salary;
};
struct employee input()
{
    struct employee e1;

    printf("id of employee :");
    scanf("%d", &e1.id);
    fflush(stdin);
    printf("\nname of employee :");
    fgets(e1.name, 10, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';
    printf("\nsalary of employee : ");
    scanf("%d", &e1.salary);
    return e1;
}
int main()
{
    struct employee e;
    e = input();
    printf("id of employee : %d", e.id);
    printf("\nname of employee : %s", e.name);
    printf("\nsalary of employee : %d", e.salary);
    return 0;
}