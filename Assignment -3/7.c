
// 7. Write a program to check whether roots of a given quadratic equation
//    are real & distinct, real & equal or imaginary roots

#include<stdio.h>
#include<conio.h>

int main()
{
    // quadratic equation -  ax^2 + bx + c = 0

    double a,b,c,discriminant;
    printf("Enter 3 number: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    // In the case of a quadratic equation ax^2 + bx + c = 0,
    // the discriminant is = b^2 − 4*a*c

    discriminant = (b*b) - (4*a*c);

    if( discriminant > 0 )
    {
        printf("Real and discriminant");
    }
    else if( discriminant == 0 )
    {
        printf("Real and equal");
    }
    else
    {
        printf("imaginary roots");
    }
    return 0;
}
