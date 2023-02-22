

/* 5. Define a class Date and write a program to Display Date and initialise date object using Constructors */

#include <iostream>
using namespace std;

class Data
{
private:
    int dd, mm, yy;

public:
    Data(int n, int a, int s)
    {
        dd = n;
        mm = a;
        yy = s;
    }

    void displayData();
};

void Data::displayData()
{
    cout << "\nThe Entered Date is " << dd <<":"<<mm <<":"<< yy<< endl;
}

int main()
{
    
    int a, b, c;
    cout << "Enter the date, month & year" << endl;
    cin >> a >> b >> c;
    Data p(a,b,c);
    p.displayData();

    return 0;
}