

                /*     this keyword      */
                
/*  
    1. "this" is a local object pointer

    2. "this keyword" avalable thake proti-ta "INSTANCE MEMBER-er" modha 
        "INSTANCE MEMBER" example =  "member FUNCTION", "constructor", "Distructor" 
        but "main function" kintu "INSTANCE MEMBER" noi tai "main function" a "this" thakena
         
    3. "this keyword" akta object-er puro address ta nijar modha rakhe  


 "this" keyword usage - 

    1. Name confilict between instance member variable and local variable

    
*/

#include <iostream>

using namespace std;

class Item
{
    private:
        int a, b;   // fields

    public:
        void setData(int x, int y) 
        { 
            this->a = x;       // " this->a " point kor6a "i1" object-er "a" member ke
            this->b = y;       // " this->b " point kor6a "i1" object-er "b" member ke
        } 

        void showData() 
        { 
            cout<<"a="<< a <<" b="<<b<<endl;
        }

        Item gretter (Item obj)
        {
            if (a+b > obj.a+obj.b)
            {
                return *this; // "this keyword" akta object-er puro address ta nijar modha rakhe
            }                // oi jonnoi " *this " likha hola puro object ta represent kor6a
            else
            {
                return obj;
            }
        }
};

int main()
{
    Item i1, i2, i3;

    i1.setData(10, 20);
    i2.setData(8, 20);
    
    i3 = i1.gretter(i2);
    
    cout << "The greater object is: ";  // cout << "The greater object is: "<< i3.showData();

    i3.showData();                                      //    |
                                                        //    |
    cout << endl;                                       //    |
                                                        //    |
    return 0;                                           //    |
}                                                       //    V

/* 

When you use the line cout << "The greater object is: "<< i3.showData();, 
it is equivalent to cout << "The greater object is: "<<void;
which is incorrect because it does not return anything

 */
