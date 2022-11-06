
// 5. Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number to check no is 3 digits or not: ");
    scanf("%d",&x);
    if( x>99 && x<1000 )
    {
        printf(" Yes, That's a 3 digit number \n");
    }
    else
    {
        printf(" No, That's Not a 3 digit number \n");
    }
    return 0;
}
