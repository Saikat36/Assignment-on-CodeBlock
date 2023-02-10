

/* 10. Write functions using function overloading to add two numbers having different data types. */

#include <iostream>
using namespace std;

void addint(int x, int y)
{
    cout << "After Adding no is : " << x + y << "\n" << endl;
}

void addfloat(float x, float y)
{
    cout << "After Adding no is : " << x + y << "\n" << endl;
}

int main()
{
    int p, q;
    float r, t;

    cout << "\nEnter 2 Integer no : " << endl;
    cin >> p >> q;
    addint(p, q);

    cout << "\nEnter 2 Float no : " << endl;
    cin >> r >> t;
    addfloat(r, t);

    return 0;
}