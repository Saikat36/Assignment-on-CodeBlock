

/* 5. Write a program to find the maximum number between two numbers using a pointer */

#include <stdio.h>

void findmax(int *a,int *b,int *max);

int main()
{
    int a, b, max;

    printf("\nEnter 1st no: ");
    scanf("%d", &a);

    printf("\nEnter 2nd no: ");
    scanf("%d", &b);

    findmax(&a, &b, &max);

    printf("\nMaximum no is : %d\n\n",max);

    return 0;
}

void findmax(int *a,int *b,int *max)
{
    *max = (*a > *b) ? *a : *b;
}