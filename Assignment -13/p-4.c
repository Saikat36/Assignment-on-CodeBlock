

/* 10. Write a program in C to calculate the power of any number using recursion */

#include <stdio.h>

float power(float x, float y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y > 0)
    {
        return x * power(x, y - 1); // 2^3 = 2 * 2^2
    }
    else
    {
        return power(x, y + 1) / x; // y = -1, power(2,-1 + 1)/2 = power(2,0)/2 = 0.50
    }                               // y = -2, power(2,-1)/2 = (power(2,0)/2)/2 = 0.25
}

int main()
{
    int n, m;
    printf("\nEnter a no: ");
    scanf("%d %d", &n, &m);
    printf("\nPower of %d no is: %f  \n\n", n, power(n, m));
    return 0;
}