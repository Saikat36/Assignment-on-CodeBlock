
                /* Structure in C++  -->  Encapsulation  */


/* Encapsulation = Encapsulation is makeing a group of property and method */
/* Data Hiding   = Data Hiding is not allowing you to some of members of the 
                   structure by making them "private" */
/* Abstraction   = Abstraction is hiding Implemention detail any method */
                 

/* Encapsulation Rules -
                1. use of struct keyword is optional
                2. structure can have functions too as members
                3. use of access specifiers for the members of structure  */

/* There are 2 type to apply Encapsulation - 
                                            1. using structure
                                            2. using class  */
                                            
/* structure - In structure by-default all member specifier are public
   class -  In class by-default all member specifier are private if we not specify */

/* Here I use "structure"  */

#include <iostream>
using namespace std;
struct Book                 // Encapsulation using struct
{
    private:                // access specifiers 
    
        int bookid;
        char title[20];
        float price;

    public:                // access specifiers

        void displayBook() // Member Function
        {
            cout << bookid << "  " << title << "  " << price << endl;
        }
        void inputBook() // Member Function
        {
            cout << "Enter bookid, title and price: ";
            cin >> bookid;
            if (bookid < 0)
            {
                bookid = -bookid;
            }
            cin.ignore();           // fflush(stdin);
            cin.getline(title, 20); // fgets(title,20,stdin);
            cin >> price;
        }
};

int main()
{
    Book b3;
    
    b3.inputBook();  /* using Abstraction, if any user can use 
                        inputBook() function using ".inputBook()" 
                        but he cann't see how the "input()" function work */
    b3.displayBook();

    return 0;
}