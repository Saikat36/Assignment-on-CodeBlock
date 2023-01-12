

/* 9. Write a C program to sort a string array in ascending order. */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[122];
    int i;

    printf("\nEnter a string of Higher or Lowercase English letters : ");

    /* use gets(a) or fgets(a, sizeof(a), stdin)  */

    fgets(str, sizeof(str), stdin);    // sizeof(str) = 122 
    str[strlen(str) - 1] = '\0';       // strlen(str) = string length

    int hash[122] = {0};

    for (i = 0; str[i]; i++)
    {
        hash[str[i]]++;
    }

    printf("\nIn ascending order the string is - ");

    for (i = 0; i < 123; i++)
    {
        if (hash[i])
        {
            printf("%c", i);     // i = 65 a "%c" ar jonno print hobe "a"
        }
    }
    printf("\n\n\n");
    return 0;
}