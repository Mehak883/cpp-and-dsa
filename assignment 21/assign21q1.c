// Define a structure Employee with member variables id, name, salary
#include <stdio.h>
struct employee
{
    int id;
    char name[10];
    int salary;
};
int main()
{
    struct employee e = {1, "mehak", 30000};
    printf("id of employee : %d", e.id);
    printf("\nname of employee : %s", e.name);
    printf("\nsalary of employee : %d", e.salary);
    return 0;
}