

/* 4. Write a function to transform string into uppercase */

#include <stdio.h>

void toUpper(char *str);

int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    toUpper(str);
    printf("Now this String is: %s",str);
    return 0;
}

void toUpper(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if ((str[i]>='a') && (str[i]<='z'))
        {
            str[i] = str[i] - 32;
        }
        
    }
    
}