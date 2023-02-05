

/* 1. Define a structure Employee with member variables id, name, salary */

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct Employee e = {123,"prateek", 15000}; 

    printf("\nId = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Salary = %d\n", e.salary);
    return 0;
}