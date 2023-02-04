

/* 3. Write a function to display employee data. [ Refer structure from question 1 ] */

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};


void display(struct Employee e)
{
    printf("\nEnter Employee Id:  %d \n",e.id);

    printf("\nEnter Employee Name:  %s\n", e.name);

    printf("\nEnter Employee Salary: %d\n",e.salary);

}

int main()
{
    struct Employee e = {123,"prateek", 15000}; 

    printf("\nId = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Salary = %d\n\n", e.salary);
    return 0;
}