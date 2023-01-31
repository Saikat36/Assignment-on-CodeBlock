

/* 2. Write a function to swap strings of two char arrays of calling functions. */

#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2)
{
    char temp[20];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main()
{
    char str1[20], str2[20];
    
    printf("\nEnter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    printf("\nBefore swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    swap(str1, str2);
    
    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n\n", str2);
    
    return 0;
}
