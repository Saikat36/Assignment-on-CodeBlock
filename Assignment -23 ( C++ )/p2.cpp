

#include<iostream>

using namespace std;  // using directives

namespace A
{
    int x;          // NameSpace Variable
} 

int x = 10;         // Global Variable

int main()
{
    int x = 5;      // Local Variable

    cout<<A::x<<"\n";      // NameSpace Print = 0
    cout<<::x<<"\n";       // Global Print = 10
    cout<<x<<"\n";         // Local Print  = 5

    return 0;
}