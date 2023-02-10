
/* getX & setX Function */
/* Jodi ami chai amr class ar variable golo private thakuk but tokon getX & setX use korta hoi */
/* Jodi ami chai x ar value 0 theka boro hobe, tate user jodi negative value hoi tahola ota jano possitive hoa jai tar jonno setX & getX use kora holo -

            if(a<0)
                x = -a;

*/
#include <iostream>
using namespace std;

class Addition
{
    int x, y; // x,y are private

public:
    void setX(int a) // setX ki6u return korena, but argument nai
    {
        if (a < 0)
            x = -a;
        else
            x = a;
    }

    void setY(int b)
    {
        y = b;
    }

    int getX() // getX  return kore setX ar value, but ki6u argument nai na
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
    Addition a;

    a.setX(-23); // -23 ta jabe = void setX(int a)
    a.setY(24);

    cout << a.getX() + a.getY() << endl;
    // a.setX(-23) ki6u return korbena, tai atar value ta catch korar jonno = int getX() use holo

    return 0;
}
