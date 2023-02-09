

/* 3. Write a C++ program to calculate the sum of two numbers. */

#include <iostream>
using namespace std;

class Addition
{
public:
    int x;
    int y;

    Addition(int a, int b) // Constructor
    {
        x = a;
        y = b;
    }

    Addition() // Default constructor
    {
    }

    int add(); // Decleration
};

int Addition :: add() // Defeation - akena bolta hobe add function ta Addition class er
{
    return x + y;
}

int main()
{
    int p, q;

    cout << "Enter Two Number: " << endl;
    cin >> p >> q;

    Addition obj = Addition(p, q);

    int z = obj.add();

    cout << "Addition of " << obj.x << " and " << obj.y << " is " << z << endl;

    return 0;
}