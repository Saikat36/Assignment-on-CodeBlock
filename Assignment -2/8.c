

//8. Write a program to print size of an int, a float, a char and a double type variable


#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    float y;
    double z;
    char p;

    printf("Size of int: %d\n",sizeof(x));
    printf("Size of float: %d\n",sizeof(y));
    printf("Size of double: %d\n",sizeof(z));
    printf("Size of char: %d\n",sizeof(p));

    return 0;
}
