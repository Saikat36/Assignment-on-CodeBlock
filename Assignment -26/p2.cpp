
                                /*  Constructor Overloading  */
    
    /*   Constructor Overloading  =  Programmer can  provide multiple Constructor in the same class with different signature ,

    Here c4 & c5 are Constructor Overloading 

    
                                    Copy Constructor  

    example :-   
                
                Complex c7 = c1

    Jokon kono class-er object banano ho66a, R tokonoi oi somoyi class a present thaka kono object ke dea intinilise kora hola tokon copy constructor use hoa jai internally      */

#include <iostream>
using namespace std;
class Complex
{
    private:
        int a, b; // instance member variables

    public:

        Complex()   // Default Constructor
        {
            a = 0;
            b = 0;
        }
        Complex(int x)   // One parameter Constructor
        {
            a = x;
        }
        Complex(int x , int y)   // Constructor
        {
            a = x;
            b = y;
        }

        Complex(Complex &C)   // Copy Constructor
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
Complex Complex::add(Complex C)   // Copy Constructor //Complex:: is memebership level
{
    Complex temp;                // temp is also object
    temp.a = a + C.a;
    temp.b = b + C.b;
    return temp;
}


int main()
{
    Complex c1(1,2), c2(3), c3 , c4(6), c5(3,6); // (c1,c2,c3) are obj but (c4,c5) are Constructor Overloading
    c1.setData(3, 4);
    c2.setData(5, 6);

                        /* Copy Constructor 

                    Example :-  
                                Complex c7= c1 */

    Complex c7 = c1;    /*  "c1" object tar Constructor=(Complex(int x , int y)) 
                            a 2 to argument pass korbe but "c7" akta object jake
                            create korar somoyi class a present thaka kono object
                            ke dea intinilise kora hola tokon Copy Constructor use
                            hoa jai internally, tai kono error dekha jaina, 
                            jamon akhena:- "c1" object create kora a6a ager theka
                            tai "c7" name a akta object create kora holo and 
                            jokhon "c1" object dea intitilise koea holo tokoni
                            "Copy Constructor" use holo and ai "copy Constructor"
                            as a argument hisabe pass koralo "c1" ke and ai
                            "Copy Constructor" ke call korlo "c7"

                            NOTE:- "Copy Constructor" toiri korar somoy tokoni 
                                    intitilise korta hobe present thaka object
                                    dea, pora korla hobena*/

    
    c3 = c1.add(c2);    /* "c1" is a caller object, he call his method add,
                           and pass c2 as an argument and what ever return 
                           it will store in c3 */

    c3.showData();
    cout << endl;
    return 0;
}