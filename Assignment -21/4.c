

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
    for (int i = 0; i < size; i++)
    {
        if (e[i].salary > max)
        {
            max = e[i].salary;
        }
        
    }
    return max;
}