

/* 6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called. */

#include <iostream>
using namespace std;

class Square
{
    static int count;
    int sq, i;

public:
    Square(int x)
    {
        i = x;
    }
    void findSqure()
    {
        count++;
        int sq = i * i;
    }
    void print()
    {
        cout << "count is = " << count << endl;
    }
};

int Square::count = 0;

int main()
{
    Square r(5);
    Square p(6);

    r.findSqure();
    p.findSqure();

    r.print();

    return 0;
}