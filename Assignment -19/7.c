

/* 7. From the list of IP addresses, check whether all ip addresses are valid. */

/*

1. valid IP address range is = [ 0 - 255 ]
2. also IP address have 4 no not any character, example = 200.100.30.20

if a IP address is 354.643.123.0 then it is invalid bcz it's out of range
if a IP address is 34.47.12 then it is invalid bcz it has 3 no

*/


/* SUKLA VIDEO TAI DEKHTA HOBA AI ANS TA  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int validate_number(char *str)
{
    while (*str)
    {
        if (isdigit(*str) == 0)
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int validate_ip(char *ip)
{
    int i, num, dots = 0;
    char *ptr;

    if (ip == NULL)
    {
        return 0;
    }

    ptr = strtok(ip, "."); /* String to token */

    if (ptr == NULL)
    {
        return 0;
    }

    while (ptr)
    {
        if (!validate_number(ptr))
        {
            return 0; // 29
        }

        num = atoi(ptr);
        if (num >= 0 && num <= 255)
        {
            ptr = strtok(NULL, ".");

            if (ptr != NULL)
            {
                dots++;
            }
            else
            {
                return 0;
            }
        }
    }

    if (dots != 3)
    {
        return 0;
    }

    return 1;
}

int main()
{
    char ip[][20] = {"192.165.32.12",
                     "173.64.213.74",
                     "17.64.23.54",
                     "18.684.279.abc"};
    
    int i;

    for (i = 0; i < 4; i++)
    {
        validate_ip(ip[i]) ? printf("Valid\n") : printf("Invalid\n");
    }
    
    return 0;
}