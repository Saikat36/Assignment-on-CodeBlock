
/*10. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349) */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 234;
    int b = 98;
    int c;
    int temp = b;

    if(b==0)
    {
        c=a*10;
    }
    else if(b>0)
    {
        while(temp!=0)
        {
            temp=temp/10;  // 9, 0
            a=a*10;     // 2340, 23400
            //printf("%d\n",a);
        }
        c = a+b;  //  23400 + 98 = 23498
    }
    printf("%d",c);

    return 0;
}
