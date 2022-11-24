

/* 8. Write a function to print PASCAL Triangle. (TSRN) */

//                         0C0
//                     1C0     1C1
//                 2C0     2C1    2C2
//             3C0    3C1     3C2     3C3

#include <stdio.h>

int Combination(int, int);
void pascal(int n);
int factor(int);

int main()
{
    int n, r;
    printf("\n Enter n for nCr: ");
    scanf("%d", &n);
    printf("\n Enter r for nCr: ");
    scanf("%d", &r);
    pascal(n);
    return 0;
}

void pascal(int n)
{
    for (int j = 0; j <= n; j++)
    {
        for (int r = 0; r <= j; r++)
        {
            printf("%d ", Combination(j, r));
        }
        printf("\n");
    }
}

int Combination(int n, int r) // nCr = n! / r!*(n-r)!
{
    return factor(n) / (factor(r) * factor(n - r));
}

int factor(int x)
{
    int fac = 1;

    while (x > 0)
    {
        fac = fac * x;
        x--;
    }

    return fac;
}
