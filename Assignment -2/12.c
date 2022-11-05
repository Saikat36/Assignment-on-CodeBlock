


//  12. Write a program to take a three digit number from the user and rotate its digits by
//      one position towards the right

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y=0,z,temp;
    printf("Enter a Number: ");
    scanf("%d",&x);

    temp = x;    // if x = 243

    while(temp!=0)
    {
        z = temp % 10;  // z = 243 % 10 = 3;   z = 24%10 = 4 ;   z = 2%10 = 2;
        y = y*10 + z;   // y = 0*10 + 3 = 3;   y = 3*10+4 = 34;  y = 34*10+2 = 342;
        temp = temp/10; // temp = 243/10 = 24; temp = 24/10= 2;  temp = 2/10 = 0;
    }
    printf("After Rotation the number is : %d",y);
    return 0;
}
