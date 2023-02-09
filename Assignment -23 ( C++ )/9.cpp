

/* 9. Write a C++ program to find the maximum of two numbers. */

#include <iostream>
using namespace std;

int main()
{
    int x, y, max;

    cout << "\nEnter two numbers :  " << endl;
    cin >> x >> y;

    max = x > y ? x : y;

    cout << "Maximum no is " << max << endl;

    return 0;
}