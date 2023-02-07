


/* alias namespace = namespace ke short a name change kore "pj" kora holo  */


#include<iostream>
using namespace std;

namespace prateek_jain               
{
    int x;
}

namespace pj = prateek_jain;        // alias namespace = pj


int main()
{
    cout<< pj::x;

    return 0;
}
