/* WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
Expected output format � �Area of circle is A having the radius R�. Replace A with area & R with radius. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int radious;
    float area;

    printf("Enter the radious : ");
    scanf("%d",&radious);

    area = 3.14*radious*radious;
    printf("Area of circle is %f having the radius %d ",area,radious);
    return 0;
}

