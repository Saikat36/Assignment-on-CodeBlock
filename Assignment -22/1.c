

/* 1. Define a function to input variable length string and store it in an array without memory wastage. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_and_store_strings(char ***strings, int *n)
{
    char buffer[100];
    *n = 0;
    while (1)
    {
        printf("Enter a string (enter 'exit' to stop): ");
        scanf("%s", buffer);
        if (strcmp(buffer, "exit") == 0)
        {
            break;
        }
        (*n)++;
        *strings = (char **)realloc(*strings, (*n) * sizeof(char *));
        (*strings)[*n - 1] = (char *)malloc(strlen(buffer) + 1);
        strcpy((*strings)[*n - 1], buffer);
    }
}

int main(void)
{
    char **strings = NULL;
    int n;
    input_and_store_strings(&strings, &n);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", strings[i]);
        free(strings[i]);
    }
    free(strings);
    return 0;
}
