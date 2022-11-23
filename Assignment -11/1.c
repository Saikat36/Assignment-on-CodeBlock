

/* 1. Write a function to calculate LCM of two numbers. (TSRS) */

#include <stdio.h>

int Lcm(int a, int b);

int main()
{
    int x, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = Lcm(a, b);
    printf("LCM is: %d", x);
    return 0;
}

int Lcm(int a, int b)
{
    for (int L = a > b ? a : b; L <= a * b; L++)
    {
        if (L % a == 0 && L % b == 0)
        {
            return L;
        }
    }
}