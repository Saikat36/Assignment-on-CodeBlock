

/* 6. Write a program to reverse a string. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int len;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin); // sizeof(str) = 20
    str[strlen(str) - 1] = '\0';    // strlen(str) = string length

    len = strlen(str);

    printf("\nReversed string: ");

    for (int i = len; i >= 0; i--) // loop through the string in reverse order
    {
        printf("%c", str[i]); // print each character
    }

    printf("\n\n");

    return 0;
}