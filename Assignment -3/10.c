
// 10. Write a program which takes the cost price and selling price of a
//     product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
#include<conio.h>

int main()
{
    float cost,selling,percentage;
    printf("Enter the cost price: ");
    scanf("%f",&cost);
    printf("Enter the selling price: ");
    scanf("%f",&selling);

    percentage = cost - selling;

    (selling > cost) ? printf("Profit is %f",percentage/100) : printf("Loss is %f",percentage/100);

    return 0;
}
