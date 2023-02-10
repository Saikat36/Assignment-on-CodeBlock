
/* 7. Write a function using the default argument that is able to add 2 or 3 numbers. */

#include <iostream>
using namespace std;

//int add(int x = 0, int y, int z ) // Wrong Default Argument cz left side theka default hoina

int add(int x, int y, int z = 0) // Default Argument + function overloading
{
    return x + y + z;
}

int main()
{

    cout << "\nTwo no Addition is = " << add(2,3) << endl;
    cout<<"\nThree no Addition is = " << add(1,2,3) << "\n"<< endl;

    return 0;
}