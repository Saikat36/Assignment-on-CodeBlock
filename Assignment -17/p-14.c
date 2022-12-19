

/* WAP to find the length of the string */

#include<stdio.h>

int main()
{
    int length = 0;

    char name[] = "argho";

    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length is : %d\n",length);

    return 0;
}