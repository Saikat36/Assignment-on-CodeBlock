

/* 7. Write a program to count the number of vowels and consonants in a string using a pointer. */

#include <stdio.h>
#include <string.h>

int vowel(char *str)
{
    int len = 0;

    while (*str != '\0')
    {
        if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            len++;
        }
        str++;
    }

    return len;
}

int main()
{
    char str[20];
    printf("\nEnter a string :  ");
    scanf("%s", str);    // char array te scanf a "&" hoina 

    printf("\nVowel of the string: %d\n", vowel(str));
    printf("\nConsonants of the string: %d\n\n\n", strlen(str) - vowel(str));

    return 0;
}