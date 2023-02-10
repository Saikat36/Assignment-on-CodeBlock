

/* 7. Define a class Greatest and define instance member function to find Largest among 3
numbers using classes. */

#include <iostream>
using namespace std;

class Greatest
{
    int largestNum;
    int x, y, z;

public:
    Greatest(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void findLargestNum()
    {
        largestNum = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    }

    void print()
    {
        cout << "\nGreatest between " << x << " , " << y << " , " << z << " is :   " << largestNum << "\n"
             << endl;
    }
};

int main()
{
    Greatest p(3, 5, 2);
    p.findLargestNum();
    p.print();
    return 0;
}