
/* 8. Write a C++ program to swap values of two int variables without using third variable */

#include <iostream>
using namespace std;

int main()
{
    int x , y ;

    cout << "\nEnter two numbers :  " << endl;
    cin >> x >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "After swapping value of x = " <<x<<" and "<<" y = "<<y<< endl;

    return 0;
}