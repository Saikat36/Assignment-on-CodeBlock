
/* 1. Write a program to find the Nth term of the Fibonnaci series */

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, a = 0, b = 1, c = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("The %dth fibonnacci number is %d", num, b);
    return 0;
}