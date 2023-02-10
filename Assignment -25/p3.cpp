/* 
Default argument constructor =  akta constructor banea tar modha 
1. One Parameter Constructor
2. Two Parameter Constructor
3. Default Constructor      kaj korano ke bola Default argument constructor */


/* Here :-      

Addition *p = new Addition(5,10); ai line a 2 to argument pass korano holo 

Addition c(4) = same constructor a 1 ta argument pass korano holo

Addition d =  same  default constructor - er kaj korlo  */



#include<iostream>
using namespace std;

class Addition
{
    public :
        int x,y;

        Addition(int a = 0, int b = 0)  // Default argument constructor 0, 1 ,2 + Constructor overloading + Default constructor
        {
            x = a;
            y = b;
            cout<<"Paramerized constructor called"<<endl;
        }

        int add()
        {
            return x + y;
        }
};

int main()
{

    Addition *p = new Addition(5,10);   //  D M A + Constructor overloading

    Addition c(4);          // Constructor overloading

    Addition d;             // default constructor + Constructor overloading

    int z = (*p).add();     // (*p).add() same as p->add()
    cout<<"Addition of "<< p->x << " and "<< (*p).y << " is "<< z <<endl;

    z = c.add();
    cout<<"Addition of "<<c.x << " and "<<c.y << " is "<< z <<endl;

    z = d.add();
    cout<<"Addition of "<<d.x << " and "<<d.y << " is "<< z <<endl;

    return 0;
}