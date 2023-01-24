


/* strtok function in c programming */
/* strtok = string to token */


#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "This is a sample sentence.";
    char *token = strtok(string, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}