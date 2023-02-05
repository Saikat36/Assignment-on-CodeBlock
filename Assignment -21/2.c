

/* 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ] */


#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

void input_employee(struct Employee *e)
{
    printf("Enter ID: ");
    scanf("%d", &e->id);        //   &e->id    =   &(*e).id 

    printf("Enter Name: ");
    scanf("%s", e->name);       //   e->name   =   (*e).name

    printf("Enter Salary: ");
    scanf("%d", &e->salary);    //  &e->salary =   &(*e).salary
}

int main()
{
    struct Employee e;
    input_employee(&e);

    printf("\nId = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Salary = %d\n", e.salary);
    return 0;
}