
/*    Addition 1st process on c++ programe   */

#include<iostream>
using namespace std;

class Addition
{
  public:
    int x;
    int y;

    int add()
    {
        return x+y;
    }
};

int main()
{
    Addition a;

    cout<<"Enter two numbers"<<endl;

    cin>>a.x>>a.y;

    int z = a.add();

    cout<<"Addition of "<<a.x<<" and "<<a.y<<" is "<< z <<endl;

    return 0;
}
