

/* WAP to search a name in the given list of string */

#include <stdio.h>
#include<string.h>

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