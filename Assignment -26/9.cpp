
/*

9. Define a class Bill and define its member function get() to take detail of customer , calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.

*/

#include <iostream>
using namespace std;

class Bill
{
private:
    int c_no;
    char c_name[20];
    int units;
    double bill;

public:
    void get()
    {
        cout << "\nEnter details here:- \n";
        cout << "\nEnter Castomer No: ";
        cin >> c_no;
        cout << "\nEnter Castomer Name: ";
        cin >> c_name;
        cout << "\nEnter No. of units used: ";
        cin >> units;
    }

    void put()
    {
        cout << "\n\n\nIn bellow you can see the details of the Castomer here:- \n";
        cout << "\n\nCastomer No: " << c_no;
        cout << "\n\nCastomer Name: " << c_name;
        cout << "\n\nNo. of units used: " << units;
        cout << "\n\nTotal Bill Amount is: " << bill;
    }

    void calc_bill()
    {
        if (units <= 100)
        {
            bill = units * 1.20;
        }
        else if (units > 100 && units <= 200)
        {
            bill = 100 * 1.20 + (units - 100) * 2;
        }
        else
        {
            bill = (100 * 1.20) + (100 * 2) + (units - 200) * 3;
        }
    }
    
};

int main()
{
    Bill c1;
    c1.get();
    c1.calc_bill();
    c1.put();

    cout << endl;
    return 0;
}