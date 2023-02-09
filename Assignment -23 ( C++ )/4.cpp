

/* 4. Write a C++ program to calculate the area of a circle */

#include <iostream>
using namespace std;

int main()
{
    float area, radious;

    cout << "\nEnter the Radious of the circle : " << endl;
    cin >>  radious;

    area = 3.14 * radious*radious;

    cout << "The area of a circle is :  " <<area<< endl;

    return 0;
}