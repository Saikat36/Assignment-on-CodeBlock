

/* 5. Write a function to sort employees according to their salaries [ refer structure from question 1] */


#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

void sortEmplyee(struct Employee e[], int size)
{
    struct Employee temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (e[i].salary > e[j].salary)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("\nHow much Employee salary you want to shorted : ");
    scanf("%d", &n);
    
    struct Employee employees[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter information for employee %d\n", i + 1);
        printf("Enter id: ");
        scanf("%d", &employees[i].id);
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter salary: ");
        scanf("%d", &employees[i].salary);
    }

    sortEmplyee(employees, n);          // Function Call

    printf("\n\nSorted employee list based on their salaries: \n\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Id: %d, Name: %s, Salary: %d\n\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}
