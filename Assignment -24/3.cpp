

/* 3. Define a function to calculate x raised to the power y. */

#include <iostream>
using namespace std;

class Primenumber
{

public:

    int x,y;

    void xPowerFind()
    {
        int result =1 ;

        while (y!=0)
        {
            y--;
            result = result *x;
        }
        
        cout<<"\nX to the power Y is "<<result<<"\n"<<endl;
    }
    
};

int main()
{

    Primenumber a; // a = Object

    cout << "\nEnter two number :  " << endl;
    cin >> a.x >> a.y;

    a.xPowerFind(); // Function Call

    return 0;
}