
#include <iostream>
using namespace std;

// Void Pointers.

/* As mentioned before - One of the differences between a REFERENCE (isim dala3) and a POINTER is that
                         the address that the pointer stores and subsequently the variable object the pointer points to (it references)

                         can be changed DURING the runtime,

                         This is valid as long as the pointer remains of the same data type
                         whether the new address it stores ( and subsequently the object it points to)
                         belong to a variable or a function.

                         NEVERTHELESS, in some ADVANCED SITUATIONS, during run-time
                         this change can be from one data type to another different data type,

                         This can be done using VOID POINTERS

*/

// Let us begin by examing the following situation:


int main()
{
    int * p; // It means that the p variable that's of type integer pointer CAN store an address of a variable or a function or an object or anything
            // imaginable in memory.
            // but ONLY ONCE it stores an address, it WILL point to (references) the object that it stores the address of.

    int f1 = 10;

    p = &f1; // NOW the pointer (variable p of type integer pointer) STORES the address of the f1 variable object; and subsequently
              // it's pointing to (referencing) the object that's variable f1 (in order to and only in order to access (de-reference) 
              // the value stored in f1 (10) using the syntax *p

    cout << "The address is: " << p << endl;
    cout << "The value is: " << *p << endl << endl;




    return 0;
}



// Now, examine the following:

int main()
{
    int * p; 

    float f1 = 10.5;   

    p = &f1;   // WARNING. 
    // to amend this situation, then change the data type of the pointer to void. (look at the code below)

    cout << "The address is: " << p << endl;
    cout << "The value is: " << *p << endl << endl;

    return 0;
}



// sometimes DURING RUN-TIME, one may want a specific pointer to point at different data typeS (encountered in some advanced scenarios)
// for this, the pointer must be declared as a void pointer ( void *)
// where
// The address is stored with no issues.
// However, the void pointer is now pointing to some non-void specific data type (= the pointer can NOT access the value it is pointing to)
// to access the value, the pointer data type has to be explicitly converted from void to that specific data type (to int, float, double, boolean, structure,enum, etc.) via static casting.

// see what to do with this comment below:
// So, if one is NOT SURE of the data type of the thing that the pointer is going to store the address of ( & subsequently the pointer pointing to
// (referencing) that thing) in order to ultimately access the value of (de-referencing)
// ,later in the program
// then the pointer should be of type void pointer

int main()
{
    void * p; // A Generic Pointer (no data type pointer) to point at ANYTHING one wants

    int x = 50;

    float f1 = 10.5;

    p = &f1;   // Warning now disappears because P is of type void pointer. 
    
    cout << "The address is: " << p << endl;   // address of f1
    //cout << "The value is: " << *p << endl;   // WARNING because the pointer variable (of type void pointer) that's pointing to type float doesn't have the same data type of the object it points to
                                               // then, it won't be able to access the value
                                              // then, an explicit conversion of the pointer (from void pointer to float pointer) is required via casting in order to access tha value of f1.

    cout << "The value is: " << *(static_cast<float*>(p)) << endl << endl;    // float*  means  float pointer.
    // p is STILL of type VOID

   p = &x;     // Warning now disappears because P is of type void pointer. 

   //cout << "The value is: " << *p << endl; // WARNING and to fix it do the casting:
   cout << "TThe address is: " << p << endl;  // address of x
   cout << "TThe value is: " << *(static_cast<int*>(p)) << endl << endl;    // int*  means  int pointer.


    return 0;
}