
/* 
Akta programe jokon run hoi tokon 4 ta memory allocate hoi - 

    1. stack = static memory(int a, float b, int *p, struct book b1, complex c1, complex *ptr)
    2. Heap = Dynamic memory allocation somoy je memory pai using - calloc(), malloc()
    3. Data = Global variable & static variable er jonno
    4. Instruction = Instruction dayar joono use hoi
 */



#include <iostream>
using namespace std;

class MyClass {
public:
    static int static_member_var; // static member variable
};

int MyClass::static_member_var = 0; // initialize the static member variable

int main() {
    static int static_local_var = 42; // static local variable
    cout << "static_local_var = " << static_local_var << endl;

    MyClass::static_member_var = 5;
    cout << "static_member_var = " << MyClass::static_member_var << endl;

    return 0;
}



/*                      Memory leak                     */


/* 

      int *f1()
      {
            int *p;
            p = malloc(4);
            return p;
      }

      int main()
      {
            int *ptr;
            ptr = f1();
      }

                      _________________________
                     |      p          malloc  |
                     |    ____         ____    |
                     |   |    | ----> |    |   |
                     |   |____|       |____|   |        
                     |                         |
                     |    ____          ^      |
                     |   |    | ________|      |
                     |   |____|                |
                     |     ptr                 |
                     |_________________________|
 */





        /*      D M A       */


/* 
                                                p
    1.    int *p = new int;                     ☐ ---→  ☐
          delete p;
                                          

    2.    complex *q = new complex();           
          delete q;

          
                               
                      _________________________
       q             |      a           b      |
     ____            |    ____         ____    |
    |    | ------>   |   |    |       |    |   |
    |____|           |   |____|       |____|   |        
                     |_________________________|
                        



    3.    float *ptr = new float[5];    // Access kora jabe *(ptr+i) or ptr[i]
          delete []ptr;   
          

                  ptr        
                  ☐---> ☐☐☐☐☐


 */