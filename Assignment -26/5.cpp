

/* 5. Define a class Date and write a program to Display Date and initialise date object using Constructors */

#include<iostream>
using namespace std;

class Data
{
    private:
        char name;
        int age,salary;

    public:

        Data(char n, int a, int s)
        {
            name = n;
            age = a;
            salary = s;
        }

        void displayData(char,int,int);
};

void Data:: displayData(char n,int a,int s)
{
    cout<< "\n"<< "Name is "<< n << " age is: " << a <<" salary is :  " << s << endl;
}

int main()
{
    Data p;
    int a,b;
    char c;
    cout<<"Enter the employee name, age, salary"<<endl;
    cin>> a >> b >> c;
    p.displayData(a,b,c);
    
    return 0;
}