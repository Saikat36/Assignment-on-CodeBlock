

/* 5. Write a program to check whether two given numbers are co-prime numbers or not */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, store;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            store = i;
        }
    }

    if (store == 1)
    {
        printf("The HCF of two numbers %d and %d are co-prime", x, y);
    }
    else{
        printf("The HCF of two numbers %d and %d are not co-prime", x, y);
    }
    printf("\n");
    return 0;
}