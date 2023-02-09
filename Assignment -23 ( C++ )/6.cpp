

/* 6. Write a C++ program to calculate an average of 3 numbers. */

#include <iostream>
using namespace std;

int main()
{
    float avg, l, b, h;

    cout << "\nEnter the 3 numbers :  " << endl;
    cin >> l >> b >> h;

    avg = (l + b + h) / 3.0;

    cout << "Avarage of the 3 no is :  " << avg << endl;

    return 0;
}