

/* 4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class */

#include <iostream>
using namespace std;

class LargestNum
{
    int largestNum;
    int x, y, z;

public:
    LargestNum(int a, int b, int c)
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
        cout << "Largest of " << x << " , " << y << " , " << z << " is :   " << largestNum << endl;
    }
};

int main()
{
    LargestNum p(3,5,2);
    p.findLargestNum();
    p.print();
    return 0;
}