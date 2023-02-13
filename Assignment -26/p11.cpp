
                            /* friend function  */

#include <iostream>
using namespace std;

class ABC
{
    int x, y;

public:
    ABC()       // Default constructor
    {
    }

    ABC(int a, int b)   // Paramater constructor
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << "x = " << x << " , y = " << y << endl;
    }
    
    friend ABC add(ABC a, ABC b);       // friend function declere
};

ABC add(ABC p, ABC q)                 // friend function define
{
    ABC temp;                  // temp is object
    temp.x = p.x + q.x;
    temp.y = p.y + q.y;

    return temp;
}

int main()
{
    ABC a(2, 5), b(10, 9), c;

    c = add(a, b);

    c.print();

    return 0;
}
