

/* WAP to count no of vowels in a given string */

#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "saikat";
    int count = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            count++;
        }
    }
    printf("\nNo of the Vowel are in the string is: %d\n\n",count);
    return 0;
}