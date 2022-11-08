
// 9. Write a program to find the greatest among three given numbers.
//    Print number once if the greatest number appears two or three times.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if((a > b) && (a > c))
    {
        printf("%d, is greatest",a);
    }
    else if((b > a) && (b > c))
    {
        printf("%d, is greatest",b);
    }
    else if((c > a) && (c > b))
    {
        printf("%d, is greatest",c);
    }
    else if((a==b) || (b==c) || (c==a))
    {
        printf("Greatest Number is Repeated");
    }
    return 0;
}
