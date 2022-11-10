
//  4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number to check no is Odd or Even: ");
    scanf("%d",&x);

    ( x & 1 ) ? printf("%d is Odd Number",x) : printf("%d is Even",x);

    return 0;
}
