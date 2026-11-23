
#include <iostream>
using namespace std;

// Pointers Vs references
// 
// A common question: 
// Why does one need to use pointers even though the concept of referece does exist ?
//
/*
┌──────────────────────────────────────────────────────────────────────────────┐   ┌──────────────────────────────────────────────┐
│                                  PROGRAM                                     │   │                    MEMORY                    │
│                                                                              │   │                                              │
│  #include <iostream>                                                         │   │  Name: a,x  // x dala3 name added after     │
│  using namespace std;                                                        │   │  line2 was executed                         │
│                                                                              │   │                                              │
│  int main()                                                                  │   │  // so here,value 10 is accessed via either │
│  {                                                                           │   │  // a or x.                                 │
│      int a = 10;    // Line 1                                                │   │  ┌────────┐                                 │
│      int &x = a;   // reference x (isim dala3 for variable a)                │   │  │   10   │ <───────────────┐               │
│                                                                              │   │  └────────┘                 │               │
│      cout << &a << endl;    // 000000469851FD31                              │   │  Address:                   │               │
│      cout << &x << endl;    // 000000469851FD31                              │   │  000000469851FD31           │               │
│                                                                              │   │                             │               │
│      cout << a << endl;     // 10                                            │   │                             │               │
│      cout << x << endl;     // 10                                            │   │                             │               │
│                                                                              │   │                             │               │
│  // so, reference (reference x here) is                                      │   │                             │               │
│  // because  I want to give a dala3 name (x) for an already                  │   │                             │               │
│  // existing variable (a)(with off course an already existing                │   │                             │               │
│  // memory space.                                                            │   │                             │               │
│                                                                              │   │                             │               │
│      int * p = &a;                                                           │   │  Name: p ───────────────────┘               │
│  //This is a pointer which reseves a space in memory                         │   │  ┌───────────────────┐                      │
│                                                                              │   │  │  000000469851FD31 │                      │
│       cout << p << endl;                                                     │   │  └───────────────────┘                      │
│       cout << *p << endl;                                                    │   │  Address: 000000FD9851FC99                  │
│                                                                              │   │                                             │
│      return 0;                                                               │   │                                             │
│                                                                              │   │                                             │
│                                                                              │   │                                             │
│  }                                                                           │   │                                             │
└──────────────────────────────────────────────────────────────────────────────┘   └─────────────────────────────────────────────┘


 Also, examine the following:


┌──────────────────────────────────────────────────────────────┐   ┌────────────────────────────────────────┐
│                          PROGRAM                             │   │                 MEMORY                 │
│                                                              │   │                                        │
│  #include <iostream>                                         │   │  Name: a,x  // once isim dala3 is attached to a variable
│  using namespace std;                                        │   │  ┌────────┐  // then, it stays with it and cant't be re-assigned
│                                                              │   │  │   10   │ <---------│  // to a different variable.
│  int main()                                                  │   │  └────────┘           │                │
│  {                                                           │   │  Address:             │                │
│      int a = 10;                                             │   │  000000469851FD31     │                │
│      int &x = a;                                             │   │                       │                │
│                                                              │   │                       │                │
│      cout << &a << endl;                                     │   │                       │                │
│      cout << &x << endl;                                     │   │                       │                │
│                                                              │   │                       │                │
│      cout << a << endl;                                      │   │                       │                │
│      cout << x << endl;                                      │   │                       │                │
││                                                                                         │                │
│                              immediately                     │   │                       │                │
│       int * p = &a;    ----------------------------------->  │   │  Name: p -------------│                │
│                                                              │   │  ┌───────────────────┐                 │
│                                                              │   │  │  000000469851FD31 │                 │
│                                                              │   │  └───────────────────┘                 │
│                                                              │   │  Address: 000000FD9851FC99             │
│       cout << p << endl;                                     │   │                                        │
│       cout << *p << endl;                                    │   │                                        │
│                           immediately                        │   │                                        │
│       int b = 20;   ----------------------------------->     │   │  Name: b                               │
│                                                              │   │  ┌────────┐                            │
│                                                              │   │  │   20   │ <----------------│         │
│                                                              │   │  └────────┘                  │         │
│                                                              │   │  Address: 000000469851FD42   │         │
│                                                              │   │                              │         │
│       p = &b; ---re-assigning is possible for pointers---->  │   │  Name: p --------------------│         │
│                                                              │   │  ┌───────────────────┐                 │
│                                                              │   │  │  000000469851FD42 │                 │
│                                                              │   │  └───────────────────┘                 │
│                                                              │   │  Address: 000000FD9851FC99 
│
│                                                              │   │  // NOTE: This is the SAME EXACT                                      │
│        int &x = b;  //Error. Re-assigning NOT possible       │   │  // previous p BOX where the P address                                      │
│                      // for a reference (isim dala3)         │   │  // STAYS the same but it stores a diff address                                     │
│        cout << p << endl;                                    │   │  (had to do that for these notes so things are clear)                                       │
│       cout << *p << endl;                                    │   │                                        │
│                                                              │   │                                        │
│      return 0;                                               │   │                                        │
│                                                              │   │                                        │
│                                                              │   │                                        │
│  }                                                           │   │                                        │
└──────────────────────────────────────────────────────────────┘   └────────────────────────────────────────┘
 
 For the above existing code:

 During run time, where reference x is the isim al dala3 for variable a,

 re-assigning x as an isim dala3 for another existing variable (other than a) is NOT possible.
 once isim dala3 is assigned once for a variable. Thereafter, it can NOT be re-assigned.

 whereas,

 it is possible to re-assign the pointer variable (= storing another address in memory).
 this is illustrated.

 In a nutshell, the difference between a pointer & a reference is that,
 A pointer is akin to a Joker ( can contain the address of a new variable by re-assigning during run time).

 whereas, a reference (isim al dala3), once you attach it to an existing variable
 then, it can not be re-attached (re-assigned during run time) to a different existing variable.

*/





int main()
{
    




    return 0;
}


