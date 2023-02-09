
/*   Addition 2nd process on c++ programe  */

#include <iostream>
using namespace std;

class Addition
{
public:
    int x;
    int y;

    int add();      // Member Function decleration kora holo
};

int Addition ::add() // Member Function bayra defeation kora holo
{
    return x + y;
}

int main()
{
    Addition a;     // Addition = class ,    a = object

    cout << "Enter two numbers" << endl;

    cin >> a.x >> a.y;

    int z = a.add();

    cout << "Addition of " << a.x << " and " << a.y << " is " << z << endl;

    return 0;
}
