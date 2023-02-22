

/* 10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result */


#include <iostream>
using namespace std;

class StaticCount
{
    static int count;   // "Static" variable a always value "0" thake
   
public:
    void fun_call()
    {
        count++;
    }

    void print()
    {
        cout << "count is = " << count << endl;
    }
};

int StaticCount::count;  // "static" variable class-er bayra initinilise kora mandatory

int main()
{
    StaticCount p;
    p.fun_call();
    p.fun_call();
    p.fun_call();
    p.print();

    return 0;
}