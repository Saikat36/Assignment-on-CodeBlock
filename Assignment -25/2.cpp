
/* 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time   */

#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;          // hour, min are in private 

public:
    Time(int h, int m,int s)
    {
        hour = h;
        min = m;
        sec = s;
    }

    Time() // Default Constructor
    {
    }

    void printTime()
    {
        cout << "\n Hour = " << hour << " , min = " << min <<" , sec= "<< sec << "\n\n" << endl;
    }
};

int main()
{
    Time t(3, 30,56);


    t.printTime();

    return 0;
}