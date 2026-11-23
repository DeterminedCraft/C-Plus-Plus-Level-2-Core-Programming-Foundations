
#include <iostream>
using namespace std;

/* How to assign a dala3 name to an already existing variable ?
   Or lets say that you encouter something such as:

  int & x  = a;   // when the compiler notices the &, it never assigns a space in memory for x.
                  // instead make x as a reference for A.

  it means:
  look for variable a in memory
  give it a dala3 name of x ( with everything else remains intact - The value & the address).

*/

/*
┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  #include <iostream>                                         │   │  Name: a,x  // x dala3 name added when line2 is executed.
│  using namespace std;                                        │   │  ┌────────┐                 │
│                                                              │   │  │   10   │                 │
│  int main()                                                      │  └────────┘                 │
│  {                                                           │   │  Address:                   │
│      int a = 10;    // Line1                                 │      000000469851FD31           │
       int & x = a    // Line2                                 │   │                             │
               
        cout << &a << endl;                                    │   │ 
        cout << &x << endl;                                    │   │
                                                               │   │
        cout << a << endl;                                     │   │
│       cout << x << endl;                                     │                                 │
│                                                              │   │                             │
│       return 0;                                              │                                 │
│                                                              │   │                             │
│                                                              │   │                             │
│  }                                                           │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘
*/


//int main()
//{
//    int a = 10;   
//    int& x = a;    
//
//    cout << &a << endl;   // a Hexidecimal address
//    cout << &x << endl;   // the exact saem address.
//     
//    cout << a << endl;     // 10
//    cout << x << endl;    // 10
//
//    return 0;
//}



// Now, if you change the value of either a or x 
// (They are the same variable whose name is a and dala3 name is x),
// 
// then both a and x will have the new updated value 
// becasue both share the SAME memory address.
//



int main()
{
    int a = 10;
    int& x = a;

    cout << &a << endl;   // a Hexidecimal address
    cout << &x << endl;   // the exact saem address.


    x = 20;
    cout << a << endl;     // 20
    cout << x << endl;    // 20

    return 0;
}