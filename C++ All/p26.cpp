
/* 
    Insertion operator ( “<<” ) and Extraction operator ( “>>” ) operator overloading 
*/

#include <iostream>
using namespace std;

class Item
{

    private:
        int a, b; // fields

    public:

        void setData(int x, int y) { a = x; b = y; }            // setData fun define

        void showData() { cout<<"a="<< a <<" b="<<b<<endl;}     // showData fun define

        friend istream& operator>> (istream & , Item &);    //   " >> "
        friend ostream& operator<< (ostream & , Item );    //    " << "
};

istream& operator>> (istream &cin, Item &i)
{
    cin >> i.a >> i.b;   
    return cin;
}

ostream& operator<< (ostream &cout, Item i)
{
    cout <<"a = " << i.a << " b = "<< i.b << endl;   
    return cout;
}

int main()
{
    Item i1;

    cout<<"Enter an item: ";

    cin >> i1;      //    ">>" operator == "operator>>"

    cout << i1;

    cout << endl;
    return 0;
}