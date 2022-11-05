

 // 10. WAP to take date as an input in below given format and convert
 //     the date format and display the result as given below.

#include<stdio.h>
#include<conio.h>

 int main()
 {
    int day, month , year, hour, min;

    printf("Enter day month and year\n");
    scanf("%d/%d/%d",&day,&month,&year);

    printf("Day = %d , Month = %d , Year = %d \n",day,month,year);

    return 0;
 }
