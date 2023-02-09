#include<iostream>
using namespace std;

class Addition
{
  public:
    int x;
    int y;

    int add();

    Addition(int a, int b)      // 2 parameter constructor
    {
        x = a;
        y = b;
    }

    Addition()                  // default constructor
    {

    }

    Addition(int a)             // 1 parameter constructor
    {
        x = y = a;
    }
};

 int Addition :: add()
    {
        return x+y;
    }

int main()
{

    Addition a = Addition();  // it will call default constructor Explicitly(স্পষ্টভাবে)
    Addition b = Addition(2); // call 1 parameter constructor Explicitly
    Addition c = Addition(2,3); // call 2 parameter constructor Explicitly

    Addition a;   // calling default constructor implicitly(উহ্যত)
    Addition b(2); // calling 1 parameter constructor implicitly
    Addition c(2,3); // calling 2 parameter construct implicitly


    int z = a.add();

    cout<<"Addition of "<<a.x<<" and "<<a.y<<" is "<<z<<endl;

    return 0;
}
