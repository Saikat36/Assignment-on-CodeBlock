

// 1. Write a program to print unit digit of a given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    x = x%10;
    printf("The unit digit of the given number is : %d \n",x);
    return 0;
}
