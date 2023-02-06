

                /*      DMA  on  structure     */

#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    char name[20];
    int age;
};

int main()
{
    struct Employee *e;
    int count,i;

    printf("Enter number of records\n");
    scanf("%d",&count);

    e = (struct Employee *) calloc(count,sizeof(struct Employee));

    for(i = 0 ; i < count ; i++)
    {
        printf("Enter %d Employee name\n",i+1);
        fflush(stdin);
        fgets((e+i)->name ,  20 , stdin);

        printf("Enter its age\n");
        scanf("%d",&(e+i)->age);
    }

    for(i = 0 ; i < count ; i++)
    {
        printf("Name = %s , Age = %d\n",(e+i)->name,(e+i)->age);
    }

    free(e);        // Do-not forget to free the calloc function

    return 0;
}
