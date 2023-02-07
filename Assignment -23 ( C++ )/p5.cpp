
/*   constructor , Default constructor */

#include <iostream>
using namespace std;

class Addition
{
public:
    int x;
    int y;

    int add();      // decleration kora holo

    Addition(int a,int b)       // constructor
    {
        x = a;
        y = b;
    }

    Addition()          // Default constructor
    {

    }
};

int Addition ::add() // bayra defeation kora holo
{
    return x + y;
}

int main()
{
    int x , y ;

    cout << "Enter two numbers" << endl;
    cin>>x>>y;

    Addition a = Addition(x,y);     //  a = constructor object

    Addition b;     // Default constructor ,    b = object

    int z = a.add();

    cout << "Addition of " << a.x << " and " << a.y << " is " << z << endl;

    return 0;
}
