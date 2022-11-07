
// 15. Write a program to check whether a given number is positive, negative or zero

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if( x>0 )
    {
        printf("This no is Possitive");
    }
    else if(x==0)
    {
        printf("This no is Zero");
    }
    else
    {
        printf("This is negative no");
    }
    return 0;
}
