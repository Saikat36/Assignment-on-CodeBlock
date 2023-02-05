

/* 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student. */

#include <stdio.h>

struct Marks
{
    char name[20];
    int rollNo;
    int chem_marks;
    int math_marks;
    int physics_marks;
};

int main()
{
    struct Marks m[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter %dst name :  \n", i + 1);
        scanf("%s", &m[i].name);

        printf("Enter %dst rolllNo :  \n", i + 1);
        scanf("%d", &m[i].rollNo);

        printf("Enter %dst chemestry marks :  \n", i + 1);
        scanf("%d", &m[i].chem_marks);

        printf("Enter %dst math marks :  \n", i + 1);
        scanf("%d", &m[i].math_marks);

        printf("Enter %dst physics marks :  \n", i + 1);
        scanf("%d", &m[i].physics_marks);
    }

    for (int i = 0; i < 5; i++)
    {
        float total = (m[i].physics_marks + m[i].math_marks + m[i].chem_marks) / 3.0;
        printf("\n\nName = %s , Roll no = %d , Marks = %f\n\n", m[i].name, m[i].rollNo, total);
    }
    return 0;
}