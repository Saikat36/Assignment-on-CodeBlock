

/* D M A  = Dynamic Memory Allocation using Constructor */

/*

new Addition(a,b) = "new" keyword akta object banabe tar modha ai (a,b) ke pass korabe and ai object tar address ta return korbe ,

aga amra ai vabe = " Addition a ", object banatam but "DMA" madhome banate gela "new" keyword pass korate hobe and extra kore object banate hobena

 */

#include <iostream>
using namespace std;

class Addition
{
public:
    int x, y;

    Addition(int a, int b) // Constructor
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
    int a, b;
    cout << "\nEnter two values: " << endl;
    cin >> a >> b;

    Addition *p = new Addition(a, b); //  D M A  = Dynamic Memory Allocation

    int z = p->add();

    cout << "Addition of " << (*p).x << " and " << p->y << " is " << z << endl; // ( * )  dila ai vabe likta hobe = (*p).x
                                                                                // ( -> ) dila ai vabe likta hobe = p->y
    return 0;
}