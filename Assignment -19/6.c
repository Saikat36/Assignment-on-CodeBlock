

/* 6. Write a program to print the strings which are palindrome in the list of strings. */

#include <stdio.h>
#include <string.h>

int main()
{
    char *strings[] = {"hello", "level", "madam", "racecar", "world"};
    int strings_len = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < strings_len; i++)
    {
        int length = strlen(strings[i]);    // length = strlen(hello) = 5
        int palindrome = 1;

        for (int j = 0; j < length / 2; j++)
        {
            if (strings[i][j] != strings[i][length - j - 1])
            {
                palindrome = 0;
                break;
            }
        }

        if (palindrome)
        {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}

/*
When you declare char *strings[] = {"hello", "world", "level", "madam", "racecar"};, strings is an array of pointers to characters. Each pointer in the array points to the first character of a string, and the strings are stored in memory separately.

When you declare char strings[] = {"hello", "world", "level", "madam", "racecar"};, strings is an array of characters. The strings are stored in consecutive memory locations. Since there is no null character at the end of each string, the program will read past the end of the array and may cause undefined behavior.
*/