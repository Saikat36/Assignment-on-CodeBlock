

/* 2. Write a program to count the occurrence of a given character in a given string. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // sizeof(str) = 20 
    str[strlen(str) - 1] = '\0';      // strlen(str) = string length

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
        {
            count++;
        }
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}
