

/* 2. Write a function to reverse a string. */

#include <stdio.h>
#include <string.h>

void reverse(char *str);
int main()
{
    char str[20];

    printf("\nEnter a string : ");

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    reverse(str);

    printf("\n\nAfter reverse a string, now the string looks like : %s\n\n\n", str);
    return 0;
}

void reverse(char *str)
{
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++)   // if len=6 then (len / 2) = (6/2) = 3
    {
        char temp = str[i];         //   temp = str[0]  ;  temp = str[1]

        str[i] = str[len - i - 1];  //  str[0] = str[5] ;  str[1] = str[4]

        str[len - i - 1] = temp;    //   str[5] = temp  ;  str[4] = temp
    }
}