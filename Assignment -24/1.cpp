

/* 1. Define a function to check whether a given number is a Prime number or not */

#include <iostream>
using namespace std;

class Primenumber
{

public:
    int n;

    void checkprimeNumber()
    {
        int flag = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout<<"\nThe No is Prime\n"<<endl;
        }
        else{
            cout<<"\nThe No is Not Prime\n"<<endl;
        }
        
    }
};

int main()
{
    
    int x;

    Primenumber a;      // a = Object

    cout << "\nEnter a number :  " << endl;
    cin >> a.n;

    a.checkprimeNumber();   // Function Call

    return 0;
}