
/*
2. Define a class Time to represent a time with instance variables h,m and s to store hour,
minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)   */

#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;

public:
    void setTime(int x, int y, int z)
    {
        hour = x;
        min = y;
        sec = z;
    }

    void showTime()
    {
        cout << endl << hour << ":" << min << ":" << sec;
    }
    
    void normalize()
    {
        min = min + sec/60;
        sec = sec % 60;
        hour = hour + min/60;
        min = min %60;
    }

    Time add(Time t) // use for t2 = t1 + 2;
    {
        Time temp;   // temp is a object

        temp.sec = sec + t.sec;
        temp.min = min + t.min;
        temp.hour = hour + t.hour;
        temp.normalize();

        return (temp);
    }
};

int main()
{
    Time t1, t2, t3;

    t1.setTime(5,50,30);
    t2.setTime(7,20,34);

    t3 = t1.add(t2);

    t1.showTime();
    t2.showTime();
    t3.showTime();
    

    return 0;
}
