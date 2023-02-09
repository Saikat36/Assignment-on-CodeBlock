

#include <iostream>
using namespace std;

namespace prateek_jain //  parent Namespace
{
    int x = 5;

    namespace xyz //  Nested Namespace
    {
        int y = 10;
    }
}

namespace pj = prateek_jain::xyz;  // alias namespace = pj


int main()
{
    cout << pj::y;

    return 0;
}
