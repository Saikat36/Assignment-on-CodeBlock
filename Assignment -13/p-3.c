

/* 9. Write a program in C to count the digits of a given number using recursion */

#include <stdio.h>

int count(int x)
{

    if (x == 0)
    {
        return 0;
    }
    else
    {
        return (count(x / 10) + 1);
    }
}

int main()
{
    int x;
    printf("\nEnter a no: ");
    scanf("%d", &x);
    printf("\nDigits of the number is: %d\n\n", count(x));
    return 0;
}