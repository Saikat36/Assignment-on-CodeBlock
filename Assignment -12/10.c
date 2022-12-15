


/* 10. Write a recursive function to print reverse of a given number */

#include <stdio.h>

void reverse(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    reverse(num);
    printf("\n\n");
    return 0;
}


void reverse(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n % 10);   // reverse a aga print hobe last digit then reminder ke abr modeulo korta hobe tai aga print holo then reverse call again

    reverse(n / 10);
}