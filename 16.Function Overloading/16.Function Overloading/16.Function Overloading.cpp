
#include <iostream>
using namespace std;
/*
  Overloading:
  More than one function that has the same EXACT name but with different implementations.

  Overloading is one type of polymorphism تعدد الأشكال.

  You will realize the significance of overloading when taking up the Object Oriented topic. 

*/



double MySum(double a, double b) {   // what's executed for the 2nd line.
    return (a + b);
}

int MySum(int a, int b) {         // what's executed for the 1st line.
    return (a + b);
}

int MySum(int a, int b, int c) {   // what's executed for the 3rd line.
    return (a + b + c);
}

int MySum(int a, int b, int c, int d) {    // what's executed for the 4th line.
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;
    cout << MySum(10.1, 20.1) << endl;
    cout << MySum(10, 20, 30) << endl;
    cout << MySum(10, 20, 30, 40) << endl;
  
    return 0;
}


/* Important:  Type in MySum(  -> It becomes MySum()
                  with a list of numbers of all of the overloaded MySum() functions.

                  & Even with an overloaded built-in library, when
                  you call it in editor, it'll show you a list of numbers
                  of all of the overloaded functions.



                  Polymorphism ( = more than one shape...it morphs).
                  The concpt of polymorphism applies to an overloaded function
                  (a function wit many shapes / faces..you call any shape that you'd like).


  So, let's examine a C++ built-in function: max()
      so type in, max(   

      ----> will resolve to max() with a list of numbers of all of the loaded max() functions.

   */

   
 //-----------------------------------------------------------------------------------------------------
//// Now EXAMINE this:

double MySum(double a, double b) {  
    return (a + b);
}

int MySum(int a, int b) {         
    return (a + b);
}


int MySum(int w, int k) {
    return (w + k);
}

int MySum(int a, int b, int c) {   
    return (a + b + c);
}

int MySum(int a, int b, int c, int d) {    
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;
    cout << MySum(10.1, 20.1) << endl;
    cout << MySum(10, 20, 30) << endl;
    cout << MySum(10, 20, 30, 40) << endl;

    return 0;
}

// There will be an error:
// error: function int MySum(int , int ) already has a body.
// this is because MySum(10, 20) does not know which implementation to execute
// because there are two     int MySum(int, int)
