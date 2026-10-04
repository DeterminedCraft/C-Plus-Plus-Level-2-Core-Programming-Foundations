
#include <iostream>   // importing a C++ built-in library (that includes cin, count, and much more).
                      // we'll learn how to create our OWN library LOCALLY ( = used only in a specific project) .

#include "MyLib.h"    // double quotation is for local libraries; <> are for buil-in libraries.
using namespace std;


/* Creating your own library.
 
   For example- Reading library that also contain input validations.

   Using libraries, make your code more optimized & "lighter",
   as you'd just call the functions/ procedures that are already implemented 
   inside their libraries.





   How to ?

   - Navigate to the Solution Explorer section:  CTRL + ALT + L   (View > Solution Explorer).
   - Right-click on Header Files / Fichiers de ressources   > Add 
                                                            > New Item 
                                                            > Choose:  Header File(.h)

        And on the buttom name it, for example, MyLib.h > Click on Add.
 
   - Double-click on MyLib.h 
   - Continue from there (do navigate inside that file),


*/



int main()
{
    
    MyLib::test(); // you have to MANUALLY include the () part.

    cout << MyLib::Sum2Numbers(1, 9) << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
// One last note:
/*

 Remember:
 We originally used to type      std::cout << "Hello";
 
 But instead, we decided to simplify out program:

 using namespace std;

 int main()
 {
    cout << "Hello";
 }



  The EXACT same thing applies to this program: 
  Have a look at the code below:



  Instead of having:
  MyLib::test();



  I will have:

  using namespace MyLib;

int main()
{

    test(); // you have to MANUALLY include the () part.

    cout << Sum2Numbers(1, 9) << endl;

    return 0;

}

 // But this is not preferable as it could CREATE FUTURE problems:

 1-  Potenial conflicts: If two built-in libraries have the exact utility name that's called in the program.
 2-  Deems the program hard to read.

*/





