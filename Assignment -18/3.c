
/* 3. Write a function to compare two strings */

#include <stdio.h>

int compare_strings(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else if (str1[i] == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char *str1 = "hello";
    char *str2 = "world";
    int result = compare_strings(str1, str2);
    if (result == 0)
    {
        printf("\nThe strings are equal\n\n");
    }
    else
    {
        printf("\nThe strings are not equal\n\n");
    }
    return 0;
}
