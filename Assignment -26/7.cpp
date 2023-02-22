
/* 7. Define a class Box and write a program to enter length, breadth and height and initialise objects using constructor also define member functions to calculate volume of the box. */

#include <iostream>
using namespace std;

class Box
{
private:
    double length, breadth, height, volume;

public:
    Box(double l = 0, double b = 0, double h = 0)
    {
        length = l;
        breadth = b;
        height = h;
        volume = length*breadth*height;
    }
    void showData();
};

void Box::showData()
{
    cout << "The volume of the Box is: " << volume << endl;
}

int main()
{
    Box c1;
    c1 = Box(7, 2, 5);
    c1.showData();

    cout << endl;
    return 0;
}