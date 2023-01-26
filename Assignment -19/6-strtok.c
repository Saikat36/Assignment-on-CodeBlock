


/* strtok function in c programming */
/* strtok = string to token */


#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "This is a sample sentence.";
    char *p = string;
    char *token = strtok(p, " ");
    printf("\n\n");
    printf("token return 1st string address - %s",token);
    printf("\n\n\n");

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    printf("\n\n");
    printf("%s",string);    // nicha 2nd point dekho - It's important to ....
    printf("\n\n\n");

    return 0;
}

/* 
        In the line of code -        token = strtok(NULL, " ");

1. the NULL argument is used to tell the strtok function to continue parsing the original string from the point where it left off on the previous call.

2. It's important to note that the strtok function modifies the original string by replacing the delimiter character(s) with null characters, so the original string will be modified after the first call to strtok.


*/