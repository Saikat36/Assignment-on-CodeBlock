
/*     Operator Overloading   */
/*  time.cpp have same function */

/* Operator Overloading :-

t4 = t3.operator+(t2); akhena " opertator+ " function 1 bar call ho66a but "t3" & "t2" ai 2 to operator aksathe kaj kor6a ata ke bola Operator Overloading   */

#include <iostream>
using namespace std;

class Time
{
    int hour, min;          // hour, min are in private 

public:
    Time(int h, int m)
    {
        hour = h;
        min = m;
    }

    Time() // Default Constructor
    {
    }
    Time operator+ (Time t) // use for:  t3 = t2 + t1 and t4 = t3.operator+(t2)  // Opertaor Overload
    {
        Time temp;
        int m = min + t.min;  // t4 = t3.operator+(t2);  here min = t3 er min and t.min = t2 er min
        temp.hour = hour + t.hour + m / 60; // if m>60 then it will divisible
        temp.min = (m) % 60;

        return temp;
    }

    Time operator+(int x) // use for t2 = t1 + 2;       // Opertaor Overload
    {
        Time temp;

        temp.hour = hour + x;
        temp.min = min;

        return temp;
    }

    void printTime()
    {
        cout << "\n Hour = " << hour << " , min = " << min << "\n\n" << endl;
    }
};

int main()
{
    Time t1(3, 30), t2(6, 40), t3(4, 20), t4;

    t3 = t2 + t1;          //  t2 implicitly ja66a, t1 explicitly ja66a, t2 call "operator+ function"  // Opertaor Overload   
    t4 = t3.operator+(t2); // t3 call operator+ function          // Opertaor Overload
                           /*  t4 = t3.operator+(t2) same as t4 = t3 + t2;   */
    t2 = t1 + 2;           // t4 = t1.operator+(2)

    /* That means jeta operator ar left a thakbe seta function ke call korbe */

    t3.printTime();
    t4.printTime();
    t2.printTime();

    return 0;
}
