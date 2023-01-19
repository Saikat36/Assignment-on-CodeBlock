

/* The strchr() function is a C standard library function that is used to search for the first occurrence of a specific character in a given string. The function takes two arguments: the first is a pointer to the string in which the search is to be performed, and the second is the character that is being searched for. The function returns a pointer to the first occurrence of the character in the string, or a null pointer if the character is not found. */

        /*        Syntax:       char *strchr(const char *str, int c);         */

// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char myStr[] = "Hello,World!";
//     char *p;

//     p = strchr(myStr, 'o');  // strchr return kore pointer tai pointer variable a store kora holo 

//     if (p)
//     {
//         printf("The character 'o' is found in the string at position: %d\n", p - myStr + 1 );
//     }
//     else
//     {
//         printf("The character 'o' is not found in the string.\n");
//     }

//     return 0;
// }



/* 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out */

#include <stdio.h>
#include <string.h>

int main()
{
    char emails[5][20];
    int i;

    printf("Enter 5 email addresses: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", emails[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (strchr(emails[i], '@') == NULL)
        {
            printf("Invalid email: %s\n", emails[i]);
        }
    }

    return 0;
}
