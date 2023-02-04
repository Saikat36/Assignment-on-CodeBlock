

/* 6. Write a function to sort employees according to their names [refer structure from question 1] */

#include <stdio.h>
#include <string.h>

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
            if (strcmp(e[i].name, e[j].name) > 0)
            {
                temp = e[i].name;
                e[i].name = e[j].name;
                e[j].name = temp;
            }
        }
    }
}
