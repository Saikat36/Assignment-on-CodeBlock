

/* 1. Write a function to calculate length of the string */

#include <stdio.h>
#include <string.h>

int cal_Length(char *string);

int main()
{
    char str[20];
    printf("\nEnter a string: ");

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    printf("\nYou entered: %s\n", str);

    int length = cal_Length(str);
    printf("\nlength of the string is : %d", length);

    printf("\n\n");

    return 0;
}

int cal_Length(char *string)
{
    int length = 0;
    while (*string != '\0')
    {
        length++;
        string++;
    }
    return length;
}