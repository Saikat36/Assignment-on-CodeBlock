

/* WAP to copy a string from one string to another one string */

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
    
    b[i] = '\0';    // i=6 a "k" asa galo b[6] a ar por i=7 a "\0" galo b[7] a then string complete

    printf("copy string is %s\n\n", b);

    return 0;
}