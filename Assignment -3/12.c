
// 12. Write a program to check whether a given alphabet is in uppercase or lowercase

#include<stdio.h>
#include<conio.h>
int main()
{
    char alpha;
    printf("Enter a Alphabet, to check is it Uppercase or Lowercase:  ");
    scanf("%c",&alpha);

    if( alpha>=65 && alpha<=91)
    {
        printf("Yes this is uppercase Alphabet");
    }
    else if( alpha>=97 && alpha<=123 )
    {
        printf("This is lowercase Alphabet");
    }
    else{
        printf("Not Upper-case or Not lower-case");
    }
    return 0;
}
