
/* Destructor = Destructor destroy the object created by Constructor 

jamon Default Constructor create hoi compile time a tamni Destructor create hoi , atar kaj holo , Constructor dea je memory allocate hoa6ilo oi memory ta kaj hoa jabar por free kore daya. 

akhena " Addition a,b " name 2 to object create kora hoa6a tai jokon programe jokon run complete hoa galo tar memory ta Destructor relise kora dilo  */


#include<iostream>
using namespace std;

class Addition
{
    int x, y;

    public :

        Addition()              // Default Constructor called
        {
            cout<<"\nDefault Constructor called"<<endl;
        }

        ~Addition()             // Destructor called
        {
            cout<<"\nDestructor called"<<endl;
        }

        void setX(int a)        // setX ki6u return korena, but argument nai
        {
            if(a<0)
                x = -a;
            else
                x = a;
        }

        void setY(int b)
        {
            y = b;
        }

        int getX()      // getX  return kore, but ki6u argument nai na
        {
            return x;
        }

        int getY()
        {
            return y;
        }
};

int main()
{
    Addition a,b;       // Here 2 object created 

    a.setX(-23);
    a.setY(24);

    cout<< a.getX() + a.getY() <<endl;


    return 0;
}

/* 
                        Output - 

                Default Constructor called

                Default Constructor called
                47

                Destructor called

                Destructor called

 */