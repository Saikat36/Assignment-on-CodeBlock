

/* 9. Write a program to store information of n students and display them using structure */

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int rollno;
    int marks;
};

int main()
{
    int n;
    struct student *ptr;

    printf("How much student details you want to enter : ");
    scanf("%d", &n);

    ptr = (struct student *)calloc(n, sizeof(struct student));

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dst name :  \n", i + 1);
        scanf("%s", &ptr[i].name);                   //    &ptr[i].name       =     &(ptr + i)->name

        printf("Enter %dst rolllno :  \n", i + 1);
        scanf("%d", &ptr[i].rollno);                 //    &ptr[i].rollno     =     &(ptr + i)->rollno

        printf("Enter %dst marks :  \n", i + 1);
        scanf("%d", &(ptr + i)->marks);              //    &(ptr + i)->marks  =     &ptr[i].marks
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nName = %s , Roll no = %d , Marks = %d\n\n", ptr[i].name, (ptr + i)->rollno, ptr[i].marks);
    } 

    /*  Name = ptr[i].name = saikat ,      Roll no = (ptr + i)->rollno = 34 ,    Marks = ptr[i].marks = 245       */
    /*  Name = (ptr + i)->name =saikat ,   Roll no = ptr[i].rollno  = 34    ,    Marks = (ptr + i)->marks = 245   */

    free(ptr);
    return 0;
}