
// Namespace name same hola vitorer elemnt same houa cholbena nahola programe run hobena

#include<iostream>
using namespace std;

namespace A
{
    int x;   // Namespace variable
    int y;
}
namespace A
{
    int y;  // jamon akhena namespace A ar y ta 2 jaigai a6e tai error di66a
    int z;
}

using namespace A;
int main(void)
{

    cout<<y; //namespace

    return 0;
}
