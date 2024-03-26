// 6. Write a function to sort employees according to their names [refer structure from question 1]
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[10];
    int salary;
};
struct employee input(int n)
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
void display(struct employee e2, int n)
{
    printf("\n\nid of employee : %d", e2.id);
    printf("\nname of employee : %s", e2.name);
    printf("\nsalary of employee : %d", e2.salary);
}
void sort(struct employee e3[], int n)
{
    struct employee temp;
    int i, j, k ;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = 0; e3[i].name[k] != '\0';)
            {
                if (e3[i].name[k] != e3[j].name[k])
                {
                    if (e3[i].name[k] > e3[j].name[k])
                    {
                        temp = e3[i];
                        e3[i] = e3[j];
                        e3[j] = temp;
                        break;
                    }
                }
                else
                {
                    k = k + 1;
                }
            }
        }
    }
}
        int main()
        {
            struct employee e[10], s;
            int i, n;
            printf("enter no of employes : ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                e[i] = input(n);
            }

            sort(e, n);
            printf("\nafter sorting \n");
            for (i = 0; i < n; i++)
            {
                display(e[i], n);
            }
            return 0;
        }