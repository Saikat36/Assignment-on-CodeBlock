#include<iostream>

using namespace std;

namespace       // un-name namespace 
{
    int x = 5;
}

int main()
{
    cout<<::x<<"\n";
    cout<<x;

    return 0;
}
