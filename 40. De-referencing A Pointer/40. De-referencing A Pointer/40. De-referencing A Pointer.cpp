

#include <iostream>
using namespace std;


/* When a pointer points to a variable object = it is now referencing that specific object. 
  De-referencing is accessing the actual value.
   
   to do all of that:

┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  int a = 10;    ------------------------------> immediately  │   │  Name: a                    │
│                                                              │   │  ┌────────┐                 │
│                                                              │   │  │   10   │<<-----          │
│                                                              │   │  └────────┘       │
                                                                   │  Address:         │         │
│                                                              │   │  000000469851FC54 │         │
│                                                              │                       │
│                                                                                      │
│  int * p = &a;   -----------------------------> immediately  │   │  Name: p ----------  // p now points (referencing) to variable a object.
│  cout << p;       //  000000469851FC54                       │   │  ┌───────────────────┐      │ & the point behind that is NOTHING BUT accessing the value of a (10 here).
│                                                              │   │  │  000000469851FC54 │      │
│                                                              │   │  └───────────────────┘      │
│                                                              │   │   Address:                  │
│                                                              │   │   000000FD9851FC99          │
│                                                              │   │
│                                                              │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘


 The GOAL behind that is to ACCESS THE VALUE of the variable that p is pointing to ( = that p is referencing).
 So how does one do that ?

 Answer:    *p      // this is THE ULTIMATE GOAL OF A POINTER    
 // Imagine the star * as the arrow that launches, from p, 
    pointing to the object = referencing the object (in order to access the value of object).

 cout << *p << endl;   // 10 


 so examine this code below:
*/




//int main()
//{
//    int a = 10;
//
//    cout << a << endl;
//    cout << &a << endl;
//
//    int* p;
//    p = &a;
//
//    cout << p << endl;
//    cout << *p << endl;   // 10  (the ULTIMATE GOAL OF A POINTER).
//
//
//}
                                                                                                               



/* Now, let's say that I want to change the value of a, using a pointer (This is the STRENGTH OF POINTERS )
   instead of chaning the value of a directly:

   Then simply, use:

   *p = 20;

  Have a look below:
┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  int a = 10;    ------------------------------ > immediately │   │  Name : a                   │
│  cout << a << endl;                                          │   │  ┌────────────┐             │
│  cout << &a << endl;                                         │   │  │x10x x20x 30│ << ----     │
│                                                              │   │  └────────────┘   │         │ 
│  int* p;                                                     │   │  Address :        │         │
│  p = &a;     ------------------------------ > immediately    │   │  000000469851FC54 │         │
│                                                              │                       │
│  cout << p << endl;                                          │                       │
│  cout << *p << endl;                                         │   │                   │         │
│                                                              │   │  Name : p ---------  // p now points to variable a object (crucial to understand).
│  *p = 20;  // changing the value of a using the pointer.     │   │  ┌───────────────────┐      │& the point behind that is NOTHING BUT accessing the value of a(10 here).
│                                                              │   │  │  000000469851FC54 │      │
│  cout << a << endl;   // 20                                      │  └───────────────────┘      │
│  cout << *p << endl; // 20                                   │   │   Address :                 │
│                                                              │   │   000000FD9851FC99          │
│  a = 30;  // changing the value of a directly                │   │                             │
│                                                              │   │                             │
│  cout << a << endl;  //30                                    │   │                             │
│  cout << *p << endl;  //30                                   │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘     */



// Now examine the full code:

int main()
{
    int a = 10;

    cout << "a value = " << a << endl;
    cout << "a address = " << &a << endl;

    int* p;
    p = &a;                     // REFERENCING

    cout << "Pointer Value = " << p << endl;
    cout << "Value of the address that p is pointing to is " << *p << endl;

    *p = 20;

    cout << a << endl;
    cout << *p << endl;      // DE-REFERENCING  (accessing the value)

    a = 30;

    cout << a << endl;
    cout << *p << endl;

    cout << endl;

    return 0;
}



