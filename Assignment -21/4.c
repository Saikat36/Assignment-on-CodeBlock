

/* 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1] */

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

int maxSalary(struct Employee e[], int size)
{
    int max = -1;
    int maxIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (e[i].salary > max)
        {
            max = e[i].salary;
            maxIndex = i;
        }
    }
    printf("\n\nEmployee with the highest salary: %s", e[maxIndex].name);
    return max;     // here maximum salary return 
}

int main()
{
    int n;
    printf("\nHow much Employee data you want to visit : ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter information for employee %d\n", i + 1);

        printf("Enter id: ");
        scanf("%d", &employees[i].id);

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter salary: ");
        scanf("%d", &employees[i].salary);
    }

    long int highestSalary = maxSalary(employees, n);       // Function Call
    printf("\nHighest salary: %ld\n\n\n", highestSalary);

    return 0;
}
