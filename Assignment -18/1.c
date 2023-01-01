

/* 1. Write a function to calculate length of the string */

#include <stdio.h>
#include <string.h>

int get_length(char str);
int main()
{
    char str[20];

    printf("Length is: %d",length(str);
}

int length(char str)
{
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strlen(str) - 1] = '\0';
}