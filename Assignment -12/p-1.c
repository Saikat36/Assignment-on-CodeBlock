

/* 8. Write a recursive function to print binary of a given decimal number */

#include <stdio.h>

int binary(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nBinary is: ");
    binary(num);
    printf("\n\n");
    return 0;
}

int binary(int n)
{
    if (n > 0)
    {
        binary(n / 2);
        printf("%d", n % 2); //  vagses print kora holo karon hoi ata 0 or 1 hobe
    }
}