

/* 4. Define a class Counter and Write a program to Show Counter using Constructor. */


#include <iostream>
using namespace std;

class Counter
{
    static int count;   // "Static" variable a always value "0" thake
   
public:
    Counter()
    {
        count++;
    }

    void print()
    {
        cout << "count is = " << count << endl;
    }
};

int Counter::count;  // "static" variable class-er bayra initinilise kora mandatory

int main()
{
    Counter p,q;

    q.print();

    return 0;
}