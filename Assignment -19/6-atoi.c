

/* atoi() — Convert Character String to Integer */
/* atoi() — ascii to int */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int Store;
    char *s;

    s = "-98Fg74";

    /* The function stops when it encounters a non-numeric character, so if the string contains any non-numeric characters, the conversion will stop at that point, and any characters after that will be ignored. */

    Store = atoi(s);

    printf("\nStore = %d\n\n", Store); /* Store = -98 */

    return 0;
}