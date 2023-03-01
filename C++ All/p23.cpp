
/* 
   Here "operator+" is a member function

   i3 = i1 + i2; 

Explain: 

"i1" function call "operator+" function and pass "i2" as an argument , and the return value store in "i3"

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

        Item operator+ (Item);      // operator+ Function decleare, operator+ is a member function           
};

Item Item:: operator+ (Item i)      // operator+ Function define
{
    Item temp;
    temp.a = a + i.a;       //  a = i1.a    ,     i.a = i2.a
    temp.b = b + i.b;       //  b = i1.b    ,     i.b = i2.b
    return temp;
}

int main()
{
    Item i1,i2,i3;
    i1.setData(3, 5);
    i2.setData(9, 4);

    i3 = i1 + i2;   // "i1" function call "plus" operator and pass "i2" as an argument
    i3.showData();

    cout << endl;
    return 0;
}