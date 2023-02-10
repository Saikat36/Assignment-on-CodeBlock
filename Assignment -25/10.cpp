

/* 10. Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc. */

#include <iostream>
using namespace std;

class Area
{
public:
    double square(double side)
    {
        return side * side;
    }
    double rectangle(double length, double width)
    {
        return length * width;
    }
    double circle(double radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Area area;
    cout << "The area of the square is: " << area.square(2.0) << endl;
    cout << "The area of the rectangle is: " << area.rectangle(2.0, 3.0) << endl;
    cout << "The area of the circle is: " << area.circle(2.0) << endl;
    return 0;
}
