

/* 5. Write a C++ program to calculate the volume of a cuboid. */

#include <iostream>
using namespace std;

int main()
{
    float area, l,b,h;

    cout << "\nEnter the Length, Breath and Height of the cuboid :  " << endl;
    cin >>  l>>b>>h;

    area = l*b*h;

    cout << "Volume of a cuboid is :  " <<area<< endl;

    return 0;
}