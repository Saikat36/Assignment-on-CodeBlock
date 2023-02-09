


/* alias namespace = namespace ke short a name change kore "pj" kora holo  */


#include<iostream>
using namespace std;

namespace prateek_jain               
{
    int x;
}

namespace pj = prateek_jain;        // alias namespace = pj

using namespace pj;

int main()
{
    cout<< x;

    return 0;
}
