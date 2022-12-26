
/* WAP to find frequency of all character in the given string */

#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("\nEnter a string of lowercase English letters : ");
    fgets(str, sizeof(str), stdin);

    int hash[26] = {0};

    for (i = 0; str[i]; i++)
    {
        hash[str[i] - 'a']++; // if str[200] = "saikat", then :
    }
    // hash[str[0]-'a']++ = hash['s'-'a']++ = hash[115-97]++ = hash[18]++ = 0++ = 1

    printf("\nThe frequency of characters is -\n");

    for (i = 0; i < 26; i++) /* saikat name a 's' as6a i=18 th no a jahatu start hoa6a 0 theka */
    {
        if (hash[i] != 0) /*  hash[0] != 0 because hash[0] = a,
                              hash[8] != 0 because hash[8] = i ,
                              hash[18] != 0 because hash[18] = s,  kintu baki i ar je kono no a hash[i]=0 a6a  */
        {
            char store_character = 'a' + i; /* i=0 , store_character = 97+ 0 = 97 = a,
                                               i=18, store_character = 97+18 = 115 = s,
                                               i=8, store_character = 97+ 8 = 105 = i, */

            printf("\t%c = %d\n", store_character, hash[i]);
        }
    }
    return 0;
}
