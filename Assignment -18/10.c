

/* 10. Write a function to find the repeated character in a given string */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[122];
    int i;

    printf("\nEnter a string of Higher or Lowercase English letters : ");

    /* use gets(str) or fgets(str, sizeof(str), stdin)  */

    fgets(str, sizeof(str), stdin);    // sizeof(str) = 122 
    str[strlen(str) - 1] = '\0';       // strlen(str) = string length

    int hash[122] = {0};
    
    for (i = 0; str[i]; i++)
    {
        hash[str[i]]++;
    }

    printf("\nThe repeated character in the given string is -\n");

    for (i = 0; i < 123; i++)
    {
        if (hash[i]==2)
        {
            printf("\t%c = %d\n", i, hash[i]);
        }
    }
    return 0;
}