

/* 8. Define a class Rectangle and define an instance member function to find the area of the
Rectangle. */

#include <iostream>
using namespace std;

class Rectangle
{
    int area, l, b;

public:
    Rectangle(int x, int y)
    {
        l = x;
        b = y;
    }

    void Areas()
    {
        area = l * b;
    }

    void print()
    {
        cout << "\nRectangle area " << area << "\n" << endl;
    }
};

int main()
{
    Rectangle p(3, 5);
    p.Areas();
    p.print();
    return 0;
}