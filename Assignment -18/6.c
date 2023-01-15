

/* 6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit) */


#include<stdio.h>

int main()
{
    char name[] = "saikat123@gmail.com";
    int length = 0, i =0;
    int digit = 0, alpha = 0, special = 0;

    while (name[i])
    {
        if ((name[i]>='a' && name[i]<='z')||(name[i]>='A' && name[i]<='Z'))
        {
            alpha++;
        }
        else if (name[i]>='0' && name[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }

        i++;
    }
    
    printf("\n\nDigit count = %d , Alpha count = %d , Special character = %d\n\n\n",digit,alpha,special);

    return 0;
    
}