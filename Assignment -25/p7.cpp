
/* Jodi normal object create kora hoi jamon = Addition a,b; atai "Destructor" call nijar theka hobe

kintu jodi using DMA dea object create kori jamon = Addition *c = new Addition(); 
atai kintu je memory create holo seta amaka alada kora free korta hobe, C programming a ai "free function" ta chilo thik tamni akhena "delete function" use hoi, 
syntex = 
            Addition *c = new Addition();
            delete c;
 */

#include<iostream>
using namespace std;

class Addition
{
    int x, y;

    public :

        Addition()
        {
            cout<<"Default Constructor called"<<endl;
        }

        ~Addition()
        {
            cout<<"Destructor called"<<endl;
        }

        void setX(int a)
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

        int getX()
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
    Addition a,b;
    Addition *c = new Addition();  // new ==> delete

    a.setX(-23);
    a.setY(24);

    cout<<  a.getX() + a.getY()   <<endl;

    delete c;    /*   jodi new keyword dea memory allocate kora hoi tahola oi memory ta free korta gela "delete pointer name" dita hobe  */

    return 0;
}
