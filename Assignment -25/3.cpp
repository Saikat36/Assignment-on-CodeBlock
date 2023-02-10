/* 3. Define a class Factorial and define an instance member function to find the Factorial of a number using class. */

#include <iostream>
using namespace std;

class Factorial
{
    int fact = 1, num;
    public:
    
            Factorial(int n)     // constructor
            {
                num = n;
            }

            void factorial()    // Function 
            {
                for (int i = 1; i <= num ; i++)
                {
                    fact = fact * i;
                }
                
            }

            void print()
            {
                cout<< num <<" Factorial is : "<<fact<<endl;
            }
};

int main()
{
    Factorial p(5);
    p.factorial();
    p.print();
    return 0;
}