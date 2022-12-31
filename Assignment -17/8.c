

/* 8. Write a program in C to copy one string to another string */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], copy_str[20];
    int len;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin); // sizeof(str) = 20
    str[strlen(str) - 1] = '\0';    // strlen(str) = string length

    len = strlen(str);

    printf("\nThe Copy string is : ");

    for (int i = 0; i <= len; i++) // loop through the string in reverse order
    {
        copy_str[i] = str[i]; // print each character
    }

    printf("%s\n\n",copy_str);

    return 0;
}