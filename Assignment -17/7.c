

/* 7. Write a program in C to count the total number of alphabets, digits and special characters in a string. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int alphabets, digits, special;
    alphabets = digits = special = 0; // initialize the counts to 0

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] != ' ') // space kono spacial character noi ota bad dea
        {
            special++;
        }
    }

    printf("\nNumber of alphabets: %d\n", alphabets);
    printf("\nNumber of digits: %d\n", digits);
    printf("\nNumber of special characters: %d\n\n", special);

    return 0;
}
