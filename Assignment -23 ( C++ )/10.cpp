
/* 10. Write a C++ program to add all the numbers of an array of size 10. */

#include <iostream>
using namespace std;

int main()
{
    int a[10] , sum = 0;

    cout << "\nEnter 10 numbers :  " << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum = sum+a[i];
    }
    
    

    cout << "Sum of 10 no is = " <<sum<< endl;

    return 0;
}