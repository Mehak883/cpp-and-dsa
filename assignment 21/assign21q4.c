/*4. Write a function to find the highest salary employee from a given array of 10 employees.
 [ Refer structure from question 1]*/
 #include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[10];
    int salary;
};
struct employee input()
{
    struct employee e1;

    printf("\n\nid of employee :");
    scanf("%d", &e1.id);
    fflush(stdin);
    printf("name of employee :");
    fgets(e1.name, 10, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';
    printf("salary of employee : ");
    scanf("%d", &e1.salary);
    return e1;
}
void display(struct employee e2)
{
    printf("\n\nid of employee : %d", e2.id);
    printf("\nname of employee : %s", e2.name);
    printf("\nsalary of employee : %d", e2.salary);
}
struct employee sort(struct employee e3[])
{
    struct employee temp;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (e3[i].salary > e3[j].salary)
            {
                temp = e3[i];
                e3[i] = e3[j];
                e3[j] = temp;
            }
        }
    }
    return e3[9];
}
int main()
{
    struct employee e[10], s;
    int i;
    for (i = 0; i < 10; i++)
    {
        e[i] = input();
    }
    for (i = 0; i < 10; i++)
    {
        display(e[i]);
    }
    s = sort(e);
    printf("\nhighest salary of employee from a given array is : \n");
    printf("\n\nid of employee : %d", s.id);
    printf("\nname of employee : %s", s.name);
    printf("\nsalary of employee : %d", s.salary);
    return 0;
}
 