

                                /* Const Member Function */


/* main function a jodi likha hoi - 
                                    const Addition a; 
                                    a = 5; 
                                            ai rokom likhla vul hobe karon const use korla tokoni initilise korta hoi, pora korla error dibe    */


/* main function a jodi likha hoi - 

        const Addition a(5, 6);    then class a thaka function ke call kora hoi - 
        int z = a.add();           tokon class a thaka function-er end a "const" likha compulsory 

        int add() const            "const" use korar porau jodi vitora value change kora hoi then
        {                           ai rokom error asbe =  
            return x+y;             x=10; 'Addition::x' in read-only object
        } 

jodi paramiter pass korano hoi then const ta parameter ar vitora use hobe -

        add (const int x)
        {
            
        }                                

*/

#include <iostream>
using namespace std;

class Addition 
{
    public:

        int x,y;

        Addition(int a, int b)
        {
            x = a;
            y = b;
        }

        int add() const
        {
            // x=10;       // 'Addition::x' in read-only object
            return x+y;
        }
};



int main()
{
    const Addition a(5, 6);   // "a" is a object 

    int z = a.add();

    cout << z;

    return 0;

}