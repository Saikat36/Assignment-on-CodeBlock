
// 3. Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number, To check whether this number is Odd or Even: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The no is Odd");
    }
    return 0;
}
