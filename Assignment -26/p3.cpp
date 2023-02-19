
                        /*  Initialization list  */

/* Constructor ar body start hobar aga "colon(:)" dea field (int a, b;) dika initialization kora ke bola Initialization list, kintu kheya rakhte hobe ai Initialization ta kintu "=" operator dea hoina just fileld name(value) */

/*  Initialization list er feature - 

      Complex(int a , int b): a(a),b(b)
        {

        }

    atai kintu je variable pass kora hoa6a seta and field(int a, b) er name same but tate kono problem hobena karon - 

    "a(a) & b(b)" bayrer "a & b" ta holo filed a use kora "a,b"
    and "(a) & (b)" ta holo "Complex c1(1,2)" ar "1 & 2"

    same name rakhar feature ta only tokhoni use hobe jodi "Initialization list" use kora hoi

 */

#include <iostream>
using namespace std;
class Complex
{
    private:
        int a, b; // instance member variables or field
        const int k;
    public:

        Complex(): a(0),b(0),k(0)                // Initialization list
        {}
        Complex(int x): a(x) , k(0)   // One parameter Constructor
        {}
        Complex(int a , int b, int k): a(a),b(b),k(k)   // Initialization list
        {}
        Complex(Complex &C): k(2)  // Copy Constructor
        {
            a = C.a;
            b = C.b;
        }

        void setData(int, int); // decleare function
        void showData();        // decleare function
        Complex add(Complex);   // decleare function
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
Complex Complex::add(Complex C)   // Copy Constructor
{
    Complex temp;                // temp is also object
    temp.a = a + C.a;
    temp.b = b + C.b;
    return temp;
}


int main()
{
    Complex c1(1,2,5), c2(3), c3 , c4(6), c5(3,6,0);
    c1.setData(3, 4);
    c2.setData(5, 6);

    Complex c7 = c1;
    c7.showData();

    cout << endl;
    return 0;
}