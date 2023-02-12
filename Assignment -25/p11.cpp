
                /*          Explain = c3 = c1.add(c2);  
                
                Object call a method and pass another objet as an argument in that method  */

#include <iostream>
using namespace std;
class Complex
{
    private:
        int a, b; // instance member variables
    public:
        void setData(int, int); // decleare function
        void showData();        // decleare
        Complex add(Complex);   // decleare
};


                /* Define every function here */

void Complex::setData(int x, int y)
{
    a = x;
    b = y;
}
void Complex::showData()
{
    cout << "\na=" << a << " b=" << b;
}
Complex Complex::add(Complex C)
{
    Complex temp;                // temp is also object
    temp.a = a + C.a;
    temp.b = b + C.b;
    return temp;
}


int main()
{
    Complex c1, c2, c3;         // c1,c2,c3 are object
    c1.setData(3, 4);
    c2.setData(5, 6);
    
    c3 = c1.add(c2);    /* c1 is a caller object, he call his method add, and pass c2 as an argument and what ever return it will store in c3 */

    c3.showData();
    cout << endl;
    return 0;
}