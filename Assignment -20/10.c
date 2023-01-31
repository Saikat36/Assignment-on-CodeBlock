


/* 10. Write a program to print a string in reverse using a pointer */

#include <stdio.h>
#include <string.h>

void printReverseString(char *str)
{
    char *end = str + strlen(str) - 1;
    while (end >= str)
    {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main()
{
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    printf("String in reverse: ");
    printReverseString(str);
    
    return 0;
}
