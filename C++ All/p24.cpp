
/* 
   Here "operator+" is not a member function , We create "operator+" function as a "friend function"

   i3 = i1 + i2; 

Explain: 

"operator+" function call and pass "i1 , i2" as an argument , and the return value store in "i3"

changes korta hobe :-

1.  friend Item operator+ (Item , Item);   // operator+ friend Function argument a " i1 & i2 " ke pass korabe. akhena kono caller object orthat aga "i1" jamon call kor6ilo "i2" ke but akon to "i1" call kor6a na, tai argument hisab a 2 to object ke pass korate hobe

2. Item operator+ (Item X, Item Y) //  "operator+" Function is a friend Function so do-not use membership level like this - "Item Item:: operator+ (Item x, Item y)
    {
        Item temp;
        temp.a = X.a + Y.a;     //  X.a = i1 er a ,   Y.a = i2 er a
        temp.b = X.b + Y.b;     //  X.b = i1 er b ,   Y.b = i2 er b
        return temp;
    }

 */

#include <iostream>
using namespace std;

class Item
{

    private:
        int a, b; // fields

    public:

        void setData(int x, int y) { a = x; b = y; }            // setData fun define

        void showData() { cout<<"a = "<< a <<" b = "<<b<<endl;}     // showData fun define

        friend Item operator+ (Item , Item);   // operator+ friend Function argument a " i1 & i2 " ke pass korabe           
};

Item operator+ (Item X, Item Y) //  "operator+" Function is a friend Function so do-not use membership level like this - "Item Item:: operator+ (Item x, Item y)
    {
        Item temp;
        temp.a = X.a + Y.a;     //  X.a = i1 er a ,   Y.a = i2 er a
        temp.b = X.b + Y.b;     //  X.b = i1 er b ,   Y.b = i2 er b
        return temp;
    }

int main()
{
    Item i1,i2,i3;
    i1.setData(3, 5);
    i2.setData(9, 4);

    i3 = i1 + i2;   // "operator+" call holo and "i1","i2" ke pass koralo as a argument hisab a
    i3.showData();

    cout << endl;
    return 0;
}

/* 
Conclusion:-

    1. If Bynary operator overloading as a "member" then we should pass "one argument" in the parameter like this - Item Item:: operator+ (Item i)

    2. If Bynary operator overloading as a "friend" then we should pass "Two argument" in the parameter like this - Item operator+ (Item X, Item Y) 

    So jokon "friend function" use korbo tokon akta argument extra use hobe & membership level(Item::) use hobena + function define time a 2 to argument pass korar jonno ai vabe use hobe -

    X.a + Y.a;
    X.b + Y.b;
    
 */