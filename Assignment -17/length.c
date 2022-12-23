
/* WAP to find the length of the string */

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int length;

    printf("\nEnter a string to calculate its length\n");
    gets(a);

    length = strlen(a);

    printf("\nLength of the string = %d\n\n", length);

    return 0;
}