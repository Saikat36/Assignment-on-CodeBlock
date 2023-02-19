
/* 1. Define a class Complex to represent a complex number with instance variables a and b
to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex) */

#include <iostream>
using namespace std;

class Complex
{
private:
    int a,b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex() // Default Constructor
    {
    }

    void showData()
    {
        cout << "Number = " << a << " + " << b << "i" << endl;
    }

    Complex add(Complex c)
    {
        Complex temp;       // temp is a object
        temp.a = a + c.a;   // a = c1 ar a,    // c.a holo c2 er a
        temp.b = b + c.b;   // b = c1 ar b,    // c.b holo c2 er b
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(2, 3);
    c2.setData(5, 7);

    c3 = c1.add(c2);    // c1 Implicitly call  ,   c2 Explicitly call
    c3.showData();

    return 0;
}
