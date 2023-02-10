

/* 9. Define a class Circle and define an instance member function to find the area of the
circle */

#include <iostream>
using namespace std;

class Circle
{
    float radious,area;

public:
    Circle(int x)
    {
        radious = x;
    }

    void Areas()
    {
        area = 3.14 * radious * radious;
    }

    void print()
    {
        cout << "\nCircle area " << area << "\n" << endl;
    }
};

int main()
{
    Circle p(3.5);
    p.Areas();
    p.print();
    return 0;
}