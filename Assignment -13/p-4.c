

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
        return x * power(x, y - 1);
    }
    else
    {
        return power(x, y + 1)/x;
    }
}

int main()
{
    int n, m;
    printf("\nEnter a no: ");
    scanf("%d %d", &n, &m);
    printf("\nPower of %d no is: %f  \n\n", n, power(n, m));
    return 0;
}