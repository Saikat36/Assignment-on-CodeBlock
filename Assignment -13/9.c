

/* 9. Write a program in C to count the digits of a given number using recursion */

#include <stdio.h>

int count(int n)
{
    static int c = 0;

    if (n == 0)
    {
        return c;
    }
    else
    {
        c++;
        count(n / 10);
    }
}

int main()
{
    int n;
    printf("\nEnter a no: ");
    scanf("%d", &n);
    printf("\nDigits of %d number is: %d\n\n", n, count(n));
    return 0;
}