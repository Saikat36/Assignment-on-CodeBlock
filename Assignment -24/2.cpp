

/* 2. Define a function to find the highest value digit in a given number. */

#include <iostream>
using namespace std;

class Primenumber
{

public:
    int n;

    void findMaxDigit()
    {
        int max = -1;

        while (n != 0)
        {
            int rem = n % 10;

            if (rem > max)
            {
                max = rem;
            }
            n = n / 10;
        }

        cout << "Max digit is : " << max << endl;
    }
};

int main()
{

    int x;

    Primenumber a; // a = Object

    cout << "\nEnter a number :  " << endl;
    cin >> a.n;

    a.findMaxDigit(); // Function Call

    return 0;
}