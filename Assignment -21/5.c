

/* 5. Write a function to sort employees according to their salaries [ refer structure from question 1] */

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

void sortEmplyee(struct Employee *e, int size)
{
    struct Employee temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
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
