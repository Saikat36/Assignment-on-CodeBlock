

/* 7. Write a function to check whether a given string is palindrome or not. */

#include <stdio.h>
#include <string.h>

int ispalindrome(char *str);
int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    int res = ispalindrome(str);
    if (res)
    {
        printf("\nYES! This string is palindrome\n\n");
    }
    else
    {
        printf("\nNO! This string is not a palindrome\n\n");
    }
    return 0;
}

int ispalindrome(char *str)
{
    int start = 0;
    int end = strlen(str) - 1;

    while (end > start)
    {
        if (str[start++] != str[end--])
        {
            return 0;
        }
    }
    return 1;
}