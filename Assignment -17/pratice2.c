


/* WAP to find a particular character in the given string , in "pratice5.c" same question with 2D staring  */



#include <stdio.h>
#include<string.h>

int main()
{
    char str[20], ch;
    int count = 0;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            count++;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}
