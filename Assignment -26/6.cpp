

/* 6. Define a class student and write a program to enter student details using constructor and define member function to display all the details. */

#include<iostream>
using namespace std;

class student
{
    private:
        char name;
        int roll_no, marks;

    public:
        student(char n=0, int r=0, int m=0) : name(n), roll_no(r),marks(m)
        {}

        void student_details(char n, int r, int m)
        {
            cout << "Student name is: "<< n <<"\nStudent roll no: "<< r << "\nStudent marks is : "<< m;
        }
};

int main()
{
    student s1;
    s1.student_details('s',34,401);
    return 0;
}