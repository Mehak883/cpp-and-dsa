// 3. Write a function to display employee data. [ Refer structure from question 1 ]
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[10];
    int salary;
};
void display(struct employee e2)
{
    printf("id of employee : %d", e2.id);
    printf("\nname of employee : %s", e2.name);
    printf("\nsalary of employee : %d", e2.salary);
}
int main()
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
    display(e1);
    return 0;
}