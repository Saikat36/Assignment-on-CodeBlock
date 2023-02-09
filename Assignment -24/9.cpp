


/* 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real. */


#include<iostream>
using namespace std;

void maxint(int x, int y)
{
    int max = x > y ? x : y;
    cout<<"Maximum Int no is : "<< max <<"\n"<<endl;
}

void maxfloat(float x, float y)
{
    float max = x > y ? x : y;
    cout<<"Maximum Float no is : "<< max <<"\n"<<endl;
}

int main()
{
    int p,q;
    float r,t;

    cout<<"\nEnter 2 Integer no : "<<endl;
    cin>>p>>q;
    maxint(p,q);

    cout<<"\nEnter 2 Float no : "<<endl;
    cin>>r>>t;
    maxfloat(r,t);

    return 0;
}