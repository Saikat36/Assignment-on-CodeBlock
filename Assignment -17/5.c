

/* 5. Write a program to convert a given string into lowercase */


#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);   // sizeof(str) = 20 
    str[strlen(str) - 1] = '\0';      // strlen(str) = string length


    for (int i = 0; str[i] ; i++)
    {
        if (str[i]>='A'&& str[i]<='Z')
        {
           str[i] = str[i] +32;
        }
        else{
            continue;
        }
    }

    printf("\nAfter converting to lowercase now the string is: %s \n\n", str);
    return 0;
}