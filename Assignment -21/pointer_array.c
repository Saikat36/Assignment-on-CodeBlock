
/* Here is a example of pointer-array & object*/

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

void input_employee(struct Employee *e[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter information for employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i]->id); //   &e[i]->id    =   &(*e[i]).id

        printf("Enter Name: ");
        scanf("%s", &e[i]->name); //   e[i]->name   =   (*e[i]).name

        printf("Enter Salary: ");
        scanf("%d", &e[i]->salary); //  &e[i]->salary =   &(*e[i]).salary
    }
}

int main()
{
    struct Employee employees[3];      // array of 3 Employee structures
    struct Employee *ptr_employees[3]; // array of pointers to Employee structures

    for (int i = 0; i < 3; i++)
    {
        ptr_employees[i] = &employees[i]; // store the address of each Employee structure in ptr_employees array
    }

    input_employee(ptr_employees, 3);

    printf("\nEmployee Information:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Id = %d\n", employees[i].id);
        printf("Name = %s\n", employees[i].name);
        printf("Salary = %d\n\n", employees[i].salary);
    }

    return 0;
}
