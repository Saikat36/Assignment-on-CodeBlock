


/* 10. Write a recursive function to print reverse of a given number */

#include <stdio.h>

void binary(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    binary(num);
    printf("\n\n");
    return 0;
}


void binary(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n % 10);
    binary(n / 10);
}