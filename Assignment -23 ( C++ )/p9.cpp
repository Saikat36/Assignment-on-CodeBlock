

/*   constructor , Default constructor  */

/* int x = 5; , অর্থাৎ "x" এর ভিতরে কোন গারবেজ value থাকতে পেল না , ata ke bola initialization */

/* We can intialize our object using constructor */
/* constructor does not have any retrn type */
/* constructor name is same as class name  */

/* Access modifier of the constructor must be public */
/* If we want that no one can create object of my class then I need to make my constructor Private */

/* Default constructor = if we do not create any constructor of our class, then compiler itself create a default constructor for our class  */
/* if you create any constructor then compiler will not create any default constructor. The responcibility of creating default constructor is passing to you */
/* We can call the constructor implicitly(উহ্যত) & Explicitly(স্পষ্টভাবে) , implement at question p10.cpp */

#include <iostream>
using namespace std;

class Addition
{

public: // Access modifier
    int p;
    int q;

    int add(); // Decleration kora holo

    Addition(int a, int b) // Constructor
    {
        p = a;
        q = b;
    }

    Addition() // Default constructor
    {
    }
};

int Addition ::add() // bayra defeation kora holo
{
    return p + q;
}

int main()
{
    int x, y;

    cout << "Enter two numbers" << endl;
    cin >> x >> y;

    Addition a = Addition(x, y); //  a = constructor object, Pass Addition(int a, int b)

    Addition b; // Default constructor ,    b = object

    int z = a.add();

    cout << "Addition of " << a.p << " and " << a.q << " is " << z << endl;

    return 0;
}
