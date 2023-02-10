
                                /*     Array of Object     */

#include <iostream>
using namespace std;

class Addition
{
public:
    int x, y;

    Addition(int a = 0, int b = 0)  // Default argument constructor for 1 & 2 parameter + Default constructor
    {
        x = a;
        y = b;
    }

    int add()
    {
        return x + y;
    }
};

int main()
{
    Addition a[5] = {Addition(3), Addition(4, 5), Addition(6)};     // Array of Object

    for (int i = 0; i < 5; i++)
    {
        cout << "\nx = " << a[i].x << " , y = " << a[i].y <<"\n"<< endl;
        cout << "\na[i].add =  "<< a[i].add() <<"\n"<< endl;
    }
    
    return 0;
}

/* 
    Output - 

    x = 3 , y = 0
    a[i].add =  3

    x = 4 , y = 5
    a[i].add =  9

    x = 6 , y = 0
    a[i].add =  6

    x = 0 , y = 0
    a[i].add =  0

    x = 0 , y = 0
    a[i].add =  0

*/