

/* 5. Write a function to transform a string into lowercase */

#include <stdio.h>

void toLower(char *str);

int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    toLower(str);
    printf("Now this String is: %s",str);
    return 0;
}

void toLower(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if ((str[i]>='A') && (str[i]<='Z'))
        {
            str[i] = str[i] + 32;
        }
        
    }
    
}