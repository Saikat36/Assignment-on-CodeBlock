
/* 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS) */

//  nCr = n! / r!*(n-r)!   ;    nPr = n! / (n-r)!

#include <stdio.h>

int Permutation(int, int);
int Combination(int, int);
int factor(int);

int main()
{
    int n, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &r);

    printf("Permutation is: %d\n", Permutation(n, r));
    printf("Combination is: %d", Combination(n, r));
    return 0;
}

int Permutation(int n, int r)   // nPr = n! / (n-r)!
{
    return factor(n) / factor(n-r);  // akta factor name a function ke call kora sob kaj golo easyly koranor jonno akta function kai only call kora holo
}

int Combination(int n, int r)   // nCr = n! / r!*(n-r)!
{
    return Permutation(n,r) / factor(r);
}


int factor(int x)
{
    int fac = 1;

    while (x>0)
    {
        fac = fac * x;
        x--;
    }
    
    return fac;
}