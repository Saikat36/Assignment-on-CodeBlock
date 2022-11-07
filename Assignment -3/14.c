
// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.


#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if( x%7==0 || x%3==0 )
    {
        printf("Yes! This no is divisible by 7 or 3");
    }
    else
    {
        printf("This no is not divisible by 7 or 3 ");
    }
    return 0;
}
