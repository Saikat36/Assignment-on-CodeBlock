


// 10. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)


#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a degit: ");
    scanf("%d",&y);
    x = x*10;
    x = x+y;
    printf("The result value is - %d",x);
    return 0;
}
