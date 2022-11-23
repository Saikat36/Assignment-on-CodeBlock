

/* 2. Write a function to calculate HCF of two numbers. (TSRS) */

#include <stdio.h>

int hcf(int a, int b);

int main()
{
    int x, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = hcf(a, b);
    printf("HCF is: %d", x);
    return 0;
}

int hcf(int a, int b)
{
    int hcf = 1;
    int min = (a < b) ? a : b;

    for (int L = 1; L <= min; L++)
    {
        if (a % L == 0 && b % L == 0)
        {
            hcf = L;
        }
    }
    return hcf;
}