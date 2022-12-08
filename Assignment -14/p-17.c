

/* WAP to convert upper case to lowercase & vice varsa */

/* Vice varsa =      PraTeeK => pRAtEEk */

#include <stdio.h>

int main()
{
    int i=0;
    char a[] = "PraTeeK";

    while (a[i] != '\0')
    {
        if ((a[i] >= 'a') && (a[i] <= 'z'))
        {
            a[i] = a[i] - 32;
        }
        else if ((a[i] >= 'A') && (a[i] <= 'Z'))
        {
            a[i] = a[i] + 32;
        }
        i++;
    }
    printf("\n New String is: %s\n\n",a);
    return 0;
    
}