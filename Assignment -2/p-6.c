

// Find Upper Case character & Find Lower Case character
#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if (x >= 'A' && x<='Z')
    {
        printf("Uppercase Alphabet");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("Lowercase Alphabet");
    }

    else if(x >= '0' && x<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }

    return 0;
}
