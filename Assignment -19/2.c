

/* 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][20];
    char temp[10];

    printf("\nEnter 10 city name : \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%s", &str[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\n\nAfter sorting 10 city \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", str[i]);
    }

    printf("\n\n\n");

    return 0;
}