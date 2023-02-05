

/* conclusion = if i want to access object element using pointer then I should use " -> " operator but if I want to access object element using variable then I should use " . " operator */

#include <stdio.h>

struct Employee
{
    char name[20];
    int age;
    int salary;
};

int main()
{
    struct Employee emp1 = {"John Doe", 30, 50000};

    // Accessing structure elements using the dot operator

    printf("Employee name: %s\n", emp1.name);
    printf("Employee age: %d\n", emp1.age);
    printf("Employee salary: %d\n", emp1.salary);



    // Accessing structure elements using a pointer
    
    struct Employee *ptr;
    ptr = &emp1;

    printf("\nEmployee name: %s\n", ptr->name);
    printf("Employee age: %d\n", ptr->age);
    printf("Employee salary: %d\n", ptr->salary);

    return 0;
}
