

/*  8. Write a function to count words in a given string  */

/* orthat kono string a space pela sekhana count korta hobe tobe word count hobe */

#include<stdio.h>

int main()
{
    char a[] = "My Name is Saikat";
    int count = 0;

    for (int i = 0; a[i] ; i++)
    {
        if (a[i] == ' ')
        {
            count++;
        }
    }
    count++;
    printf("\nNumber of words = %d\n\n",count);
    return 0;
}