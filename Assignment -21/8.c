

/* 8. Write a program to store information of 10 students and display them using structure */

#include <stdio.h>

struct student
{
    char name[20];
    int rolllno;
    int marks;

} s[10];

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d students name :  ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter %d students roll no :  ", i + 1);
        scanf("%d", &s[i].rolllno);

        printf("Enter %d students marks : ", i + 1);
        scanf("%d", &s[i].marks);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Name = %s , Roll no = %d , Marks = %d\n\n", s[i].name, s[i].rolllno, s[i].marks);
    }

    return 0;
}