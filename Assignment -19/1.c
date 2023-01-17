

/* Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user. */

#include <stdio.h>

int main()
{
    char strings[5][100]; // 2D array to store the strings
    int i, j, count;

    printf("Enter 5 strings: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", strings[i]); // taking input of the strings
    }

    for (i = 0; i < 5; i++)
    {
        count = 0; 

        for (j = 0; strings[i][j] != '\0'; j++)
        {
            if (strings[i][j] == 'a' || strings[i][j] == 'e' || strings[i][j] == 'i' || strings[i][j] == 'o' || strings[i][j] == 'u' || strings[i][j] == 'A' || strings[i][j] == 'E' || strings[i][j] == 'I' || strings[i][j] == 'O' || strings[i][j] == 'U')
            {
                count++;
            }
        }
        printf("Number of vowels in string %d: %d\n", i + 1, count);
    }

    return 0;
}
