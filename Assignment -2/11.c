

// 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
//     and convert it into USD.

#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    float y;
    printf("Enter INR Amount: ");
    scanf("%d",&x);
    y = x/76.23;
    printf("After convert, The amount is: %f",y);
    return 0;
}
