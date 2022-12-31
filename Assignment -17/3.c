

/* 3. Write a program to count vowels in a given string */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int len, count = 0;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    len = strlen(str);
    printf("\nString length is: %d\n", len);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == "A" ||
            str[i] == "E" || str[i] == "I" ||
            str[i] == "O" || str[i] == "U")
        {
            count++;
        }
    }
    printf("\nVowels in the String is: %d\n\n", count);
    return 0;
}