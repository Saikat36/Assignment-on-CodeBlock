
            /*      Nested Namespace        */

#include<iostream>
using namespace std;

namespace A                 //  parent Namespace
{
    int x;

    namespace B             //  Nested Namespace
    {
        int y;
    }
}

using namespace A;
using namespace B;
int main()
{
    cout<<x<<"\n";
    //cout<<B::y<<"\n";
    cout<<y;

    return 0;
}
