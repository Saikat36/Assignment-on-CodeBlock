

/* 4. Write a C++ program to calculate the area of a circle */

#include <iostream>
using namespace std;

class area_of_the_circle
{

    public: // Access Moifier

        int p;

        area_of_the_circle(int a)            // Constructor
        {
            p = a;
        }

        float find_area();                  // decleration
};

float area_of_the_circle :: find_area()     // defeation
{
    return (3.14*p*p);
}


int main()
{
    int x;

    cout << "Enter the Radious of the circle : " << endl;
    cin >> x ;

    area_of_the_circle rad = area_of_the_circle(x); // Pass area_of_the_circle(int a)

    cout << "The area of a circle is :  " <<rad.p<< endl;

    return 0;
}