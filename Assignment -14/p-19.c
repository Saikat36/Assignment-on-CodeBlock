

/* WAP to copy a string from one string to another onr string */

#include <stdio.h>

int main()
{
    char a[10] = "prateek", b[10];
    int i = 0;

    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';

    printf("copy string is %s\n\n", b);

    return 0;
}