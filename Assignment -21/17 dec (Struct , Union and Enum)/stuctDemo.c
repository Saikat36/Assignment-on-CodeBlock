


#include<stdio.h>

struct Employee
{
    char name[20];
    int salary;
    int age;
};

int main()
{
    struct Employee e = {.name = "prateek" , .age = 21 ,.salary = 150};   // This is called = " Designated Initialisation "

    printf("\nName = %s\n",e.name);
    printf("Salary = %d\n",e.salary);
    printf("Age = %d\n",e.age);

    e.salary = 1000;
    printf("\nName = %s\n",e.name);
    printf("Salary = %d\n",e.salary);
    printf("Age = %d\n",e.age);

    return 0;
}
