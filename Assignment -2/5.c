

/* 5. Write a program to input a three digit number and display the sum of the digits. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,z, sum_of, main_number;

    printf("Enter a three digit number:");
    scanf("%d",&main_number);

    x = main_number%10;
    main_number = main_number/10;
    printf("\nLast Digit: %d\n",x);
    printf("After Devision with 10, Reminder is : %d\n\n",main_number);

    y = main_number%10;
    main_number = main_number/10;
    printf("Middle Digit: %d\n",y);
    printf("After Devision with 10, Reminder is : %d\n\n",main_number);

    z = main_number%10;
    main_number = main_number/10;
    printf("First Number: %d\n",z);
    printf("After Devision with 10, Reminder is : %d\n\n",main_number);

    sum_of = x+y+z;

    printf("Sum of all three digit number is : %d\n\n",sum_of);

    return 0;
}
