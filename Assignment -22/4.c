

/* 4. Write a program to take input from user and print text using dynamic memory allocation. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int n;

    printf("\nEnter no of values you want to enter :  ");
    scanf("%d", &n);

    str = (char *)malloc(n * sizeof(char));

    printf("\nEnter a string: ");
    scanf("%s",&str[0]);            // store string in dynamic memory

    printf("\nThe entered string is: %s\n\n",str);

    free(str);

    return 0;
}
