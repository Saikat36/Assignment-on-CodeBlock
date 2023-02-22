

/* 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor */

#include<iostream>
using namespace std;

class Cube
{
    private:
        int length, breadth, height;

    public:
        Cube(int l = 0,int b = 0,int h = 0)
        {
            length = l;
            breadth = b;
            height = h;
        }
        int cubeCal(int,int,int);
        void showData();
};

int Cube:: cubeCal(int x ,int y ,int z)
{
    int store;
    store = x*y*z;
    return store;
}
void Cube::showData()
{
    int store = cubeCal(length, breadth, height);
    cout << "The volume of the cube is: " << store << endl;
}

int main()
{
    Cube c1;
    c1 = Cube(7,2,5);
    c1.showData();

    cout << endl;
    return 0;
}