

/* WAP to find a particular character in the given string , using 2D string but in "pratice2.c" same question with 1D staring  */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][10], ch;
    int count = 0;


    printf("\n\nEnter 5 names : \n");

    for (int i = 0; i < 5; i++)
    {
        gets(str[i]);        /*     fgets(str[i], sizeof(str), stdin);
                                    str[i][strlen(str) - 1] = '\0';         */
    }

    printf("\n\nEnter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; str[i][j] !='\0'; j++)
        {
            if (ch == str[i][j])
            {
                count++;
            }
        }
    }

    printf("\n\nFrequency of %c = %d\n\n\n", ch, count);
    return 0;
}
