

/* 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle */

/* Orthat area nae a akta function hobe ja akbar circle er area bar korbe then
                                              rectangle er area bar korbe then
                                               triangle er area bar korbe  */


/* overloading functions = means function name same but the arguments will be different  */

#include <iostream>
using namespace std;

void area(float radious) // overloaded functions
{
    cout<<"Area of the Circle is = "<<3.14*radious*radious<<"\n\n"<<endl;
}

void area(float l, float b) // overloaded functions
{
    cout<<"Area of the rectangle is = "<<l*b<<"\n\n"<<endl;
}


void area(int base, int height) // overloaded functions
{
    cout<<"Area of the Triangle is = "<<0.5*base*height<<"\n\n"<<endl;
}



int main()
{
    float radious,l,b;
    int base,height;

    cout<<"\nEnter the Radious: "<<endl;
    cin >> radious;
    area(radious);   // Function calling time a kono int,float daya cholbena

    
    cout<<"Enter the Length: "<<endl;
    cin >> l;
    cout<<"Enter the Width: "<<endl;
    cin >> b;
    area(l, b); // Function call for rectangle


    cout<<"Enter the Base: "<<endl;
    cin >> base;
    cout<<"Enter the Height: "<<endl;
    cin >> height;
    area(l, b); // Function call for rectangle


    return 0;
}