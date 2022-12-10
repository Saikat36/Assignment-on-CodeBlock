

/* 10. Write a program in C to calculate the power of any number using recursion */

#include <stdio.h>

int power(int n, int m)
{
    if (m == 1)
    {
        return n;
    }
    else
    {
        return n * power(n, m - 1);
    }
}

int main()
{
    int n, m;
    printf("\nEnter a no: ");
    scanf("%d %d", &n, &m);
    printf("\nPower of %d no is: %d\n\n", n, power(n, m));
    return 0;
}