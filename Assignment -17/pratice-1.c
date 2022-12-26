
/* WAP to find frequency of all character in the given string */

#include <stdio.h>

int main()
{
    char a[122];
    int i;

    printf("\nEnter a string of lowercase English letters : ");
    
    gets(a);    //fgets(a, sizeof(a), stdin) a run korbena tai gets use kora holo

    int hash[122] = {0};

    for (i = 0; a[i]; i++)
    {
        hash[a[i]]++;
    }
    

    printf("\nThe frequency of characters is -\n");

    for (i = 0; i < 123; i++) 
    {
        if (hash[i] != 0)   
        {    
            printf("\t%c = %d\n", i, hash[i]);
        }
    }
    return 0;
}
