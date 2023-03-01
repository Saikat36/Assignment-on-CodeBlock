    
/* 
    With the "friend operator" it is possible to overload a binary operator in which left operator is not an object.
    example - i3 = 5 + i1;
 */

#include <iostream>
using namespace std;

class Item
{

    private:
        int a, b; // fields

    public:

        void setData(int x, int y) { a = x; b = y; }            // setData fun define

        void showData() { cout<<"\na = "<< a <<" b = "<<b<<endl;}     // showData fun define

        friend Item operator+ (int , Item);
};

Item operator+ (int k, Item i) 
{
    Item temp;
    temp.a =  k + i.a; 
    temp.b = i.b;   
    return temp;
}

int main()
{
    Item i1,i3;
    i1.setData(3, 5);

    i3 = 5 + i1;        // "+" == "operator+"
    i3.showData();

    cout << endl;
    return 0;
}