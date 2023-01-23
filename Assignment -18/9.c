

/* 9. Write a function to reverse a string word wise. (For example if the given string is “iNeuron Education Services” then the resulting string should be “Services Education iNeuron” ) */

#include <stdio.h>

void reverse(char *name, int start, int end)
{
    int i, j;

    for (i = start, j = end; i <= j; i++, j--)
    {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
}

int main()
{
    char name[] = "iNeuron Education Services";
    int nullFound = 0;
    int i, j;

    for (i = 0, j = 0; name[j] != '\0';)
    {
        while (name[j] != ' ')
        {
            if (name[j] == '\0')
            {
                nullFound = 1;
                break;
            }
            j = j + 1;
        }

        reverse(name, i, j - 1);

        i = j + 1;

        if (nullFound == 0)
        {
            j++;
        }
    }
    reverse(name, 0, j - 1);
    printf("\n\n%s\n\n", name);
    return 0;
}