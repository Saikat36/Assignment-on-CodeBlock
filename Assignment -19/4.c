

/* 4. Write a program to search a string in the list of strings. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][10] = {{"prateek"},
                       {"subham"},
                       {"saikat"},
                       {"milan"},
                       {"arnab"}};

    char name[10] = "milan";

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(name, str[i]) == 0)
        {
            printf("\n String Founded \n\n");
        }
    }

    return 0;
}