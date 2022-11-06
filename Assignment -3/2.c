
// 2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number, To check whether this number is divisible or not: ");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("The number is Divisible by 5");
    }
    else
    {
        printf("The no is not divisible by 5");
    }
    return 0;
}
