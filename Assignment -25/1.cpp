

/* 1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex number */

#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "Number = " << a << " + " << b <<"i"<< endl;
    }
};

int main()
{
    Complex c(2,3);
    c.print();
    return 0;
}
