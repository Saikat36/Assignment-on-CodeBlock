
/*    Addition 1st process on c++ programe   */

#include <iostream>
using namespace std;

class Addition // class = Data member + Member Function
{

public:    // Access modifier
    int x; // Data member
    int y; // Data member

    int add() // Member Function
    {
        return x + y;
    }
};       // Do not Forget to give semicolon at the end of the class

int main()
{
    Addition a; //  Addition = class ,    a = object

    cout << "Enter two numbers" << endl;

    cin >> a.x >> a.y;

    int z = a.add();

    cout << "Addition of " << a.x << " and " << a.y << " is " << z << endl;

    return 0;
}
