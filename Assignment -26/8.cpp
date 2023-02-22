

/* 8. Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it. Initialise all details using constructor. */

#include <iostream>
using namespace std;

class Bank
{
private:
    float p,t,r,si,amount;

public:
    void read()
    {
        cout<<"\nEnter Principle Amount: ";
        cin >> p;
        cout<<"\nEnter Rate of Interest: ";
        cin >> r;
        cout<<"\nEnter No of the year: ";
        cin >> t;

        si = (p*t*r)/100;
        amount = si+p;
    }

    void show()
    {
        cout<<"\nEnter details here:- \n";
        cout<<"\n\nPrinciple Amount: "<< p;
        cout<<"\n\nRate of Interest: "<< r;
        cout<<"\n\nNo of the year: "<< t;
        cout<<"\n\nInterest is: "<< si;
        cout<<"\n\nTotal Amount is: "<< amount;
    }
};


int main()
{
    Bank c1;
    c1.read();
    c1.show();

    cout << endl;
    return 0;
}