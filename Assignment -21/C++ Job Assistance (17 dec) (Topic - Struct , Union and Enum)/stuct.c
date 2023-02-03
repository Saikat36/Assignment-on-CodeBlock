#include<stdio.h>

struct Employee
{
    char name[20];
    int age;
};

int main()
{
    struct Employee e[5];
    int i;

    for(i = 0 ; i <5 ; i++)
    {
        printf("Enter %d Employee name\n",i+1);
        fflush(stdin);
        fgets(e[i].name,20,stdin);

        printf("Enter its age\n");
        scanf("%d",&e[i].age);
    }

    for(i = 0 ; i<5 ; i++)
    {
        printf("Name =  %s , Age = %d\n",e[i].name,e[i].age);
    }
    return 0;
}
