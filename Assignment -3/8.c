
// 8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main()
{
    int year;
    printf("Enter a Year to check whether this given year is a leap-year or not :  ");
    scanf("%d",&year);

    if( year%400==0 || year%4==0 && year%100!=0)
    {
        printf("\n %d is leap-year",year);
    }
    else
    {
        printf("\n %d is Not a leap-year",year);
    }
    return 0;
}
