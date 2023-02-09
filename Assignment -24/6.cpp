

/* 6. Define a function to swap data of two int variables using call by reference */

#include<iostream>
using namespace std;

void swap(int &p, int &q)   // call by reference
{
    int temp = p;
    p = q;
    q = temp;
}

int main()
{
    int x = 10, y = 15;

    swap(x,y);

    cout<<"\nAfter swapping x = "<<x<<" and y = "<<y<<"\n"<<endl;

    return 0;
}