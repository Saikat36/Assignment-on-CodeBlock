
// 16. Write a program to check whether a given character is an alphabet (uppercase), an
//     alphabet (lower case), a digit or a special character.


#include<stdio.h>

int main()
{
    char x;
    printf("Enter a character : ");
    scanf("%c",&x);
    if( x>='A' && x<='Z')
    {
        printf("This is UpperCase Alphabate");
    }
    else if( x>='a' && x<='z')
    {
        printf("This is LowerCase Alphabate");
    }
    else if(x>='0' && x<='9')
    {
        printf("This is a Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}
