
/* member are 2 types - 
                        1. Instance members
                        2. Static members */

/* Static member variable - joto khon static member variable define orthat "int Item::k;" ai vabe bayre define na kora hobe toto khon kono memory pabena orthat class-er bayra "static member variable define" kortai hobe nahola error asbe */

/* on "p15.cpp" without creating any "object" how can I access "static member variable" or "static class variable" */

#include<iostream>
using namespace std;
class Item
{
    public:
        int a,b; // Instance Variables , Instance = object
        static int k; // static member variable | class Variable
};

int Item::k; //defining static member variable

int main()
{
    Item i1,i2;
    i1.a = 5;
    cout<<"i2.a = "<<i2.a<<endl;
    i1.k = 10;    // static member 1 bar create hoi tai "i1.k" dea static member variable value change kora dea "i2.k" dea print korla same value diba
    cout<<"k="<<i2.k;
    cout<<endl;
    return 0;
}