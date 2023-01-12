

/* WAP to search a name in the given list of string */

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

/*
strcmp("a", "a"); // returns = 0 , as ASCII value of "a" and "a" are same i.e 97

strcmp("a", "c"); // returns = -1 , as ASCII value of "a" (97) is less than "c" (99)

strcmp("z", "d"); // returns = 1  , as ASCII value of "z" (122) is greater than "d" (100)

strcmp("abc", "abe"); // returns = -1 , as ASCII value of "c" (99) is less than "e" (101)

strcmp("apples", "apple"); // returns = 1 , as ASCII value of "s" (115) is greater than "\0" (101)

 */