

// 4. Write a program to swap values of two int variables without using a third variable

#include<stdio.h>
#include<conio.h>

int main()
{
    int a=70, b=53;
    printf("\n Before swap a = %d , b = %d \n",a,b);
    a=a+b;// a = 70+53 = 123
    b=a-b;// b = 123-53 = 70
    a=a-b;// a = 123-70 = 53
    printf("\n After swap a = %d , b = %d \n",a,b);
    return 0;
}
