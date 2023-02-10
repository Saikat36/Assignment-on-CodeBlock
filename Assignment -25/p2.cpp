

                        /* Constructor Overloading */
                        
    /* Constructor Overloading = Same Constructor but different argument pass */

#include<iostream>
using namespace std;

class Addition
{
    public :
        int x,y;

        Addition(int a, int b)  //  Constructor overloading
        {
            x = a;
            y = b;
        }
        
        Addition(int a)  //  Constructor overloading
        {
            x = y = a;
            cout<<"\nOne Parameter Constructor Call"<<endl;
        }

        Addition()  //  Default Constructor
        {
           cout<<"\nDefault Constructor Call"<<endl;
        }
        

        int add()
        {
            return x + y;
        }
};

int main()
{
    int a,b;
    cout<<"\nEnter two values: "<<endl;
    cin>>a>>b;

    Addition *p = new Addition(a,b);  //  D M A + Constructor overloading

    Addition c(2,3);                 //  Constructor overloading

    Addition d(5);                  // Constructor overloading

    Addition e;                    // Default Constructor 



    int z = (*p).add();
    cout<<"Addition of "<< (*p).x  << " and "<< (*p).y << " is "<< z <<endl;

    z = c.add();
    cout<<"Addition of "<< c.x << " and "<< c.y << " is "<< z <<endl;

    z = d.add();
    cout<<"Addition of "<< d.x << " and "<< d.y << " is "<< z <<endl;


    return 0;

}