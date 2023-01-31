

/* 6. Write a program to calculate the length of the string using a pointer */

#include <stdio.h>

int length(char *str)
{
    int len = 0 ;           // if i = 0;

    while (*str != '\0')    // str[i] != 0; 
    {
        len++;
        str++;              // i++ ;
        
        // str++ means pointer++
    }
    return len;
}

int main()
{
    char str[20];
    int len;
    
    printf("\nEnter a string: ");
    scanf("%s", str);
    
    len = length(str);
    
    printf("\nLength of the string: %d\n\n", len);
    
    return 0;
}
