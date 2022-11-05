

// 2. Write a program to print a given number without its last digit.


#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    x = x/10;
    printf("The number is : %d \n",x);
    return 0;
}
