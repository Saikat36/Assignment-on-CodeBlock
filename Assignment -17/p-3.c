
/* WAP to find frequency of all character in the given string */

#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string of lowercase English letters : ");
    fgets(str, sizeof(str), stdin);

    int hash[26] = {0};

    for (i = 0; str[i]; i++)
    {
        // increment character count at the ith position by 1
        hash[str[i] - 'a'] += 1;
    }

    printf("The frequency of characters is -\n");
    for (i = 0; i < 26; i++)
    {
        if (hash[i] != 0)
        {
            // here, we can obtain characters by adding the ASCII value of 'a'
            // ASCII(b) = ASCII(a) + 1
            char char_ = 'a' + i;
            printf("\t%c = %d\n", char_, hash[i]);
        }
    }
    return 0;
}
